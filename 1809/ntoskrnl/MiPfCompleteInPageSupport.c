/*
 * XREFs of MiPfCompleteInPageSupport @ 0x14001A0B8
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiInitializePageFaultPacket @ 0x140096158 (MiInitializePageFaultPacket.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 AnyMultiplexedVm)
{
  unsigned int v3; // edx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v8[56]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+78h] [rbp-70h]

  v7 = 0LL;
  v3 = *(_DWORD *)(a1 + 192);
  if ( AnyMultiplexedVm == 1 )
  {
    v6 = ((v3 >> 1) & 3) - 1;
    if ( ((v3 >> 1) & 3) != 1 )
    {
      switch ( (v3 >> 1) & 3 )
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
    v3 &= 0xFFFFFFF9;
    *(_DWORD *)(a1 + 192) = v3;
  }
  *(_DWORD *)(a1 + 192) = v3 | 0x1000000;
  MiInitializePageFaultPacket(0, 0, 0, 0, v8);
  v9 = AnyMultiplexedVm;
  MiWaitForInPageComplete(v8, a1, &v7);
  return MiFinishHardFault(v8, 0LL, a1, 0LL);
}
