/*
 * XREFs of ?FindTemporarySegmentLocationForResource@VIDMM_LINEAR_POOL@@QEAAJPEBUVIDMM_FIND_TEMPORARY_LOCATION_ARGS@@_NPEA_K2@Z @ 0x1C00C5708
 * Callers:
 *     ?MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z @ 0x1C00BB09C (-MoveDisplayingResource@VIDMM_MEMORY_SEGMENT@@QEAA_K_K0PEBUVIDMM_DISPLAYING_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindTemporarySegmentLocationForResource(
        VIDMM_LINEAR_POOL *this,
        const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *a2,
        __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  char *v5; // r13
  unsigned __int64 v6; // r15
  char *v7; // r14
  VIDMM_LINEAR_POOL *v8; // rbx
  __int64 v9; // r12
  char v10; // bp
  char *v12; // rsi
  __int64 v14; // rax
  _QWORD v15[5]; // [rsp+20h] [rbp-68h] BYREF
  char *v16; // [rsp+48h] [rbp-40h] BYREF
  char v17; // [rsp+58h] [rbp-30h]

  v15[2] = 0LL;
  v5 = (char *)this + 72;
  v6 = 0LL;
  v7 = (char *)*((_QWORD *)this + 9);
  v8 = 0LL;
  v9 = *((_QWORD *)a2 + 3) - 1LL;
  v17 = 2;
  v10 = a3;
  while ( v7 != v5 )
  {
    v12 = v7 - 40;
    this = (VIDMM_LINEAR_POOL *)*((_QWORD *)v7 - 5);
    if ( this != v8 )
    {
      v16 = v7;
      v15[1] = this - v8;
      v12 = (char *)v15;
      this = v8;
      v15[0] = v8;
      v7 = (char *)&v16;
    }
    v8 = (VIDMM_LINEAR_POOL *)((char *)this + *((_QWORD *)v12 + 1));
    if ( (unsigned __int64)v8 > *((_QWORD *)a2 + 1) )
      break;
    if ( (unsigned __int64)this < *(_QWORD *)a2
      || (LOBYTE(this) = v12[56], (unsigned __int8)((_BYTE)this - 2) > 1u)
      || v10 && (_BYTE)this != 2
      || (this = (VIDMM_LINEAR_POOL *)*((_QWORD *)v12 + 2)) != 0LL
      && !(*((unsigned __int8 (__fastcall **)(VIDMM_LINEAR_POOL *, const struct VIDMM_FIND_TEMPORARY_LOCATION_ARGS *, __int64))a2
           + 4))(
            this,
            a2,
            a3)
      || *(_QWORD *)v12 < *((_QWORD *)a2 + 6) && (unsigned __int64)v8 > *((_QWORD *)a2 + 5) )
    {
      v6 = ~v9 & ((unsigned __int64)v8 + v9);
    }
    else
    {
      this = (VIDMM_LINEAR_POOL *)(v6 + *((_QWORD *)a2 + 2));
      if ( this <= v8 )
      {
        *a4 = v6;
        *a5 = (unsigned __int64)v8;
        return 0LL;
      }
    }
    v7 = *(char **)v7;
  }
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdWarning(this, a2);
    *(_QWORD *)(v14 + 24) = *((_QWORD *)a2 + 2);
    WdLogEvent5_WdWarning(v14);
  }
  return 3221225473LL;
}
