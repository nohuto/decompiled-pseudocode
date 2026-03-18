/*
 * XREFs of MiRelockProtoPoolPage @ 0x140091D24
 * Callers:
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiAreChargesNeededToLockPage @ 0x140054C70 (MiAreChargesNeededToLockPage.c)
 *     MiLockOwnedProtoPage @ 0x140091DC0 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x1400A74D0 (MiChargeForLockedPage.c)
 *     MiLockPageInline @ 0x1400F0710 (MiLockPageInline.c)
 */

__int64 __fastcall MiRelockProtoPoolPage(__int64 a1, char *a2)
{
  char v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = MiLockPageInline(a1);
    *a2 = v4;
  }
  else
  {
    v8 = 0;
    v4 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v8);
      while ( *(__int64 *)(a1 + 24) < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(v6, 1LL) )
    ++*(_WORD *)(a1 + 32);
  LOBYTE(v5) = v4;
  MiLockOwnedProtoPage(a1, v5);
  return a1;
}
