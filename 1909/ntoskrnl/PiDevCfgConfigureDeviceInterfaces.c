/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x140717A20
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x140717668 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PiDevCfgParseVariableName @ 0x140145818 (PiDevCfgParseVariableName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x14029F300 (PiDevCfgParseInterfaceKeyName.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140629BE8 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PiDevCfgResolveVariable @ 0x1406FFC38 (PiDevCfgResolveVariable.c)
 *     IopRegisterDeviceInterface @ 0x140737524 (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140865F54 (PiDevCfgConfigureDeviceInterface.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterfaces(__int64 a1, void *a2, __int64 a3)
{
  wchar_t *Buffer; // rdi
  NTSTATUS v6; // eax
  int MatchingFilteredDeviceInterfaceList; // ebx
  NTSTATUS v9; // eax
  wchar_t *PoolWithTag; // rsi
  ULONG v11; // r12d
  NTSTATUS i; // eax
  int v13; // eax
  int v14; // edx
  unsigned __int16 v15; // cx
  int v16; // r9d
  __int64 v17; // rax
  int v18; // r9d
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING v23; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING *v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+88h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING v28; // [rsp+D0h] [rbp-30h] BYREF
  HANDLE v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  unsigned __int128 v32; // [rsp+100h] [rbp+0h] BYREF
  GUID v33; // [rsp+110h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = a2;
  Buffer = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v32 = 0uLL;
  *(_QWORD *)&v33.Data1 = 0LL;
  *(_QWORD *)v33.Data4 = 0LL;
  v23.Buffer = L"Interfaces";
  ObjectAttributes.ObjectName = &v23;
  Handle = 0LL;
  *(_QWORD *)&v23.Length = 1441812LL;
  v25 = 0LL;
  P = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v6;
  if ( v6 == -1073741772 )
  {
    MatchingFilteredDeviceInterfaceList = 0;
    goto LABEL_3;
  }
  if ( v6 < 0 )
    goto LABEL_3;
  *(_DWORD *)&v23.Length = 262146;
  v23.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v23;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Handle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_13;
  if ( v9 < 0 )
    goto LABEL_3;
  v29 = Handle;
  v30 = a3;
  LODWORD(v31) = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)&v29,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v31;
    if ( (int)v31 >= 0 )
    {
LABEL_13:
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x26EuLL, 0x63647050u);
      if ( !PoolWithTag )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_3;
      }
      v11 = 0;
      for ( i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, PoolWithTag, 0x26Eu, &ResultLength);
            ;
            i = ZwEnumerateKey(KeyHandle, v11, KeyBasicInformation, PoolWithTag, 0x26Eu, &ResultLength) )
      {
        MatchingFilteredDeviceInterfaceList = i;
        if ( i < 0 )
        {
          if ( i == -2147483622 )
          {
            MatchingFilteredDeviceInterfaceList = 0;
          }
          else if ( i == -2147483643 )
          {
            MatchingFilteredDeviceInterfaceList = -1073741773;
          }
          goto LABEL_51;
        }
        PoolWithTag[((unsigned __int64)*((unsigned int *)PoolWithTag + 3) >> 1) + 8] = 0;
        if ( wcsicmp(PoolWithTag + 8, L"*") )
          break;
LABEL_45:
        ++v11;
      }
      MatchingFilteredDeviceInterfaceList = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag + 8);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_51;
      v28 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      Handle = 0LL;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_51;
      LODWORD(v24) = 0;
      if ( !a3
        || !*(_QWORD *)(a3 + 16)
        || !PiDevCfgParseVariableName(DestinationString.Buffer, (UNICODE_STRING *)&v32, &v24) )
      {
        goto LABEL_39;
      }
      v24 = 0LL;
      v13 = PiDevCfgResolveVariable(a3, *((const WCHAR **)&v32 + 1), &v24);
      MatchingFilteredDeviceInterfaceList = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 )
        {
          v28 = (UNICODE_STRING)v32;
          goto LABEL_39;
        }
      }
      else
      {
        v14 = *(_DWORD *)&v24[2].Length;
        if ( (unsigned int)(v14 - 1) <= 1 )
        {
          v15 = *(&v24[2].MaximumLength + 1);
          v28.Buffer = v24[2].Buffer;
          v28.MaximumLength = v15;
          v28.Length = v15 - 2;
LABEL_28:
          if ( Buffer )
          {
            if ( *Buffer )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v23, Buffer);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v23, &v33, &v25) )
                {
                  LOBYTE(v16) = 1;
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                          a1,
                                                          (unsigned int)&v33,
                                                          v25,
                                                          v16,
                                                          (__int64)&P,
                                                          0LL);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                  MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, (int)Handle, a3);
                  ExFreePoolWithTag(P, 0);
                  if ( MatchingFilteredDeviceInterfaceList < 0 )
                    break;
                }
                v17 = -1LL;
                do
                  ++v17;
                while ( Buffer[v17] );
                Buffer += v17 + 1;
                if ( !*Buffer )
                  goto LABEL_36;
              }
LABEL_51:
              ExFreePoolWithTag(PoolWithTag, 0);
LABEL_3:
              if ( Handle )
                ZwClose(Handle);
              goto LABEL_5;
            }
LABEL_36:
            Buffer = 0LL;
            goto LABEL_42;
          }
LABEL_39:
          Buffer = 0LL;
          if ( !PiDevCfgParseInterfaceKeyName((__int64)&v28, &v33, &v25) )
          {
LABEL_43:
            ZwClose(Handle);
            goto LABEL_44;
          }
          LOBYTE(v18) = 1;
          MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                  a1,
                                                  (unsigned int)&v33,
                                                  v25,
                                                  v18,
                                                  (__int64)&P,
                                                  0LL);
          if ( MatchingFilteredDeviceInterfaceList < 0 )
            goto LABEL_51;
          MatchingFilteredDeviceInterfaceList = PiDevCfgConfigureDeviceInterface((__int64)P, (int)Handle, a3);
          ExFreePoolWithTag(P, 0);
LABEL_42:
          if ( MatchingFilteredDeviceInterfaceList < 0 )
            goto LABEL_51;
          goto LABEL_43;
        }
        if ( v14 == 7 )
        {
          Buffer = v24[2].Buffer;
          goto LABEL_28;
        }
      }
      ZwClose(Handle);
      Buffer = 0LL;
LABEL_44:
      Handle = 0LL;
      goto LABEL_45;
    }
  }
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
