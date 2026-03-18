/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00C83F8
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00BDC0C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  unsigned __int64 v13; // rdi
  _QWORD **v14; // r13
  _QWORD *i; // r14
  _QWORD *v16; // rbx
  __int64 v18; // rax
  _QWORD v19[8]; // [rsp+20h] [rbp-68h] BYREF

  memset(v19, 0, sizeof(v19));
  v10 = *((_QWORD *)a2 + 3);
  v11 = 0LL;
  v19[2] = 0LL;
  v12 = v10 - 1;
  v13 = 0LL;
  LOBYTE(v19[7]) = 2;
  v14 = (_QWORD **)((char *)this + 72);
  for ( i = *v14; i != v14; i = (_QWORD *)*i )
  {
    v16 = i - 5;
    v9 = *(i - 5);
    if ( v9 != v13 )
    {
      v19[5] = i;
      v19[1] = v9 - v13;
      v16 = v19;
      v9 = v13;
      v19[0] = v13;
      i = &v19[5];
    }
    v13 = v9 + v16[1];
    if ( v13 > *((_QWORD *)a2 + 1) )
      break;
    if ( v9 < *(_QWORD *)a2
      || (LOBYTE(v9) = *((_BYTE *)v16 + 56), (unsigned __int8)(v9 - 2) > 1u)
      || a3 && (_BYTE)v9 != 2
      || (v9 = v16[2]) != 0 && !(*((unsigned __int8 (**)(void))a2 + 4))()
      || *v16 < *((_QWORD *)a2 + 6) && v13 > *((_QWORD *)a2 + 5) )
    {
      v11 = ~v12 & (v12 + v13);
    }
    else
    {
      v9 = v11 + *((_QWORD *)a2 + 2);
      if ( v9 <= v13 )
      {
        *a4 = v11;
        *a5 = v13;
        return 0LL;
      }
    }
  }
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdWarning(v9, v8);
    *(_QWORD *)(v18 + 24) = *((_QWORD *)a2 + 2);
    WdLogEvent5_WdWarning(v18);
  }
  return 3221225473LL;
}
