/*
 * XREFs of ExpIsClipSpRunningUnderVrfIrqlCheck @ 0x1405B23A4
 * Callers:
 *     sub_1406A1AF0 @ 0x1406A1AF0 (sub_1406A1AF0.c)
 * Callees:
 *     MmIsDriverVerifyingByAddress @ 0x140785010 (MmIsDriverVerifyingByAddress.c)
 *     MmIsVerifierEnabled @ 0x140960530 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall ExpIsClipSpRunningUnderVrfIrqlCheck(_DWORD *a1)
{
  int v1; // ebx
  NTSTATUS IsVerifierEnabled; // edi
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  IsVerifierEnabled = 0;
  VerifierFlags = 0;
  if ( AddressWithinSection )
  {
    if ( MmIsDriverVerifyingByAddress(AddressWithinSection) )
    {
      IsVerifierEnabled = MmIsVerifierEnabled(&VerifierFlags);
      if ( IsVerifierEnabled >= 0 && (VerifierFlags & 0x20002) != 0 )
        LOBYTE(v1) = KeGetCurrentIrql() != 0;
    }
  }
  *a1 = v1;
  return (unsigned int)IsVerifierEnabled;
}
