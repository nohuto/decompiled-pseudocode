/*
 * XREFs of HMUnlockObject @ 0x1C00DAD2C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     HMUnlockDestroyObject @ 0x1C01310FC (HMUnlockDestroyObject.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C019E8D0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01CF298 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMUnlockObject(__int64 a1, __int64 a2, __int64 a3)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    return HMUnlockObjectInternal(a1, a2, a3);
  return a1;
}
