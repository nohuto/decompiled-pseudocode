/*
 * XREFs of PfProcessCreateNotification @ 0x140658BEC
 * Callers:
 *     PspUserThreadStartup @ 0x1405E6CA0 (PspUserThreadStartup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfCalculateProcessHash @ 0x1406588F0 (PfCalculateProcessHash.c)
 *     PfSnBeginAppLaunch @ 0x140658C84 (PfSnBeginAppLaunch.c)
 *     PfCheckDeprioritizeImage @ 0x140658EEC (PfCheckDeprioritizeImage.c)
 */

__int64 __fastcall PfProcessCreateNotification(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225659LL;
  P = 0LL;
  if ( (dword_140467608 & 1) != 0 || (dword_140467C70 & 1) != 0 )
  {
    PfCalculateProcessHash(a1, (unsigned __int64)&P + 1);
    if ( (dword_140467C70 & 1) != 0 )
    {
      v3 = *(unsigned int *)(a1 + 1180);
      if ( (_DWORD)v3 )
      {
        if ( (unsigned int)PfCheckDeprioritizeImage(v3) )
          _InterlockedOr((volatile signed __int32 *)(a1 + 780), 0x4000u);
      }
    }
  }
  PfSnBeginAppLaunch(a1, P, 0LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
