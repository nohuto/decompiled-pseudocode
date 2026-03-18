/*
 * XREFs of HMUnlockObject @ 0x1C00DF140
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     HMUnlockDestroyObject @ 0x1C00DEBB8 (HMUnlockDestroyObject.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C01BFE20 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F3910 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal(a1);
  return a1;
}
