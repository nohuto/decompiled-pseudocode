/*
 * XREFs of MiRelockProtoPoolPage @ 0x1400CF084
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14009423C (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x140054D10 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x1400CF120 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = MiLockPageInline(a1);
    *a2 = v4;
  }
  else
  {
    v10 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(v6, 1, v7, v8) )
    ++*(_WORD *)(a1 + 32);
  LOBYTE(v5) = v4;
  MiLockOwnedProtoPage(a1, v5);
  return a1;
}
