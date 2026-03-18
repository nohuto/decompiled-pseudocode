/*
 * XREFs of VerifierInitialization @ 0x1C0380350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 VerifierInitialization()
{
  unsigned int v0; // ebx
  NTSTATUS IsVerifierEnabled; // ecx
  ULONG v2; // r8d
  __int64 result; // rax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  IsVerifierEnabled = MmIsVerifierEnabled(&VerifierFlags);
  if ( (int)(IsVerifierEnabled + 0x80000000) < 0 || IsVerifierEnabled == -1073741820 )
  {
    v2 = VerifierFlags;
    if ( (VerifierFlags & 0xF) == 0 || (VerifierFlags & 0x400000) != 0 )
      goto LABEL_4;
    if ( !G_fConsole )
    {
      v0 = 1;
      v2 = VerifierFlags & 0xFFFFFFF7;
      dword_1C032044C = 1;
      goto LABEL_4;
    }
    GreBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( MmAddVerifierThunks(&off_1C02D7D30, 0xF0u) >= 0 )
      v0 = 1;
  }
  v2 = VerifierFlags;
LABEL_4:
  result = v0;
  gvs = v0 != 0 ? v2 & 0xFFFFFFF7 : 0;
  return result;
}
