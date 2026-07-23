/*
 * XREFs of CmKeyBodyNeedsVirtualImage @ 0x1407F2B48
 * Callers:
 *     NtDeleteKey @ 0x1405AA940 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1405B7030 (NtDeleteValueKey.c)
 *     NtSetValueKey @ 0x1405CD8E0 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1406981A0 (NtSetInformationKey.c)
 *     NtRenameKey @ 0x1407EAD80 (NtRenameKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 */

bool __fastcall CmKeyBodyNeedsVirtualImage(__int64 a1)
{
  bool v1; // di
  bool v3; // si
  __int64 v4; // r14
  __int64 v5; // rbx
  ULONG_PTR v6; // rcx
  bool v7; // r8

  v1 = 0;
  v3 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  CmpLockRegistry();
  v5 = *(_QWORD *)(a1 + 8);
  ExAcquirePushLockSharedEx(v5 + 40, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 1u);
  if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    v3 = (*(_BYTE *)(v4 + 4152) & 0x10) != 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(v6 + 58) )
    v7 = v3;
  if ( (*(_DWORD *)(a1 + 48) & 0x10) == 0 )
    v1 = v7;
  CmpUnlockKcb(v6);
  CmpUnlockRegistry();
  return v1;
}
