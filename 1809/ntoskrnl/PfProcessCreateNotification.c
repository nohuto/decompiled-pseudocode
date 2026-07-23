/*
 * XREFs of PfProcessCreateNotification @ 0x140667D1C
 * Callers:
 *     PspUserThreadStartup @ 0x1405F7E40 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x140668014 (PfCheckDeprioritizeImage.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_14043CC08 & 1) != 0 || (dword_14043D270 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (char *)&P + 1);
    if ( (dword_14043D270 & 1) != 0 )
    {
      v3 = *(unsigned int *)(a1 + 1180);
      if ( (_DWORD)v3 )
      {
        if ( (unsigned int)PfCheckDeprioritizeImage(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
