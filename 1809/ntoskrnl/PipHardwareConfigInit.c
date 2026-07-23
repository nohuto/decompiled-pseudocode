/*
 * XREFs of PipHardwareConfigInit @ 0x1409C73FC
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeQueryBootTimeValues @ 0x140129380 (KeQueryBootTimeValues.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUID @ 0x14058C220 (RtlStringFromGUID.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C8C40 (_PnpCtxGetCachedContextBaseKey.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopCreateRegistryKeyEx @ 0x14070A964 (IopCreateRegistryKeyEx.c)
 *     _PnpCtxRegQueryKeyPathName @ 0x14073AE58 (_PnpCtxRegQueryKeyPathName.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140823FA4 (PipHardwareConfigClearStartOverrides.c)
 *     PipHardwareConfigTriggerRespecialize @ 0x140824144 (PipHardwareConfigTriggerRespecialize.c)
 *     PipHardwareConfigExists @ 0x1409F62AC (PipHardwareConfigExists.c)
 */

__int64 __fastcall PipHardwareConfigInit(GUID *Guid)
{
  HANDLE v2; // r15
  int v3; // eax
  PVOID v4; // rsi
  int CachedContextBaseKey; // ebx
  HANDLE v6; // r12
  int v7; // eax
  HANDLE v8; // rdi
  NTSTATUS RegistryValue; // r14d
  __int64 v10; // rcx
  int v11; // r14d
  bool v12; // r14
  unsigned int v14; // eax
  int v15; // r14d
  bool v16; // zf
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  PVOID P; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING v19; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  LARGE_INTEGER Data; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+80h] [rbp-88h] BYREF
  __int64 v25; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v26[528]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v17) = -1;
  *(_DWORD *)&ValueName.Length = 4063292;
  v24 = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  P = 0LL;
  v2 = 0LL;
  ValueName.Buffer = L"\\Registry\\Machine\\System\\Setup";
  v3 = IopCreateRegistryKeyEx(&P, 0LL, &ValueName, 0xF003Fu, 0, 0LL);
  v4 = P;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v4 )
  {
    *(_DWORD *)&ValueName.Length = 1703960;
    ValueName.Buffer = L"Respecialize";
    ZwDeleteValueKey(v4, &ValueName);
  }
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 15, (__int64)&KeyHandle);
  if ( CachedContextBaseKey >= 0 )
  {
    CachedContextBaseKey = RtlStringFromGUID(Guid, &PnpCurrentHardwareConfigurationGuidString);
    if ( CachedContextBaseKey >= 0 )
    {
      v6 = KeyHandle;
      v19.Buffer = L"LastConfig";
      *(_DWORD *)&v19.Length = 1441812;
      CachedContextBaseKey = ZwSetValueKey(
                               KeyHandle,
                               &v19,
                               0,
                               1u,
                               PnpCurrentHardwareConfigurationGuidString.Buffer,
                               PnpCurrentHardwareConfigurationGuidString.Length + 2);
      if ( CachedContextBaseKey >= 0 )
      {
        v7 = IopCreateRegistryKeyEx(
               &Handle,
               v6,
               &PnpCurrentHardwareConfigurationGuidString,
               0xF003Fu,
               0,
               (ULONG *)&KeyHandle);
        v8 = Handle;
        CachedContextBaseKey = v7;
        if ( v7 >= 0 )
        {
          RegistryValue = IopGetRegistryValue(Handle, L"Id", 0, &P);
          CachedContextBaseKey = -1073741823;
          if ( RegistryValue >= 0 )
          {
            if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
              LODWORD(v17) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
            else
              RegistryValue = -1073741823;
            ExFreePoolWithTag(P, 0);
            if ( RegistryValue >= 0 )
              goto LABEL_14;
          }
          LODWORD(v17) = 0;
          if ( IopGetRegistryValue(v6, L"LastId", 0, &P) >= 0 )
          {
            if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
              LODWORD(v17) = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) + 1;
            ExFreePoolWithTag(P, 0);
          }
          v14 = v17;
          v15 = v17 - 1;
          if ( (_DWORD)v17 != (_DWORD)v17 - 1 )
          {
            do
            {
              v16 = (unsigned __int8)PipHardwareConfigExists(v6, v14) == 0;
              v14 = v17;
              if ( v16 )
                break;
              v14 = v17 + 1;
              LODWORD(v17) = v14;
            }
            while ( v14 != v15 );
            if ( v14 != v15 )
            {
              *(_DWORD *)&v19.Length = 917516;
              v19.Buffer = L"LastId";
              ZwSetValueKey(v6, &v19, 0, 4u, &v17, 4u);
              v19.Buffer = L"Id";
              *(_DWORD *)&v19.Length = 393220;
              CachedContextBaseKey = ZwSetValueKey(v8, &v19, 0, 4u, &v17, 4u);
              if ( CachedContextBaseKey >= 0 )
              {
LABEL_14:
                PnpCurrentHardwareConfigurationIndex = v17;
                KeQueryBootTimeValues(&v25, &Data, &Handle);
                Data.QuadPart -= (LONGLONG)Handle;
                v19.Buffer = L"LastUse";
                *(_DWORD *)&v19.Length = 1048590;
                ZwSetValueKey(v8, &v19, 0, 3u, &Data, 8u);
                v19.Buffer = (wchar_t *)L"Current";
                *(_DWORD *)&v19.Length = 1048590;
                CachedContextBaseKey = IopCreateRegistryKeyEx(&v24, v6, &v19, 0xF003Fu, 3u, 0LL);
                if ( CachedContextBaseKey < 0
                  || (LODWORD(Handle) = 260,
                      CachedContextBaseKey = PnpCtxRegQueryKeyPathName(v10, (__int64)v8, (__int64)v26, (__int64)&Handle),
                      CachedContextBaseKey < 0) )
                {
                  v2 = v24;
                }
                else
                {
                  v2 = v24;
                  CachedContextBaseKey = ZwSetValueKey(
                                           v24,
                                           &CmSymbolicLinkValueName,
                                           0,
                                           6u,
                                           v26,
                                           2 * (_DWORD)Handle - 2);
                  if ( CachedContextBaseKey >= 0 )
                  {
                    if ( InitSafeBootMode )
                      goto LABEL_49;
                    if ( IopGetRegistryValue(v8, L"Reset", 0, &P) >= 0 )
                    {
                      v11 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4
                          ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2))
                          : 0;
                      ExFreePoolWithTag(P, 0);
                    }
                    else
                    {
                      v11 = 0;
                    }
                    if ( v11 )
                    {
LABEL_49:
                      if ( (int)PipHardwareConfigClearStartOverrides((unsigned int)v17) >= 0 )
                      {
                        *(_DWORD *)&ValueName.Length = 786442;
                        ValueName.Buffer = L"Reset";
                        ZwDeleteValueKey(v8, &ValueName);
                      }
                    }
                    if ( v4 )
                    {
                      if ( (_DWORD)KeyHandle == 1 )
                        goto LABEL_60;
                      v12 = 0;
                      if ( IopGetRegistryValue(v4, L"RespecializeStarted", 0, &P) >= 0 )
                      {
                        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                          v12 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                        ExFreePoolWithTag(P, 0);
                        if ( v12 )
                          goto LABEL_60;
                      }
                      if ( IopGetRegistryValue(v8, L"Respecialize", 0, &P) >= 0 )
                      {
                        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
                          v12 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) == 1;
                        ExFreePoolWithTag(P, 0);
                        if ( v12 )
                        {
LABEL_60:
                          if ( (int)PipHardwareConfigTriggerRespecialize(v4) >= 0 )
                          {
                            *(_DWORD *)&ValueName.Length = 1703960;
                            ValueName.Buffer = L"Respecialize";
                            ZwDeleteValueKey(v8, &ValueName);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v8 )
          ZwClose(v8);
        if ( v2 )
          ZwClose(v2);
      }
    }
  }
  if ( v4 )
    ZwClose(v4);
  return (unsigned int)CachedContextBaseKey;
}
