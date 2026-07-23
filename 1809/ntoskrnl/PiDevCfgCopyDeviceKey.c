/*
 * XREFs of PiDevCfgCopyDeviceKey @ 0x1406F3F74
 * Callers:
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x1406F3E30 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406F3E88 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x14082D214 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgCopyDeviceProperties @ 0x14082D78C (PiDevCfgCopyDeviceProperties.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14015D0CC (PnpRegistryValueExists.c)
 *     PiDevCfgParseVariableName @ 0x14015D190 (PiDevCfgParseVariableName.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D238 (PiDevCfgPushCopyKeyEntry.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     ZwSetValueKey @ 0x1401B8EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     ZwSetSecurityObject @ 0x1401BB6F0 (ZwSetSecurityObject.c)
 *     PiDevCfgParsePropertyKeyName @ 0x140289608 (PiDevCfgParsePropertyKeyName.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     IopGetRegistryKeyInformation @ 0x1406F45FC (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140706AC0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082D4F4 (PiDevCfgConvertPropertyFromValue.c)
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
  __int64 v7; // rsi
  __int64 v8; // r15
  int RegistryKeyInformation; // ebx
  ULONG v10; // edx
  ULONG v11; // eax
  ULONG v12; // edi
  WCHAR *v13; // r14
  ULONG i; // r12d
  NTSTATUS v15; // eax
  HANDLE *v16; // r12
  HANDLE v17; // r15
  ULONG j; // esi
  NTSTATUS v19; // eax
  unsigned int v21; // edi
  bool v22; // al
  int v23; // eax
  unsigned int v24; // ebx
  bool v25; // si
  int v26; // ebx
  void *v27; // r12
  unsigned int v28; // r15d
  ULONG MaximumLength; // edi
  wchar_t *Buffer; // rsi
  ULONG v31; // r14d
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  PVOID v35; // rdi
  HANDLE v36; // rsi
  int v37; // eax
  __int64 v38; // rbx
  const WCHAR *v39; // rdi
  void *v40; // r13
  unsigned int v41; // r9d
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  wchar_t *v45; // rdi
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r8
  int v49; // eax
  int v50; // edx
  NTSTATUS v51; // eax
  HANDLE v52; // rdx
  __int64 v53; // rax
  wchar_t *Length; // [rsp+20h] [rbp-E0h]
  int ResultLength; // [rsp+28h] [rbp-D8h]
  ULONG ResultLengtha; // [rsp+28h] [rbp-D8h]
  unsigned int v57; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v58; // [rsp+68h] [rbp-98h]
  ULONG v59; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v60; // [rsp+74h] [rbp-8Ch] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h]
  PVOID v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h] BYREF
  int v66; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING ValueName; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v70; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v71; // [rsp+D4h] [rbp-2Ch]
  ULONG v72; // [rsp+D8h] [rbp-28h]
  __int64 v73; // [rsp+E0h] [rbp-20h]
  PVOID P; // [rsp+E8h] [rbp-18h] BYREF
  void *v75; // [rsp+F0h] [rbp-10h]
  PVOID PoolWithTag; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING v77; // [rsp+100h] [rbp+0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+110h] [rbp+10h] BYREF
  ULONG Disposition; // [rsp+140h] [rbp+40h] BYREF
  HANDLE KeyHandlea; // [rsp+148h] [rbp+48h]
  UNICODE_STRING v81; // [rsp+150h] [rbp+50h] BYREF
  HANDLE *v82; // [rsp+160h] [rbp+60h]
  UNICODE_STRING v83; // [rsp+170h] [rbp+70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+180h] [rbp+80h] BYREF
  GUID v85; // [rsp+190h] [rbp+90h] BYREF

  v7 = a7;
  KeyHandlea = KeyHandle;
  v8 = a3;
  v82 = a6;
  v58 = a2;
  Handle = 0LL;
  v62 = 0LL;
  v75 = 0LL;
  v70 = 1;
  v71 = a4;
  v73 = a3;
  v68 = a7;
  RegistryKeyInformation = IopGetRegistryKeyInformation(KeyHandle);
  if ( RegistryKeyInformation < 0 )
    goto LABEL_17;
  v10 = 2 * *((_DWORD *)P + 6) + 26;
  v59 = 2 * *((_DWORD *)P + 9) + 18;
  v11 = v59;
  if ( v59 <= v10 )
    v11 = v10;
  v12 = v11;
  v63 = v11;
  ExFreePoolWithTag(P, 0);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x63647050u);
  v13 = (WCHAR *)PoolWithTag;
  if ( !PoolWithTag )
  {
    RegistryKeyInformation = -1073741670;
    goto LABEL_17;
  }
  for ( i = 0; ; ++i )
  {
    v72 = i;
    v15 = ZwEnumerateValueKey(KeyHandlea, i, KeyValueBasicInformation, v13, v12, &v59);
    RegistryKeyInformation = v15;
    if ( v15 >= 0 )
    {
      v13[((unsigned __int64)*((unsigned int *)v13 + 2) >> 1) + 6] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&DestinationString, v13 + 6);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v21 = 0;
      ValueName = DestinationString;
      v60 = 0;
      if ( v7 )
      {
        if ( *(_QWORD *)(v7 + 16) )
        {
          v22 = PiDevCfgParseVariableName(DestinationString.Buffer, &v77, &v60);
          v21 = v60;
          if ( v22 )
          {
            if ( (v60 & 0x400000) != 0 )
              goto LABEL_60;
            v65 = 0LL;
            v23 = PiDevCfgResolveVariable(v7, v77.Buffer, &v65);
            if ( v23 < 0 )
            {
              if ( v23 == -1073741772 )
              {
                ValueName = v77;
                goto LABEL_30;
              }
LABEL_60:
              v12 = v63;
              continue;
            }
            if ( (unsigned int)(*(_DWORD *)(v65 + 32) - 1) > 1 || *(_DWORD *)(v65 + 36) > 0xFFFEu )
              goto LABEL_60;
            ValueName.Buffer = *(wchar_t **)(v65 + 40);
            ValueName.Length = *(_WORD *)(v65 + 36) - 2;
            ValueName.MaximumLength = *(_WORD *)(v65 + 36);
          }
        }
      }
LABEL_30:
      v24 = *((_DWORD *)v13 + 1) & 0xFFFF0000;
      v13[3] = 0;
      if ( (v24 & 0x400000) != 0 || v8 && !PiDevCfgParsePropertyKeyName(&ValueName.Length, &v85, &v70) )
        goto LABEL_60;
      v25 = (a5 & 1) != 0;
      v26 = v21 | v24;
      if ( (v26 & 0x30000) != 0 || !v25 )
      {
        if ( v8 )
        {
          if ( (unsigned int)PnpGetObjectProperty(
                               *(__int64 *)&PiPnpRtlCtx,
                               v8,
                               v71,
                               (__int64)v58,
                               0LL,
                               (__int64)&v85,
                               (__int64)&v57,
                               0LL,
                               0,
                               (__int64)&v66,
                               0) != -1073741789 )
          {
LABEL_35:
            if ( (v26 & 0x10000) == 0 )
              goto LABEL_36;
LABEL_59:
            v7 = v68;
            goto LABEL_60;
          }
        }
        else if ( !PnpRegistryValueExists(v58, &ValueName) )
        {
          goto LABEL_35;
        }
        if ( (v26 & 0x20000) != 0 || !v25 )
          goto LABEL_59;
      }
LABEL_36:
      v64 = 0LL;
      v27 = 0LL;
      v67 = 0LL;
      RegistryKeyInformation = IopGetRegistryValue(KeyHandlea, DestinationString.Buffer, 0, &v64);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v28 = *((_DWORD *)v64 + 1) & 0xFFFF0000;
      MaximumLength = *((_DWORD *)v64 + 3);
      Buffer = (wchar_t *)((char *)v64 + *((unsigned int *)v64 + 2));
      v31 = (unsigned __int16)*((_DWORD *)v64 + 1);
      if ( v68
        && *(_QWORD *)(v68 + 16)
        && v31 - 1 <= 1
        && MaximumLength >= 2
        && !Buffer[((unsigned __int64)MaximumLength >> 1) - 1]
        && PiDevCfgParseVariableName((char *)v64 + *((unsigned int *)v64 + 2), &v77, &v60) )
      {
        Buffer = v77.Buffer;
        v65 = 0LL;
        v32 = PiDevCfgResolveVariable(v68, v77.Buffer, &v65);
        RegistryKeyInformation = v32;
        if ( v32 < 0 )
        {
          RegistryKeyInformation = 0;
          if ( v32 == -1073741772 )
            MaximumLength = v77.MaximumLength;
          else
            Buffer = 0LL;
          goto LABEL_46;
        }
        if ( (v60 & 0xC0000) == 0 )
        {
          MaximumLength = *(_DWORD *)(v65 + 36);
          Buffer = *(wchar_t **)(v65 + 40);
          v31 = (unsigned __int16)*(_DWORD *)(v65 + 32);
          v28 |= *(_DWORD *)(v65 + 32) & 0xFFFF0000;
LABEL_46:
          if ( !Buffer )
            goto LABEL_113;
          if ( v31 == 0x8000 )
          {
            if ( !v73 && v82 )
              RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v82, Buffer, v58, ((v28 & 0x20000) == 0) | 0x80000000);
            goto LABEL_113;
          }
          if ( !v31 && (v28 & 0x100000) != 0 )
          {
LABEL_113:
            v36 = v58;
            goto LABEL_114;
          }
          v33 = v73;
          v34 = v28 & 0x200000;
          if ( !v73 )
          {
            if ( !v34 )
            {
              ResultLengtha = MaximumLength;
              v35 = v64;
              Length = Buffer;
              v36 = v58;
              RegistryKeyInformation = ZwSetValueKey(v58, &ValueName, *(_DWORD *)v64, v31, Length, ResultLengtha);
LABEL_52:
              if ( v27 )
                ExFreePoolWithTag(v27, 0);
              if ( !v73 && v31 != 0x8000 && (v28 & 0x100000) != 0 )
              {
                if ( *(_QWORD *)&PiPnpRtlCtx && (v47 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
                  v48 = *(_QWORD *)(v47 + 8);
                else
                  v48 = 0LL;
                RegRtlDeleteTreeInternal(v36, ValueName.Buffer, v48, 0LL);
              }
              ExFreePoolWithTag(v35, 0);
              if ( RegistryKeyInformation < 0 )
                goto LABEL_15;
              v13 = (WCHAR *)PoolWithTag;
              v8 = v73;
              i = v72;
              goto LABEL_59;
            }
            v36 = v58;
            RegistryKeyInformation = ZwDeleteValueKey(v58, &ValueName);
            if ( RegistryKeyInformation == -1073741772 )
              RegistryKeyInformation = 0;
LABEL_114:
            v35 = v64;
            goto LABEL_52;
          }
          if ( v34 )
          {
            v44 = 0;
            P = 0LL;
            v43 = 0;
            v57 = 0;
            v66 = 0;
            v45 = 0LL;
            goto LABEL_133;
          }
          if ( v70 != 1 )
          {
            v41 = v70;
            v57 = v70;
            goto LABEL_131;
          }
          if ( v31 )
          {
            if ( v31 <= 2 )
            {
              v41 = 18;
              goto LABEL_129;
            }
            switch ( v31 )
            {
              case 4u:
                v41 = 7;
                goto LABEL_129;
              case 7u:
                v41 = 8210;
                goto LABEL_129;
              case 0xBu:
                v41 = 9;
LABEL_129:
                v57 = v41;
LABEL_131:
                v42 = PiDevCfgConvertPropertyFromValue(
                        v31,
                        MaximumLength,
                        (_DWORD)Buffer,
                        v41,
                        (__int64)&v66,
                        (__int64)&P);
                v43 = v66;
                RegistryKeyInformation = v42;
                v44 = v57;
                v45 = (wchar_t *)P;
                v33 = v73;
LABEL_133:
                if ( RegistryKeyInformation >= 0 && (v45 || !v44) )
                {
                  v46 = PiDevCfgSetObjectProperty(
                          *(__int64 *)&PiPnpRtlCtx,
                          0LL,
                          v33,
                          v71,
                          (__int64)v58,
                          ResultLength,
                          (__int64)&v85,
                          v44,
                          (__int64)v45,
                          v43,
                          0);
                  RegistryKeyInformation = v46;
                  if ( v46 == -1073741790 || !v57 && v46 == -1073741275 )
                    RegistryKeyInformation = 0;
                  if ( v45 )
                  {
                    if ( v45 != Buffer )
                      ExFreePoolWithTag(v45, 0);
                    P = 0LL;
                  }
                }
                goto LABEL_113;
            }
          }
          v41 = 4099;
          goto LABEL_129;
        }
        ResultLength = (int)ValueName.Buffer;
        v37 = PiDevCfgResolveMultiSzValue(
                *(unsigned int *)(v65 + 32),
                *(unsigned int *)(v65 + 36),
                *(_QWORD *)(v65 + 40),
                v60,
                v58);
      }
      else
      {
        if ( v31 != 7 && v31 - 1 > 1 || (v28 & 0xC0000) == 0 )
          goto LABEL_46;
        ResultLength = (int)ValueName.Buffer;
        v37 = PiDevCfgResolveMultiSzValue(v31, MaximumLength, Buffer, v28, v58);
      }
      v27 = v67;
      RegistryKeyInformation = v37;
      if ( v37 < 0 )
      {
        Buffer = 0LL;
        RegistryKeyInformation = 0;
      }
      else
      {
        MaximumLength = v59;
        v31 = 7;
        Buffer = v67;
        if ( v59 >= 2 && !*v67 )
          v28 |= 0x200000u;
      }
      goto LABEL_46;
    }
    if ( v15 == -2147483622 )
    {
      RegistryKeyInformation = 0;
      goto LABEL_9;
    }
    if ( v15 != -2147483643 )
      goto LABEL_153;
    ExFreePoolWithTag(v13, 0);
    v12 = v59;
    v63 = v59;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v59, 0x63647050u);
    v13 = (WCHAR *)PoolWithTag;
    if ( !PoolWithTag )
      break;
    --i;
  }
  RegistryKeyInformation = -1073741670;
LABEL_153:
  if ( RegistryKeyInformation < 0 )
    goto LABEL_15;
LABEL_9:
  if ( !v8 )
  {
    v16 = v82;
    if ( v82 )
    {
      v17 = KeyHandlea;
      for ( j = 0; ; ++j )
      {
        v19 = ZwEnumerateKey(v17, j, KeyBasicInformation, v13, v12, &v59);
        RegistryKeyInformation = v19;
        if ( v19 >= 0 )
          break;
        if ( v19 == -2147483622 )
        {
          RegistryKeyInformation = 0;
          goto LABEL_15;
        }
        if ( v19 != -2147483643 )
          goto LABEL_15;
        ExFreePoolWithTag(v13, 0);
        v12 = v59;
        v63 = v59;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v59, 0x63647050u);
        v13 = (WCHAR *)PoolWithTag;
        if ( !PoolWithTag )
        {
          RegistryKeyInformation = -1073741670;
          goto LABEL_15;
        }
        --j;
LABEL_90:
        ;
      }
      v13[((unsigned __int64)*((unsigned int *)v13 + 3) >> 1) + 8] = 0;
      RegistryKeyInformation = RtlInitUnicodeStringEx(&v83, v13 + 8);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v81 = v83;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = v17;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = &v83;
      RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      if ( RegistryKeyInformation < 0 )
        goto LABEL_15;
      v38 = v68;
      v39 = 0LL;
      v60 = 0;
      if ( v68 && *(_QWORD *)(v68 + 16) && PiDevCfgParseVariableName(v83.Buffer, &v77, &v60) )
      {
        v65 = 0LL;
        v49 = PiDevCfgResolveVariable(v38, v77.Buffer, &v65);
        if ( v49 < 0 )
        {
          if ( v49 != -1073741772 )
            goto LABEL_163;
          v81 = v77;
        }
        else
        {
          v50 = *(_DWORD *)(v65 + 32);
          if ( (unsigned int)(v50 - 1) > 1 )
          {
            if ( v50 == 7 )
            {
              v39 = *(const WCHAR **)(v65 + 40);
              goto LABEL_73;
            }
LABEL_163:
            ZwClose(Handle);
            Handle = 0LL;
LABEL_89:
            v12 = v63;
            goto LABEL_90;
          }
          v81.Buffer = *(wchar_t **)(v65 + 40);
          v81.Length = *(_WORD *)(v65 + 36) - 2;
          v81.MaximumLength = *(_WORD *)(v65 + 36);
        }
      }
LABEL_73:
      RegistryKeyInformation = PiDevCfgGetKeySecurityDescriptor(Handle);
      if ( RegistryKeyInformation >= 0 )
      {
        v40 = v75;
      }
      else
      {
        RegistryKeyInformation = 0;
        v75 = 0LL;
        v40 = 0LL;
      }
      if ( !v39 )
      {
        ObjectAttributes.RootDirectory = v58;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &v81;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v40;
        RegistryKeyInformation = ZwCreateKey(&v62, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( RegistryKeyInformation >= 0 )
        {
          if ( Disposition == 2 && v40 )
            ZwSetSecurityObject(v62, 4u, v40);
          RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v16, Handle, v62, a5 | 0x40000000u);
          if ( RegistryKeyInformation < 0 )
            ZwClose(v62);
          Handle = 0LL;
LABEL_83:
          v62 = 0LL;
        }
LABEL_84:
        if ( v40 )
        {
          ExFreePoolWithTag(v40, 0);
          v75 = 0LL;
        }
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        if ( RegistryKeyInformation < 0 )
          goto LABEL_15;
        goto LABEL_89;
      }
      while ( 2 )
      {
        if ( !*v39 )
          goto LABEL_84;
        RtlInitUnicodeString(&v81, v39);
        ObjectAttributes.RootDirectory = v58;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &v81;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v40;
        v51 = ZwOpenKey(&v62, 0xF003Fu, &ObjectAttributes);
        RegistryKeyInformation = v51;
        if ( v51 >= 0 )
        {
          if ( v40 )
            ZwSetSecurityObject(v62, 4u, v40);
          goto LABEL_175;
        }
        if ( v51 != -1073741772 )
          goto LABEL_84;
        if ( (v60 & 0x10000) != 0 )
        {
          RegistryKeyInformation = 0;
        }
        else
        {
          RegistryKeyInformation = ZwCreateKey(&v62, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
          if ( RegistryKeyInformation < 0 )
            goto LABEL_84;
LABEL_175:
          v52 = Handle;
          if ( !Handle )
          {
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &v83;
            ObjectAttributes.RootDirectory = v17;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            RegistryKeyInformation = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( RegistryKeyInformation < 0 )
              goto LABEL_185;
            v52 = Handle;
          }
          RegistryKeyInformation = PiDevCfgPushCopyKeyEntry(v16, v52, v62, a5 | 0x40000000u);
          if ( RegistryKeyInformation < 0 )
          {
LABEL_185:
            ZwClose(v62);
            goto LABEL_83;
          }
          Handle = 0LL;
          v62 = 0LL;
        }
        v53 = -1LL;
        do
          ++v53;
        while ( v39[v53] );
        v39 += v53 + 1;
        continue;
      }
    }
  }
LABEL_15:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v62 )
    ZwClose(v62);
  return (unsigned int)RegistryKeyInformation;
}
