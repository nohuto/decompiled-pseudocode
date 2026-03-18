/*
 * XREFs of PiDevCfgEnforceDevicePolicy @ 0x14071C568
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140868D18 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140868D8C (PiDevCfgQueryPolicyStringList.c)
 */

__int64 __fastcall PiDevCfgEnforceDevicePolicy(__int64 a1, __int64 a2, const wchar_t *a3)
{
  NTSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // r14
  int PolicyStringList; // eax
  wchar_t *v9; // r12
  int v10; // eax
  _WORD *v11; // rdi
  const wchar_t *v12; // rbx
  __int64 v13; // rax
  const wchar_t *v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  wchar_t *v17; // r13
  int v18; // eax
  wchar_t *v19; // r15
  __int64 v20; // r12
  const wchar_t **v21; // rsi
  const wchar_t *v22; // rdi
  char v23; // r12
  char v24; // si
  const wchar_t *v25; // rbx
  __int64 v26; // rax
  const wchar_t *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  wchar_t *v31; // rsi
  int v32; // eax
  wchar_t *v33; // rdi
  const wchar_t *v34; // rbx
  __int64 v35; // rax
  const wchar_t *v36; // rbx
  __int64 v37; // rax
  char v39; // [rsp+28h] [rbp-69h] BYREF
  char v40; // [rsp+29h] [rbp-68h]
  char v41; // [rsp+2Ah] [rbp-67h]
  HANDLE Handle; // [rsp+30h] [rbp-61h] BYREF
  __int64 v43; // [rsp+38h] [rbp-59h] BYREF
  const wchar_t *v44; // [rsp+40h] [rbp-51h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-49h] BYREF
  __int64 v46; // [rsp+50h] [rbp-41h]
  const wchar_t **v47; // [rsp+58h] [rbp-39h]
  wchar_t *v48; // [rsp+60h] [rbp-31h]
  PVOID P; // [rsp+68h] [rbp-29h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-21h] BYREF
  wchar_t *v51; // [rsp+A0h] [rbp+Fh]
  wchar_t *v52; // [rsp+A8h] [rbp+17h]
  char v55; // [rsp+110h] [rbp+7Fh]

  v43 = 8913030LL;
  Handle = 0LL;
  v44 = L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Windows\\DeviceInstall";
  v48 = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
  P = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v5 == -1073741772 )
  {
    if ( !PnpBootMode )
    {
LABEL_5:
      v6 = 0;
      goto LABEL_114;
    }
    LODWORD(v43) = 6422624;
    v44 = L"\\Registry\\Machine\\System\\DriverDatabase\\Policies";
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    KeyHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  if ( v5 < 0 )
    goto LABEL_5;
  LODWORD(v43) = 1703960;
  v44 = L"Restrictions";
  ObjectAttributes.RootDirectory = KeyHandle;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v43;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  Handle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_5;
  v55 = 0;
  v7 = 0;
  v41 = 0;
  v40 = 0;
  if ( (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyRemovableDevices", &v39) >= 0 && v39 )
    v7 = (*(_BYTE *)(a1 + 560) & 0x10) != 0;
  PolicyStringList = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceClasses");
  v9 = v48;
  if ( PolicyStringList < 0 )
    v9 = 0LL;
  v48 = v9;
  v10 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceClasses");
  v11 = P;
  if ( v10 < 0 )
    v11 = 0LL;
  P = v11;
  if ( a3 )
  {
    if ( v9 )
    {
      v12 = v9;
      if ( *v9 )
      {
        while ( wcsicmp(v12, a3) )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          v12 += v13 + 1;
          if ( !*v12 )
            goto LABEL_25;
        }
        v55 = 1;
      }
    }
    else if ( !v11 )
    {
      goto LABEL_33;
    }
LABEL_25:
    if ( v11 )
    {
      v14 = v11;
      if ( *v11 )
      {
        while ( wcsicmp(v14, a3) )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( v14[v15] );
          v14 += v15 + 1;
          if ( !*v14 )
            goto LABEL_33;
        }
        v7 = 1;
      }
    }
  }
LABEL_33:
  v16 = PiDevCfgQueryPolicyStringList(Handle, L"AllowDeviceIDs");
  v17 = (wchar_t *)v46;
  if ( v16 < 0 )
    v17 = 0LL;
  v18 = PiDevCfgQueryPolicyStringList(Handle, L"DenyDeviceIDs");
  v19 = (wchar_t *)v47;
  v6 = 0;
  if ( v18 < 0 )
    v19 = 0LL;
  if ( v17 || v19 )
  {
    v20 = 2LL;
    v21 = (const wchar_t **)(a2 + 32);
    v46 = 2LL;
    v47 = (const wchar_t **)(a2 + 32);
    do
    {
      v22 = *v21;
      if ( *v21 && *v22 )
      {
        v23 = v41;
        v24 = v40;
        do
        {
          if ( v17 && !v24 )
          {
            v25 = v17;
            if ( *v17 )
            {
              while ( wcsicmp(v25, v22) )
              {
                v26 = -1LL;
                do
                  ++v26;
                while ( v25[v26] );
                v25 += v26 + 1;
                if ( !*v25 )
                  goto LABEL_52;
              }
              v24 = 1;
              v55 = 1;
            }
LABEL_52:
            v6 = 0;
          }
          if ( v19 && !v23 )
          {
            v27 = v19;
            if ( *v19 )
            {
              while ( wcsicmp(v27, v22) )
              {
                v28 = -1LL;
                do
                  ++v28;
                while ( v27[v28] );
                v27 += v28 + 1;
                if ( !*v27 )
                  goto LABEL_62;
              }
              v23 = 1;
              v7 = 1;
            }
LABEL_62:
            v6 = 0;
          }
          v29 = -1LL;
          do
            ++v29;
          while ( v22[v29] );
          v22 += v29 + 1;
        }
        while ( *v22 );
        v40 = v24;
        v21 = v47;
        v41 = v23;
        v20 = v46;
      }
      v21 += 2;
      --v20;
      v47 = v21;
      v46 = v20;
    }
    while ( v20 );
    v9 = v48;
  }
  v30 = PiDevCfgQueryPolicyStringList(Handle, L"AllowInstanceIDs");
  v31 = v51;
  if ( v30 < 0 )
    v31 = 0LL;
  v32 = PiDevCfgQueryPolicyStringList(Handle, L"DenyInstanceIDs");
  v33 = v52;
  if ( v32 < 0 )
    v33 = 0LL;
  if ( v31 )
  {
    v34 = v31;
    if ( *v31 )
    {
      while ( wcsicmp(v34, *(const wchar_t **)(a2 + 8)) )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v34[v35] );
        v34 += v35 + 1;
        if ( !*v34 )
          goto LABEL_83;
      }
      v55 = 1;
    }
LABEL_83:
    v6 = 0;
    goto LABEL_84;
  }
  if ( v33 )
  {
LABEL_84:
    if ( v33 )
    {
      v36 = v33;
      if ( *v33 )
      {
        while ( wcsicmp(v36, *(const wchar_t **)(a2 + 8)) )
        {
          v37 = -1LL;
          do
            ++v37;
          while ( v36[v37] );
          v36 += v37 + 1;
          if ( !*v36 )
            goto LABEL_92;
        }
        v7 = 1;
      }
LABEL_92:
      v6 = 0;
    }
  }
  if ( v7 )
    goto LABEL_101;
  if ( !v55 && (int)PiDevCfgQueryPolicyEnabled(Handle, L"DenyUnspecified", &v39) >= 0 && v39 )
  {
    if ( !a3 && v9 )
      goto LABEL_103;
    if ( !PnpSetupInProgress || !PnpSetupUpgradeInProgress )
LABEL_101:
      v6 = -1073740959;
  }
  if ( v9 )
LABEL_103:
    ExFreePoolWithTag(v9, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
LABEL_114:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v6;
}
