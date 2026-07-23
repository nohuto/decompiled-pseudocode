/*
 * XREFs of _CmCreateInterfaceClass @ 0x140705B4C
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x14059EFC0 (_PnpDispatchInterfaceClass.c)
 *     PiCMOpenClassKey @ 0x1406A7FC0 (PiCMOpenClassKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x140705A3C (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmCreateInterfaceClassWorker @ 0x140705CC8 (_CmCreateInterfaceClassWorker.c)
 */

__int64 __fastcall CmCreateInterfaceClass(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rsi
  int v11; // eax
  int InterfaceClassWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  HANDLE v18[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v18, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( a3 || (LODWORD(v18[2]) = 1, a4) )
    LODWORD(v18[2]) = a3;
  HIDWORD(v18[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 4LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_21;
      if ( v11 )
      {
        v13 = -1073741595;
        goto LABEL_15;
      }
    }
  }
  InterfaceClassWorker = CmCreateInterfaceClassWorker(
                           a1,
                           a2,
                           v18[2],
                           (unsigned int)&v18[3],
                           (__int64)&v18[4],
                           SWORD2(v18[4]));
  v13 = InterfaceClassWorker;
  if ( !v10 )
    goto LABEL_13;
  LODWORD(v18[0]) = InterfaceClassWorker;
  v14 = v10(a1, a2, 4LL);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_13;
  if ( v14 == -1073741536 )
  {
LABEL_21:
    v13 = (int)v18[0];
    goto LABEL_13;
  }
  v16 = v13;
  if ( v15 )
    v16 = -1073741595;
  v13 = v16;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v18[3];
    goto LABEL_17;
  }
LABEL_15:
  if ( v18[3] )
    ZwClose(v18[3]);
LABEL_17:
  if ( v13 >= 0 && a5 )
    *a5 = v18[4];
  return (unsigned int)v13;
}
