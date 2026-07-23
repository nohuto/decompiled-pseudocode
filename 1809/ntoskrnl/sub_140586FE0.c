/*
 * XREFs of sub_140586FE0 @ 0x140586FE0
 * Callers:
 *     sub_140586520 @ 0x140586520 (sub_140586520.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     sub_1405865D0 @ 0x1405865D0 (sub_1405865D0.c)
 *     PiPnpFreePdoDeviceList @ 0x140586708 (PiPnpFreePdoDeviceList.c)
 *     sub_140586960 @ 0x140586960 (sub_140586960.c)
 *     sub_1405869F4 @ 0x1405869F4 (sub_1405869F4.c)
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 *     ExpHwidProcessDevice @ 0x140587158 (ExpHwidProcessDevice.c)
 *     ExpHwidAuthenticateHardwareId @ 0x140587410 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1405875BC (ExpHwidGetDeviceProperties.c)
 */

__int64 __fastcall sub_140586FE0(PVOID *a1, _DWORD *a2)
{
  int v4; // ebx
  PVOID *v5; // rdi
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

  sub_140586960(v17);
  v13 = 0;
  v12 = 0LL;
  v14 = a1 == 0LL;
  P = 0LL;
  v16 = 0LL;
  v4 = sub_1405865D0((__int64)&v16);
  if ( v4 >= 0 )
  {
    v5 = (PVOID *)v16;
    v6 = 0LL;
    if ( *(_DWORD *)v16 )
    {
      while ( 1 )
      {
        if ( (int)ExpHwidGetDeviceProperties((PDEVICE_OBJECT)v5[v6 + 1], (ULONG)v17) >= 0 )
        {
          v4 = ExpHwidAuthenticateHardwareId((PDEVICE_OBJECT)v5[v6 + 1]);
          if ( v4 < 0 )
            break;
          v4 = ExpHwidProcessDevice(v17, 0LL, &v12);
          if ( v4 < 0 )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *(_DWORD *)v5 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v7 = 0;
      v8 = (int (__fastcall **)(__int64, UNICODE_STRING *, __int64))&off_140401D70;
      while ( 1 )
      {
        v9 = *v8;
        v10 = *((_BYTE *)v8 - 16)
            ? ExpHwidProcessInterface((int)*(v8 - 1), *((_BYTE *)v8 - 15), v9, (__int64)v5, (__int64)v17, (__int64)&v12)
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
  sub_1405869F4(v17);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v4;
}
