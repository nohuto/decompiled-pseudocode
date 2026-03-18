/*
 * XREFs of ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C0287CE0
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C028A3E4 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00425EC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v4 = (_QWORD *)((char *)this + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v5 = *((unsigned int *)this + 12);
      if ( (_DWORD)v5 != 50 * ((unsigned int)v5 / 0x32) )
      {
        v6 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
        if ( *((_QWORD *)this + 3) == 8LL )
        {
          v7 = WdLogNewEntry5_WdAssertion(v5);
          WdLogEvent5_WdAssertion(v7);
        }
LABEL_14:
        v11 = *((_OWORD *)a2 + 1);
        v12 = 12LL * (*((_DWORD *)this + 12) % 0x32u);
        *(_OWORD *)&v6[v12 + 3] = *(_OWORD *)a2;
        v13 = *((_OWORD *)a2 + 2);
        *(_OWORD *)&v6[v12 + 5] = v11;
        v14 = *((_OWORD *)a2 + 3);
        *(_OWORD *)&v6[v12 + 7] = v13;
        v15 = *((_OWORD *)a2 + 4);
        *(_OWORD *)&v6[v12 + 9] = v14;
        v16 = *((_OWORD *)a2 + 5);
        *(_OWORD *)&v6[v12 + 11] = v15;
        *(_OWORD *)&v6[v12 + 13] = v16;
        ++*((_DWORD *)this + 12);
        return 0LL;
      }
    }
    v8 = operator new(0x12D8uLL, 0x4B677844u, PagedPool);
    v6 = v8;
    if ( v8 )
    {
      memset(v8, 0, 0x12D8uLL);
      v6[1] = 0LL;
      v6[2] = 0LL;
      *v6 = &SetElement::`vftable';
    }
    else
    {
      v6 = 0LL;
    }
    if ( v6 )
    {
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v6) )
      {
        v9 = (_QWORD *)*((_QWORD *)this + 3);
        v10 = v6 + 1;
        if ( (_QWORD *)*v9 != v4 )
          __fastfail(3u);
        *v10 = v4;
        v6[2] = v9;
        *v9 = v10;
        *((_QWORD *)this + 3) = v10;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_14;
    }
  }
  return 3221225495LL;
}
