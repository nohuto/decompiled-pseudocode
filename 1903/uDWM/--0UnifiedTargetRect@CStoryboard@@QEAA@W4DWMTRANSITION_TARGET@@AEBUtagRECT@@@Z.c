/*
 * XREFs of ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A7378
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800AAA24 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CStoryboard::UnifiedTargetRect::UnifiedTargetRect(__int64 a1, __int16 a2, _OWORD *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // eax

  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  v4 = a1 + 24;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)a1 = a2 & 0xFFF;
  *(_OWORD *)(a1 + 4) = *a3;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
  {
    if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v4, 16, 1, a3);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  }
  return a1;
}
