/*
 * XREFs of PfSnAppLaunchScenarioControl @ 0x1408A1420
 * Callers:
 *     PfSnSetPrefetcherInformation @ 0x1406A723C (PfSnSetPrefetcherInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PfSnBeginAppLaunch @ 0x14066BCA4 (PfSnBeginAppLaunch.c)
 */

__int64 __fastcall PfSnAppLaunchScenarioControl(__int64 a1, char a2)
{
  int v4; // esi
  int v5; // edi
  PVOID v6; // rbx
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v9[48]; // [rsp+48h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  Object = 0LL;
  v4 = 0;
  if ( *(_DWORD *)a1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      v5 = ObpReferenceObjectByHandleWithTag(
             *(_QWORD *)(a1 + 8),
             8,
             (__int64)PsProcessType,
             a2,
             0x73576650u,
             &Object,
             0LL,
             0LL);
      if ( v5 < 0 )
      {
        v6 = Object;
      }
      else
      {
        v6 = Object;
        if ( KeGetCurrentThread()->ApcState.Process != Object )
        {
          v4 = 1;
          KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v9);
        }
        PfSnBeginAppLaunch((__int64)v6, 0LL, 9);
        v5 = 0;
        if ( v4 )
          KiUnstackDetachProcess((struct _KTHREAD *)v9, 0);
      }
      if ( v6 )
        ObfDereferenceObjectWithTag(v6, 0x73576650u);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v5;
}
