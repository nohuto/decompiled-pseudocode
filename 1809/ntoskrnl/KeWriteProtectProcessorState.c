/*
 * XREFs of KeWriteProtectProcessorState @ 0x1405733B8
 * Callers:
 *     MakeGdtReadOnly @ 0x14017E238 (MakeGdtReadOnly.c)
 *     KiDynamicProcessorInitialization @ 0x14028D728 (KiDynamicProcessorInitialization.c)
 * Callees:
 *     MmSetPageProtection @ 0x140133650 (MmSetPageProtection.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     KiShadowProcessorAllocation @ 0x140573D84 (KiShadowProcessorAllocation.c)
 */

char __fastcall KeWriteProtectProcessorState(__int64 *a1)
{
  __int64 v1; // rbp
  bool v3; // di
  int v4; // eax
  ULONG v5; // ecx

  v1 = *a1;
  v3 = VslVsmEnabled != 0;
  MmSetPageProtection(a1[7], 0x1000uLL, 2u);
  MmSetPageProtection(v1 - 16304, 0x1000uLL, 2u);
  LOBYTE(v4) = MmSetPageProtection(v1 - 12208 + 20480, 0x1000uLL, 2u);
  if ( v3 )
  {
    LOBYTE(v4) = MmSetPageProtection(v1 & 0xFFFFFFFFFFFFF000uLL, 0x1000uLL, 2u);
    if ( KiKvaShadow )
      LOBYTE(v4) = MmSetPageProtection(a1[1], 0x1000uLL, 2u);
  }
  v5 = *((_DWORD *)a1 + 105);
  if ( v5 )
  {
    if ( VslVsmEnabled )
      LOBYTE(v4) = VslFinishStartSecureProcessor(v5);
  }
  else
  {
    v4 = KiShadowProcessorAllocation(a1 + 48, v1 - 12208);
    if ( !v4 )
      KeBugCheck(0x7Du);
  }
  return v4;
}
