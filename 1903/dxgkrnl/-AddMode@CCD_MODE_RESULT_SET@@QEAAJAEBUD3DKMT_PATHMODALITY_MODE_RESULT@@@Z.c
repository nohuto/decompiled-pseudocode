/*
 * XREFs of ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02C004C
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02C2778 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00495DC (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  CCD_MODE_RESULT_SET *v4; // rsi
  CCD_MODE_RESULT_SET *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rax
  char **v11; // rcx
  char *v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v4 = (CCD_MODE_RESULT_SET *)((char *)this + 16);
    v5 = (CCD_MODE_RESULT_SET *)*((_QWORD *)this + 2);
    if ( v5 != (CCD_MODE_RESULT_SET *)((char *)this + 16) )
    {
      v6 = *((unsigned int *)this + 12);
      v7 = (unsigned int)v6 / 0x32;
      if ( (_DWORD)v6 != 50 * (_DWORD)v7 )
      {
        if ( v5 == v4 )
        {
          v8 = 0LL;
        }
        else
        {
          v8 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
          if ( *((_QWORD *)this + 3) != 8LL )
          {
LABEL_16:
            v13 = *((_OWORD *)a2 + 1);
            v14 = 12LL * (*((_DWORD *)this + 12) % 0x32u);
            *(_OWORD *)&v8[v14 + 3] = *(_OWORD *)a2;
            v15 = *((_OWORD *)a2 + 2);
            *(_OWORD *)&v8[v14 + 5] = v13;
            v16 = *((_OWORD *)a2 + 3);
            *(_OWORD *)&v8[v14 + 7] = v15;
            v17 = *((_OWORD *)a2 + 4);
            *(_OWORD *)&v8[v14 + 9] = v16;
            v18 = *((_OWORD *)a2 + 5);
            *(_OWORD *)&v8[v14 + 11] = v17;
            *(_OWORD *)&v8[v14 + 13] = v18;
            ++*((_DWORD *)this + 12);
            return 0LL;
          }
        }
        v9 = WdLogNewEntry5_WdAssertion(v6, v7);
        WdLogEvent5_WdAssertion(v9);
        goto LABEL_16;
      }
    }
    v10 = operator new[](0x12D8uLL, 0x4B677844u, PagedPool);
    v8 = v10;
    if ( v10 )
    {
      memset(v10 + 3, 0, 0x12C0uLL);
      v8[1] = 0LL;
      v8[2] = 0LL;
      *v8 = &SetElement::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v8) )
      {
        v11 = (char **)*((_QWORD *)this + 3);
        v12 = (char *)(v8 + 1);
        if ( *v11 != (char *)v4 )
          __fastfail(3u);
        *(_QWORD *)v12 = v4;
        v8[2] = v11;
        *v11 = v12;
        *((_QWORD *)this + 3) = v12;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_16;
    }
  }
  return 3221225495LL;
}
