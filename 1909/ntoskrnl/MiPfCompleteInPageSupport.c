/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14009553C
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1400954A4 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x1402C693C (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiInitializePageFaultPacket @ 0x14009561C (MiInitializePageFaultPacket.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR a1, __int64 AnyMultiplexedVm)
{
  unsigned int v4; // edx
  __int64 v6; // rcx
  unsigned int v7[4]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v8[18]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v8, 0, 0x88uLL);
  *(_QWORD *)v7 = 0LL;
  v4 = *(_DWORD *)(a1 + 192);
  if ( AnyMultiplexedVm == 1 )
  {
    v6 = ((v4 >> 1) & 3) - 1;
    if ( ((v4 >> 1) & 3) != 1 )
    {
      switch ( (v4 >> 1) & 3 )
      {
        case 2u:
          v6 = 2LL;
          break;
        case 3u:
          v6 = 1LL;
          break;
        case 5u:
          v6 = 4LL;
          break;
        default:
          goto LABEL_5;
      }
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v6);
LABEL_5:
    v4 &= 0xFFFFFFF9;
  }
  *(_DWORD *)(a1 + 192) = v4 | 0x1000000;
  MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v8);
  v8[7] = AnyMultiplexedVm;
  MiWaitForInPageComplete((__int64)v8, a1, v7);
  return MiFinishHardFault(v8, 0LL, a1, 0LL);
}
