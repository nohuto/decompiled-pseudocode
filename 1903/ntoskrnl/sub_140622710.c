/*
 * XREFs of sub_140622710 @ 0x140622710
 * Callers:
 *     sub_1406EFEF0 @ 0x1406EFEF0 (sub_1406EFEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_140621D40 @ 0x140621D40 (sub_140621D40.c)
 *     ExpHwidProcessInterface @ 0x1406224A4 (ExpHwidProcessInterface.c)
 *     ExpHwidProcessDevice @ 0x140622898 (ExpHwidProcessDevice.c)
 *     ExpHwidAuthenticateHardwareId @ 0x140622B44 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x140622CF0 (ExpHwidGetDeviceProperties.c)
 *     PiPnpFreePdoDeviceList @ 0x1406A3B5C (PiPnpFreePdoDeviceList.c)
 *     sub_1406A3BA4 @ 0x1406A3BA4 (sub_1406A3BA4.c)
 *     sub_1406EF0EC @ 0x1406EF0EC (sub_1406EF0EC.c)
 */

__int64 __fastcall sub_140622710(PVOID *a1, _DWORD *a2)
{
  int v4; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // r14d
  int (__fastcall **v8)(__int64, UNICODE_STRING *, __int64); // rsi
  int (__fastcall *v9)(__int64, UNICODE_STRING *, __int64); // rax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+38h] [rbp-51h]
  BOOL v14; // [rsp+3Ch] [rbp-4Dh]
  PVOID P; // [rsp+40h] [rbp-49h]
  PVOID v16; // [rsp+48h] [rbp-41h] BYREF
  char v17[96]; // [rsp+50h] [rbp-39h] BYREF

  memset(v17, 0, 0x58uLL);
  sub_1406EF0EC(v17);
  v13 = 0;
  v12 = 0LL;
  v14 = a1 == 0LL;
  P = 0LL;
  v16 = 0LL;
  v4 = sub_1406A3BA4(&v16);
  if ( v4 >= 0 )
  {
    v5 = v16;
    v6 = 0LL;
    if ( *(_DWORD *)v16 )
    {
      while ( 1 )
      {
        if ( (int)ExpHwidGetDeviceProperties(*(PDEVICE_OBJECT *)&v5[2 * v6 + 2], (ULONG)v17) >= 0 )
        {
          v4 = ExpHwidAuthenticateHardwareId(*(PDEVICE_OBJECT *)&v5[2 * v6 + 2]);
          if ( v4 < 0 )
            break;
          v4 = ExpHwidProcessDevice(v17, 0LL, &v12);
          if ( v4 < 0 )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *v5 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v7 = 0;
      v8 = (int (__fastcall **)(__int64, UNICODE_STRING *, __int64))&off_1404270E0;
      while ( 1 )
      {
        v9 = *v8;
        v10 = *((_BYTE *)v8 - 16)
            ? ExpHwidProcessInterface((int)*(v8 - 1), *((_BYTE *)v8 - 15), v9, v5, (__int64)v17, (__int64)&v12)
            : v9((__int64)&v12, 0LL, 0LL);
        v4 = v10;
        if ( v10 < 0 )
          break;
        ++v7;
        v8 += 3;
        if ( v7 >= 6 )
        {
          if ( a1 )
            *a1 = P;
          P = 0LL;
          *a2 = HIDWORD(v12);
          break;
        }
      }
    }
    PiPnpFreePdoDeviceList(v5);
  }
  sub_140621D40(v17);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
