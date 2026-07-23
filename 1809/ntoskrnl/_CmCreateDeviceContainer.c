/*
 * XREFs of _CmCreateDeviceContainer @ 0x1406EB0F4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1406E9414 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmCreateDeviceContainerWorker @ 0x1406EB258 (_CmCreateDeviceContainerWorker.c)
 */

__int64 __fastcall CmCreateDeviceContainer(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rdi
  int v9; // eax
  int DeviceContainerWorker; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  HIDWORD(v16[4]) = 0;
  LODWORD(v16[2]) = 4;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        goto LABEL_18;
      if ( v9 )
      {
        v11 = -1073741595;
        goto LABEL_21;
      }
    }
  }
  DeviceContainerWorker = CmCreateDeviceContainerWorker(
                            a1,
                            a2,
                            v16[2],
                            (unsigned int)&v16[3],
                            (__int64)&v16[4],
                            SWORD2(v16[4]));
  v11 = DeviceContainerWorker;
  if ( !v8 )
    goto LABEL_11;
  LODWORD(v16[0]) = DeviceContainerWorker;
  v12 = v8(a1, a2, 5LL);
  v13 = v12;
  if ( v12 == -1073741822 )
    goto LABEL_11;
  if ( v12 == -1073741536 )
  {
LABEL_18:
    v11 = (int)v16[0];
    goto LABEL_11;
  }
  v14 = v11;
  if ( v13 )
    v14 = -1073741595;
  v11 = v14;
LABEL_11:
  if ( v11 >= 0 && a4 )
  {
    *a4 = v16[3];
    goto LABEL_14;
  }
LABEL_21:
  if ( v16[3] )
    ZwClose(v16[3]);
LABEL_14:
  if ( v11 >= 0 && a5 )
    *a5 = v16[4];
  return (unsigned int)v11;
}
