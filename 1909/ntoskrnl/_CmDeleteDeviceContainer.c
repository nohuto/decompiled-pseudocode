/*
 * XREFs of _CmDeleteDeviceContainer @ 0x140935F40
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1409363B8 (_CmDeleteDeviceContainerWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainer(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  _DWORD v12[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( v4 )
  {
    v5 = v4(a1, a2, 5LL);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12[0];
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = CmDeleteDeviceContainerWorker(a1, a2, v12[4]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12[0] = v6;
  v8 = v4(a1, a2, 5LL);
  v9 = v8;
  if ( v8 == -1073741822 )
    return v7;
  if ( v8 == -1073741536 )
    return v12[0];
  v10 = v7;
  if ( v9 )
    return (unsigned int)-1073741595;
  return v10;
}
