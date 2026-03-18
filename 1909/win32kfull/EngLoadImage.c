/*
 * XREFs of EngLoadImage @ 0x1C0270FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE __stdcall EngLoadImage(LPWSTR pwszDriver)
{
  void *v2; // rbx
  LPWSTR v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]
  char v7; // [rsp+50h] [rbp+8h] BYREF

  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  v4 = pwszDriver;
  v5 = 5;
  v6 = 1;
  v2 = (void *)((__int64 (__fastcall *)(LPWSTR, __int64, char *, __int64, _DWORD, LPWSTR *))ldevLoadImage)(
                 pwszDriver,
                 1LL,
                 &v7,
                 1LL,
                 0,
                 &v4);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return v2;
}
