/*
 * XREFs of ?ShiftLeft@?$DynArray@UPendingStateChangeInfo@CInteractionTracker@@$0A@@@QEAAJI@Z @ 0x1801DD9D0
 * Callers:
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DC654 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 */

__int64 __fastcall DynArray<CInteractionTracker::PendingStateChangeInfo,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebx
  unsigned int v5; // ebx

  v2 = 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x240u, 0LL);
    }
    else
    {
      v5 = v4 - a2;
      if ( v5 )
        memmove_0(*(void **)a1, (const void *)(*(_QWORD *)a1 + 24LL * a2), 24LL * v5);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v2;
}
