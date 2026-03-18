/*
 * XREFs of CmpStartRMLogs @ 0x1406BBDE8
 * Callers:
 *     CmpTransInitializeTransaction @ 0x1406BAD38 (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x140638760 (CmpLockRegistryFreezeAware.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     CmpStartRMLog @ 0x1406BC0BC (CmpStartRMLog.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  bool v5; // bp
  __int64 v6; // rsi
  int started; // eax
  UUID Uuid; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 104);
  if ( (v3 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v3 & 1) == 0 )
  {
    v5 = CmpUuidCreate(&Uuid) >= 0;
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0);
    started = CmpStartRMLog(a1, 0LL);
    v2 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v5 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v2 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry();
    *(_DWORD *)(v6 + a1 + 108) = v2;
  }
  return v2;
}
