/*
 * XREFs of PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PiDevCfgParseVariableName @ 0x14015D190 (PiDevCfgParseVariableName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     PiDevCfgParseInterfaceKeyName @ 0x140289580 (PiDevCfgParseInterfaceKeyName.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x14059FD20 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14082D214 (PiDevCfgConfigureDeviceInterface.c)
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
  UNICODE_STRING *v23; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v25; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v26; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v29[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v30; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING v31; // [rsp+100h] [rbp+0h] BYREF
  GUID v32; // [rsp+110h] [rbp+10h] BYREF

  Buffer = 0LL;
  ObjectAttributes.RootDirectory = a2;
  Handle = 0LL;
  v25.Buffer = L"Interfaces";
  v24 = 0LL;
  P = 0LL;
  *(_DWORD *)&v25.Length = 1441812;
  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v25;
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
  *(_DWORD *)&v25.Length = 262146;
  v25.Buffer = (wchar_t *)L"*";
  ObjectAttributes.RootDirectory = KeyHandle;
  Handle = 0LL;
  ObjectAttributes.ObjectName = &v25;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  MatchingFilteredDeviceInterfaceList = v9;
  if ( v9 == -1073741772 )
    goto LABEL_13;
  if ( v9 < 0 )
    goto LABEL_3;
  v29[0] = Handle;
  v29[1] = a3;
  v30 = 0;
  MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          0LL,
                                          a1,
                                          0,
                                          (__int64)PiDevCfgConfigureDeviceInterfaceCallback,
                                          (__int64)v29,
                                          0LL,
                                          0,
                                          (__int64)&ResultLength,
                                          0);
  ZwClose(Handle);
  Handle = 0LL;
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    MatchingFilteredDeviceInterfaceList = v30;
    if ( v30 >= 0 )
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
      v26 = DestinationString;
      ObjectAttributes.RootDirectory = KeyHandle;
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      MatchingFilteredDeviceInterfaceList = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_51;
      LODWORD(v23) = 0;
      if ( !a3 || !*(_QWORD *)(a3 + 16) || !PiDevCfgParseVariableName(DestinationString.Buffer, &v31, &v23) )
        goto LABEL_39;
      v23 = 0LL;
      v13 = PiDevCfgResolveVariable(a3, v31.Buffer, &v23);
      MatchingFilteredDeviceInterfaceList = v13;
      if ( v13 < 0 )
      {
        if ( v13 == -1073741772 )
        {
          v26 = v31;
          goto LABEL_39;
        }
      }
      else
      {
        v14 = *(_DWORD *)&v23[2].Length;
        if ( (unsigned int)(v14 - 1) <= 1 )
        {
          v15 = *(&v23[2].MaximumLength + 1);
          v26.Buffer = v23[2].Buffer;
          v26.MaximumLength = v15;
          v26.Length = v15 - 2;
LABEL_28:
          if ( Buffer )
          {
            if ( *Buffer )
            {
              while ( 1 )
              {
                RtlInitUnicodeString(&v25, Buffer);
                if ( PiDevCfgParseInterfaceKeyName((__int64)&v25, &v32, &v24) )
                {
                  LOBYTE(v16) = 1;
                  MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                          a1,
                                                          (unsigned int)&v32,
                                                          v24,
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
          if ( !PiDevCfgParseInterfaceKeyName((__int64)&v26, &v32, &v24) )
          {
LABEL_43:
            ZwClose(Handle);
            goto LABEL_44;
          }
          LOBYTE(v18) = 1;
          MatchingFilteredDeviceInterfaceList = IopRegisterDeviceInterface(
                                                  a1,
                                                  (unsigned int)&v32,
                                                  v24,
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
          Buffer = v23[2].Buffer;
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
