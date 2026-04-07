/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x180074138
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A64DC (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v3 = v2 + 1;
  v4 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 >= (unsigned int)v2 )
  {
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, 1, a2);
      v4 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)a1 + 16 * v2) = *a2;
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xB5u);
  }
  return v4;
}
