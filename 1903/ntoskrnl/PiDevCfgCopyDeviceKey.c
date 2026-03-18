/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x1406FD6D4
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406FD570 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406FD5C8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140866854 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgResetDeviceKeyCallback @ 0x1408695D0 (PiDevCfgResetDeviceKeyCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PiDevCfgParseVariableName @ 0x140145178 (PiDevCfgParseVariableName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x140145220 (PiDevCfgPushCopyKeyEntry.c)
 *     PnpRegistryValueExists @ 0x14015C9D0 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401C0330 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401C0710 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1401C34F0 (ZwSetSecurityObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiDevCfgParsePropertyKeyName @ 0x14029F638 (PiDevCfgParsePropertyKeyName.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     IopGetRegistryKeyInformation @ 0x1406FDDB8 (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveVariable @ 0x1406FDE58 (PiDevCfgResolveVariable.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x1406FE104 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgSetObjectProperty @ 0x140705E2C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14072B300 (PiDevCfgResolveMultiSzValue.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073A40C (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140866B44 (PiDevCfgConvertPropertyFromValue.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKey(
        HANDLE KeyHandle,
        void *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        HANDLE *a6,
        __int64 a7)
{
  __int64 v7; // r12
  __int64 v8; // rsi
  unsigned int v10; // r13d
  int RegistryKeyInformation; // ebx
  ULONG v12; // edx
  ULONG v13; // eax
  ULONG Length; // edi
  WCHAR *v15; // r15
  ULONG i; // r14d
  NTSTATUS v17; // eax
  HANDLE *v18; // r13
  PVOID v19; // r14
  HANDLE v20; // r12
  ULONG j; // esi
  NTSTATUS v22; // eax
  unsigned int v24; // edi
  bool v25; // al
  int v26; // eax
  unsigned int v27; // ebx
  bool v28; // si
  int v29; // ebx
  void *v30; // r12
  ULONG *v31; // r13
  unsigned int v32; // r15d
  ULONG MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v35; // r14d
  int v36; // eax
  int v37; // edx
  int v38; // eax
  HANDLE v39; // rdi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rbx
  const WCHAR *v43; // rdi
  unsigned int v44; // r9d
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // eax
  wchar_t *v48; // rdi
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // r8
  int v52; // eax
  int v53; // edx
  NTSTATUS v54; // eax
  HANDLE v55; // rdx
  __int64 v56; // rax
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  unsigned int v59; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v60; // [rsp+68h] [rbp-98h]
  ULONG v61; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v64; // [rsp+80h] [rbp-80h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  PVOID v66; // [rsp+90h] [rbp-70h] BYREF
  PVOID v67; // [rsp+98h] [rbp-68h]
  _DWORD v68[4]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  _WORD *v70; // [rsp+C0h] [rbp-40h]
  __int64 v71; // [rsp+C8h] [rbp-38h]
  unsigned int v72; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v73; // [rsp+D4h] [rbp-2Ch]
  ULONG v74; // [rsp+D8h] [rbp-28h]
  PVOID P[2]; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v76; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v77; // [rsp+100h] [rbp+0h]
  PVOID PoolWithTag; // [rsp+108h] [rbp+8h]
  UNICODE_STRING v79; // [rsp+110h] [rbp+10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+120h] [rbp+20h] BYREF
  ULONG Disposition; // [rsp+150h] [rbp+50h] BYREF
  HANDLE KeyHandlea; // [rsp+158h] [rbp+58h]
  UNICODE_STRING v83; // [rsp+160h] [rbp+60h] BYREF
  HANDLE *v84; // [rsp+170h] [rbp+70h]
  UNICODE_STRING DestinationString; // [rsp+180h] [rbp+80h] BYREF
  GUID v86; // [rsp+190h] [rbp+90h] BYREF
  int v87; // [rsp+1A0h] [rbp+A0h]

  v7 = a3;
  v8 = a7;
  v60 = a2;
  v10 = a4;
  v77 = a3;
  KeyHandlea = KeyHandle;
  v73 = a4;
  v84 = a6;
  v71 = a7;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Handle = 0LL;
  v64 = 0LL;
  v67 = 0LL;
  *(_QWORD *)&v83.Length = 0LL;
  v72 = 1;
  v83.Buffer = 0LL;
  *(_QWORD *)&v79.Length = 0LL;
  v79.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v76 = (UNICODE_STRING)0LL;
  *(_QWORD *)&v86.Data1 = 0LL;
  *(_QWORD *)v86.Data4 = 0LL;
  v87 = 0;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_19;
  v12 = 2 * *((_DWORD *)P[0] + 6) + 26;
  v61 = 2 * *((_DWORD *)P[0] + 9) + 18;
  v13 = v61;
  if ( v61 <= v12 )
    v13 = v12;
  Length = v13;
  v65 = v13;
  ExFreePoolWithTag(P[0], 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x63647050u);
  v15 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_19;
  }
  for ( i = 0; ; ++i )
  {
    v74 = i;
    v17 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v15, Length, &v61);
    RegistryKeyInformation = v17;
    if ( v17 >= 0 )
    {
      v15[((unsigned __int64)*((unsigned int *)v15 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v15 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_155;
      v24 = 0;
      ValueName = DestinationString;
      v62 = 0;
      if ( v8 )
      {
        if ( *(_QWORD *)(v8 + 16) )
        {
          v25 = PiDevCfgParseVariableName(DestinationString.Buffer, &v76, &v62);
          v24 = v62;
          if ( v25 )
          {
            if ( (v62 & 0x400000) != 0 )
              goto LABEL_63;
            v66 = 0LL;
            v26 = PiDevCfgResolveVariable(v8, v76.Buffer, &v66);
            if ( v26 < 0 )
            {
              if ( v26 == -1073741772 )
              {
                ValueName = v76;
                goto LABEL_32;
              }
LABEL_63:
              Length = v65;
              continue;
            }
            if ( (unsigned int)(*((_DWORD *)v66 + 8) - 1) > 1 || *((_DWORD *)v66 + 9) > 0xFFFEu )
              goto LABEL_63;
            ValueName.Buffer = (wchar_t *)*((_QWORD *)v66 + 5);
            ValueName.Length = *((_WORD *)v66 + 18) - 2;
            ValueName.MaximumLength = *((_WORD *)v66 + 18);
          }
        }
      }
LABEL_32:
      v27 = *((_DWORD *)v15 + 1) & 0xFFFF0000;
      v15[3] = 0;
      if ( (v27 & 0x400000) != 0 || v7 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v86, &v72) )
        goto LABEL_63;
      v28 = (a5 & 1) != 0;
      v29 = v24 | v27;
      if ( (v29 & 0x30000) != 0 || !v28 )
      {
        if ( v7 )
        {
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               v7,
                               v10,
                               (__int64)v60,
                               0LL,
                               (__int64)&v86,
                               (__int64)&v59,
                               0LL,
                               0,
                               (__int64)v68,
                               0) != -1073741789 )
          {
LABEL_37:
            if ( (v29 & 0x10000) == 0 )
              goto LABEL_38;
LABEL_62:
            v8 = v71;
            goto LABEL_63;
          }
        }
        else if ( !PnpRegistryValueExists(v60, &ValueName) )
        {
          goto LABEL_37;
        }
        if ( (v29 & 0x20000) != 0 || !v28 )
          goto LABEL_62;
      }
LABEL_38:
      v66 = 0LL;
      v30 = 0LL;
      v70 = 0LL;
      RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v66);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_155;
      v31 = (ULONG *)v66;
      v32 = *((_DWORD *)v66 + 1) & 0xFFFF0000;
      MaximumLength = *((_DWORD *)v66 + 3);
      Buffer = (wchar_t *)((char *)v66 + *((unsigned int *)v66 + 2));
      v35 = (unsigned __int16)*((_DWORD *)v66 + 1);
      if ( v71
        && *(_QWORD *)(v71 + 16)
        && v35 - 1 <= 1
        && MaximumLength >= 2
        && !Buffer[((unsigned __int64)MaximumLength >> 1) - 1]
        && PiDevCfgParseVariableName((char *)v66 + *((unsigned int *)v66 + 2), &v76, &v62) )
      {
        Buffer = v76.Buffer;
        v66 = 0LL;
        v36 = PiDevCfgResolveVariable(v71, v76.Buffer, &v66);
        RegistryKeyInformation = v36;
        if ( v36 < 0 )
        {
          RegistryKeyInformation = 0;
          if ( v36 == -1073741772 )
            MaximumLength = v76.MaximumLength;
          else
            Buffer = 0LL;
          goto LABEL_48;
        }
        if ( (v62 & 0xC0000) == 0 )
        {
          MaximumLength = *((_DWORD *)v66 + 9);
          Buffer = (wchar_t *)*((_QWORD *)v66 + 5);
          v35 = (unsigned __int16)*((_DWORD *)v66 + 8);
          v32 |= *((_DWORD *)v66 + 8) & 0xFFFF0000;
          goto LABEL_48;
        }
        ResultLength = (int)ValueName.Buffer;
        v41 = PiDevCfgResolveMultiSzValue(
                *((unsigned int *)v66 + 8),
                *((unsigned int *)v66 + 9),
                *((_QWORD *)v66 + 5),
                v62,
                v60);
      }
      else
      {
        if ( v35 != 7 && v35 - 1 > 1 || (v32 & 0xC0000) == 0 )
          goto LABEL_48;
        ResultLength = (int)ValueName.Buffer;
        v41 = PiDevCfgResolveMultiSzValue(v35, MaximumLength, Buffer, v32, v60);
      }
      v30 = v70;
      RegistryKeyInformation = v41;
      if ( v41 < 0 )
      {
        Buffer = 0LL;
        RegistryKeyInformation = 0;
      }
      else
      {
        MaximumLength = v61;
        v35 = 7;
        Buffer = v70;
        if ( v61 >= 2 && !*v70 )
          v32 |= 0x200000u;
      }
LABEL_48:
      if ( Buffer )
      {
        if ( v35 != 0x8000 )
        {
          if ( !v35 && (v32 & 0x100000) != 0 )
            goto LABEL_117;
          v37 = v77;
          v38 = v32 & 0x200000;
          if ( !v77 )
          {
            if ( v38 )
            {
              v39 = v60;
              RegistryKeyInformation = ZwDeleteValueKey(v60, &ValueName);
              if ( RegistryKeyInformation == -1073741772 )
                RegistryKeyInformation = 0;
              goto LABEL_55;
            }
            ResultLengtha = MaximumLength;
            v39 = v60;
            v40 = ZwSetValueKey(v60, &ValueName, *v31, v35, Buffer, ResultLengtha);
            goto LABEL_54;
          }
          if ( v38 )
          {
            v47 = 0;
            P[0] = 0LL;
            v46 = 0;
            v59 = 0;
            v68[0] = 0;
            v48 = 0LL;
            goto LABEL_134;
          }
          if ( v72 != 1 )
          {
            v44 = v72;
            v59 = v72;
            goto LABEL_132;
          }
          if ( v35 )
          {
            if ( v35 <= 2 )
            {
              v44 = 18;
              goto LABEL_130;
            }
            switch ( v35 )
            {
              case 4u:
                v44 = 7;
                goto LABEL_130;
              case 7u:
                v44 = 8210;
                goto LABEL_130;
              case 0xBu:
                v44 = 9;
LABEL_130:
                v59 = v44;
LABEL_132:
                v45 = PiDevCfgConvertPropertyFromValue(
                        v35,
                        MaximumLength,
                        (_DWORD)Buffer,
                        v44,
                        (__int64)v68,
                        (__int64)P);
                v46 = v68[0];
                RegistryKeyInformation = v45;
                v47 = v59;
                v48 = (wchar_t *)P[0];
                v37 = v77;
LABEL_134:
                if ( RegistryKeyInformation >= 0 && (v48 || !v47) )
                {
                  v49 = PiDevCfgSetObjectProperty(
                          PiPnpRtlCtx,
                          0,
                          v37,
                          v73,
                          (__int64)v60,
                          ResultLength,
                          (__int64)&v86,
                          v47,
                          (__int64)v48,
                          v46,
                          0);
                  RegistryKeyInformation = v49;
                  if ( v49 == -1073741790 || !v59 && v49 == -1073741275 )
                    RegistryKeyInformation = 0;
                  if ( v48 )
                  {
                    if ( v48 != Buffer )
                      ExFreePoolWithTag(v48, 0);
                    P[0] = 0LL;
                  }
                }
                goto LABEL_117;
            }
          }
          v44 = 4099;
          goto LABEL_130;
        }
        if ( !v77 )
        {
          v39 = v60;
          if ( !v84 )
            goto LABEL_55;
          v40 = PiDevCfgPushCopyKeyEntry(v84, Buffer, v60, ((v32 & 0x20000) == 0) | 0x80000000);
LABEL_54:
          RegistryKeyInformation = v40;
LABEL_55:
          if ( v30 )
            ExFreePoolWithTag(v30, 0);
          v7 = v77;
          if ( !v77 && v35 != 0x8000 && (v32 & 0x100000) != 0 )
          {
            if ( *(_QWORD *)&PiPnpRtlCtx && (v50 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v51 = *(_QWORD *)(v50 + 8);
            else
              v51 = 0LL;
            RegRtlDeleteTreeInternal(v39, ValueName.Buffer, v51, 0LL);
          }
          ExFreePoolWithTag(v31, 0);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_155;
          v15 = (WCHAR *)PoolWithTag;
          i = v74;
          v10 = v73;
          goto LABEL_62;
        }
      }
LABEL_117:
      v39 = v60;
      goto LABEL_55;
    }
    if ( v17 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v17 != -2147483643 )
      goto LABEL_154;
    ExFreePoolWithTag(v15, 0);
    Length = v61;
    v65 = v61;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v61, 0x63647050u);
    v15 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_154:
  if ( RegistryKeyInformation < 0 )
  {
LABEL_155:
    v19 = v67;
    goto LABEL_15;
  }
LABEL_9:
  if ( v7 )
    goto LABEL_155;
  v18 = v84;
  v19 = v67;
  if ( !v84 )
    goto LABEL_15;
  v20 = KeyHandlea;
  for ( j = 0; ; ++j )
  {
    v22 = ZwEnumerateKey(v20, j, KeyBasicInformation, v15, Length, &v61);
    RegistryKeyInformation = v22;
    if ( v22 >= 0 )
      break;
    if ( v22 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_15;
    }
    if ( v22 != -2147483643 )
      goto LABEL_15;
    ExFreePoolWithTag(v15, 0);
    Length = v61;
    v65 = v61;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v61, 0x63647050u);
    v15 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
    {
      RegistryKeyInformation = -1073741670;
      goto LABEL_15;
    }
    --j;
LABEL_93:
    ;
  }
  v15[((unsigned __int64)*((unsigned int *)v15 + 3) >> 1) + 8] = 0;
  RegistryKeyInformation = RtlInitUnicodeStringEx(&v83, v15 + 8);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
  v79 = v83;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = v20;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = &v83;
  RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
  v42 = v71;
  v43 = 0LL;
  v62 = 0;
  if ( v71 && *(_QWORD *)(v71 + 16) && PiDevCfgParseVariableName(v83.Buffer, &v76, &v62) )
  {
    v66 = 0LL;
    v52 = PiDevCfgResolveVariable(v42, v76.Buffer, &v66);
    if ( v52 < 0 )
    {
      if ( v52 != -1073741772 )
        goto LABEL_164;
      v79 = v76;
    }
    else
    {
      v53 = *((_DWORD *)v66 + 8);
      if ( (unsigned int)(v53 - 1) > 1 )
      {
        if ( v53 == 7 )
        {
          v43 = (const WCHAR *)*((_QWORD *)v66 + 5);
          goto LABEL_76;
        }
LABEL_164:
        ZwClose(Handle);
        Handle = 0LL;
LABEL_92:
        Length = v65;
        goto LABEL_93;
      }
      v79.Buffer = (wchar_t *)*((_QWORD *)v66 + 5);
      v79.Length = *((_WORD *)v66 + 18) - 2;
      v79.MaximumLength = *((_WORD *)v66 + 18);
    }
  }
LABEL_76:
  RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
  if ( RegistryKeyInformation >= 0 )
  {
    v19 = v67;
  }
  else
  {
    RegistryKeyInformation = 0;
    v67 = 0LL;
    v19 = 0LL;
  }
  if ( v43 )
  {
    while ( 1 )
    {
      if ( !*v43 )
        goto LABEL_87;
      RtlInitUnicodeString(&v79, v43);
      ObjectAttributes.RootDirectory = v60;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.ObjectName = &v79;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v19;
      v54 = ZwOpenKey(&v64, 0xF003Fu, &ObjectAttributes);
      RegistryKeyInformation = v54;
      if ( v54 < 0 )
      {
        if ( v54 != -1073741772 )
          goto LABEL_87;
        if ( (v62 & 0x10000) != 0 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_181;
        }
        RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_87;
      }
      else if ( v19 )
      {
        ZwSetSecurityObject(v64, 4u, v19);
      }
      v55 = Handle;
      if ( !Handle )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v83;
        ObjectAttributes.RootDirectory = v20;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( RegistryKeyInformation < 0 )
          goto LABEL_186;
        v55 = Handle;
      }
      RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v18, v55, v64, a5 | 0x40000000u);
      if ( RegistryKeyInformation < 0 )
      {
LABEL_186:
        ZwClose(v64);
        goto LABEL_86;
      }
      Handle = 0LL;
      v64 = 0LL;
LABEL_181:
      v56 = -1LL;
      do
        ++v56;
      while ( v43[v56] );
      v43 += v56 + 1;
    }
  }
  ObjectAttributes.RootDirectory = v60;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &v79;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v19;
  RegistryKeyInformation = ZwCreateKey(&v64, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( RegistryKeyInformation >= 0 )
  {
    if ( Disposition == 2 && v19 )
      ZwSetSecurityObject(v64, 4u, v19);
    RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v18, Handle, v64, a5 | 0x40000000u);
    if ( RegistryKeyInformation < 0 )
      ZwClose(v64);
    Handle = 0LL;
LABEL_86:
    v64 = 0LL;
  }
LABEL_87:
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    v67 = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( RegistryKeyInformation >= 0 )
    goto LABEL_92;
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
LABEL_19:
  if ( Handle )
    ZwClose(Handle);
  if ( v64 )
    ZwClose(v64);
  return (unsigned int)RegistryKeyInformation;
}
