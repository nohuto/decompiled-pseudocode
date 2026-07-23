/*
 * XREFs of PpForEachDeviceInstanceDriver @ 0x1406EF79C
 * Callers:
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x14059FB8C (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmGetInstallerClassRegProp @ 0x1406F24D4 (_CmGetInstallerClassRegProp.c)
 *     PiForEachDriverQueryRoutine @ 0x14070E2DC (PiForEachDriverQueryRoutine.c)
 */

__int64 __fastcall PpForEachDeviceInstanceDriver(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rdi
  __int64 result; // rax
  __int16 *v7; // r14
  int DeviceRegProp; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 **v12; // rsi
  char v13; // cl
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int16 *v17; // rdx
  HANDLE v18; // r9
  unsigned int v19; // r8d
  int InstallerClassRegProp; // eax
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-79h] BYREF
  int NumberOfBytes_4; // [rsp+64h] [rbp-75h] BYREF
  unsigned int v23; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v24[4]; // [rsp+6Ch] [rbp-6Dh] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-69h] BYREF
  HANDLE v26; // [rsp+78h] [rbp-61h] BYREF
  __int16 *v27; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v29[80]; // [rsp+A0h] [rbp-39h] BYREF

  Handle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  PoolWithTag = 0LL;
  result = PnpUnicodeStringToWstr(&v27, 0LL, a1);
  if ( (int)result >= 0 )
  {
    v7 = v27;
    DeviceRegProp = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v27, 16, 0, 131097, 0, (__int64)&v26, 0LL);
    if ( DeviceRegProp >= 0 )
    {
      NumberOfBytes_4 = 78;
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        (__int64)v7,
                        (__int64)v26,
                        9,
                        (__int64)&v23,
                        (__int64)v29,
                        (__int64)&NumberOfBytes_4,
                        0);
      if ( DeviceRegProp >= 0 && v23 == 1 && NumberOfBytes_4 )
        DeviceRegProp = CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)v29, v9, v10, 131097, 0, (__int64)&Handle, 0LL);
      v28[2] = a3;
      v28[1] = PiProcessDriverInstance;
      NumberOfBytes_4 = 170;
      v28[0] = a1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xAAuLL, 0x20207050u);
      if ( PoolWithTag )
      {
        v11 = 0;
        v12 = &off_140356048;
        while ( 1 )
        {
          v13 = *((_BYTE *)v12 + 8);
          if ( v13 && !Handle )
            goto LABEL_16;
          v14 = (__int64)*v12;
          NumberOfBytes = NumberOfBytes_4;
          if ( v13 )
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v29,
                    2u,
                    (__int64)Handle,
                    0LL,
                    v14,
                    (__int64)v24,
                    (__int64)PoolWithTag,
                    NumberOfBytes_4,
                    (__int64)&NumberOfBytes,
                    0)
                : CmGetInstallerClassRegProp(
                    PiPnpRtlCtx,
                    (unsigned int)v29,
                    (_DWORD)Handle,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes);
          else
            v15 = v14
                ? PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    1u,
                    (__int64)v26,
                    0LL,
                    v14,
                    (__int64)v24,
                    (__int64)PoolWithTag,
                    NumberOfBytes_4,
                    (__int64)&NumberOfBytes,
                    0)
                : CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)v7,
                    (__int64)v26,
                    *((_DWORD *)v12 - 2),
                    (__int64)&v23,
                    (__int64)PoolWithTag,
                    (__int64)&NumberOfBytes,
                    0);
          DeviceRegProp = v15;
          if ( v15 == -1073741789 )
            break;
LABEL_14:
          if ( DeviceRegProp == -1073741275 )
          {
            DeviceRegProp = 0;
          }
          else
          {
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
            DeviceRegProp = PiForEachDriverQueryRoutine(v23, PoolWithTag, NumberOfBytes, v28);
            if ( DeviceRegProp < 0 )
              goto LABEL_17;
          }
LABEL_16:
          ++v11;
          v12 += 3;
          if ( v11 >= 5 )
            goto LABEL_17;
        }
        ExFreePoolWithTag(PoolWithTag, 0);
        NumberOfBytes_4 = NumberOfBytes;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20207050u);
        if ( !PoolWithTag )
          goto LABEL_46;
        v16 = (__int64)*v12;
        if ( *((_BYTE *)v12 + 8) )
        {
          v17 = (__int16 *)v29;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetInstallerClassRegProp(
                                      PiPnpRtlCtx,
                                      (unsigned int)v29,
                                      (_DWORD)Handle,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)PoolWithTag,
                                      (__int64)&NumberOfBytes);
            goto LABEL_45;
          }
          v18 = Handle;
          v19 = 2;
        }
        else
        {
          v17 = v7;
          if ( !v16 )
          {
            InstallerClassRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      (__int64)v7,
                                      (__int64)v26,
                                      *((_DWORD *)v12 - 2),
                                      (__int64)&v23,
                                      (__int64)PoolWithTag,
                                      (__int64)&NumberOfBytes,
                                      0);
            goto LABEL_45;
          }
          v18 = v26;
          v19 = 1;
        }
        InstallerClassRegProp = PnpGetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  (__int64)v17,
                                  v19,
                                  (__int64)v18,
                                  0LL,
                                  v16,
                                  (__int64)v24,
                                  (__int64)PoolWithTag,
                                  NumberOfBytes_4,
                                  (__int64)&NumberOfBytes,
                                  0);
LABEL_45:
        DeviceRegProp = InstallerClassRegProp;
        goto LABEL_14;
      }
LABEL_46:
      DeviceRegProp = -1073741670;
    }
LABEL_17:
    if ( v7 )
      PnpUnicodeStringToWstrFree(v7, (__int64)a1);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( Handle )
      ZwClose(Handle);
    if ( v26 )
      ZwClose(v26);
    return (unsigned int)DeviceRegProp;
  }
  return result;
}
