/*
 * XREFs of NtUserMNDragLeave @ 0x1C01F1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     UnlockMFMWFPWindow @ 0x1C01E55A8 (UnlockMFMWFPWindow.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
 */

__int64 NtUserMNDragLeave()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  v4 = gptiCurrent;
  v5 = *(_QWORD *)(gptiCurrent + 600LL);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 + 92);
    v7 = *(unsigned int *)(v5 + 88);
    v8 = *(_QWORD *)(v5 + 80);
    ++*(_DWORD *)(v5 + 40);
    xxxMNSetGapState(v8, v7, v6, 0LL);
    UnlockMFMWFPWindow((__int64 *)(v5 + 80));
    *(_DWORD *)(v5 + 88) = -1;
    *(_DWORD *)(v5 + 8) &= ~0x8000u;
    *(_DWORD *)(v5 + 92) = 0;
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
    v3 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4, v0, v1, v2);
  return v3;
}
