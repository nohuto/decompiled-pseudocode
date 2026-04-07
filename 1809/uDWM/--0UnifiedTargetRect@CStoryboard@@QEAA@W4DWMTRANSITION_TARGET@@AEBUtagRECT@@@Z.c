/*
 * XREFs of ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A2BC8
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A64DC (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::UnifiedTargetRect::UnifiedTargetRect(__int64 a1, __int16 a2, _OWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // eax

  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  v4 = a1 + 24;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)a1 = a2 & 0xFFF;
  *(_OWORD *)(a1 + 4) = *a3;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
  {
    if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v4, 0x10u, 1, a3);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = *a3;
      *(_DWORD *)(v4 + 24) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, (int)v5 + 1 < (unsigned int)v5 ? 0x80070216 : 0, 0xB5u);
  }
  return a1;
}
