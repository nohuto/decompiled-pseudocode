/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@W4ScrollState@@$0A@@@QEAAJPEFBW4ScrollState@@I@Z @ 0x18019DE00
 * Callers:
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<enum ScrollState,0>::AddMultipleAndSet(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 24);
  v3 = v2 + 1;
  v4 = v2 + 1 < v2 ? 0x80070216 : 0;
  if ( v2 + 1 < v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v4, 0xB5u);
  }
  else if ( v3 > *(_DWORD *)(a1 + 20) )
  {
    v5 = DynArrayImpl<0>::AddMultipleAndSet(a1, 4, 1, a2);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC0u);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)a1 + 4LL * v2) = *a2;
    *(_DWORD *)(a1 + 24) = v3;
  }
  return v4;
}
