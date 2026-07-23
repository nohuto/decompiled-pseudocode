/*
 * XREFs of MmCheckForSafeExecution @ 0x140859E44
 * Callers:
 *     KiEmulateAtlThunk @ 0x14029F914 (KiEmulateAtlThunk.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLocateAddress @ 0x140087850 (MiLocateAddress.c)
 *     MmValidateUserCallTarget @ 0x14085D4E8 (MmValidateUserCallTarget.c)
 */

bool __fastcall MmCheckForSafeExecution(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  char v9; // di
  __int64 Process; // r14
  unsigned __int64 Address; // rax
  __int64 v12; // r10
  unsigned __int64 v13; // rax

  CurrentThread = KeGetCurrentThread();
  v9 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( !a4
    && ((MiLocateAddress(a1), Address = MiLocateAddress(a2), !v12)
     || !Address
     || v12 == Address
     || (*(_DWORD *)(v12 + 48) & 7) == 2)
    || (v13 = MiLocateAddress(a3)) == 0
    || (*(_DWORD *)(v13 + 48) & 7) != 2 )
  {
    v9 = 0;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  if ( v9 == 1 )
    return (unsigned int)MmValidateUserCallTarget(a3, 1LL) != 0;
  return v9;
}
