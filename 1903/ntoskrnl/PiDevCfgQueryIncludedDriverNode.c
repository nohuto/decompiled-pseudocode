/*
 * XREFs of PiDevCfgQueryIncludedDriverNode @ 0x140868888
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14014506C (PnpDuplicateUnicodeString.c)
 *     PnpValidateRegistryMultiSz @ 0x14016F324 (PnpValidateRegistryMultiSz.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiDevCfgGetDriverConfigurationKeyScope @ 0x14029F2D8 (PiDevCfgGetDriverConfigurationKeyScope.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F9A2C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FB814 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1406FD34C (PiDevCfgOpenDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgQueryIncludedDriverNode(__int64 a1, const wchar_t *a2, const WCHAR *a3, int a4, __int64 *a5)
{
  const WCHAR *v7; // rsi
  unsigned int *v9; // r15
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  int DriverPackageId; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  PVOID PoolWithTag; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  NTSTATUS RegistryValue; // eax
  wchar_t *i; // rsi
  int v27; // ecx
  char v28; // r14
  int DriverConfigurationKeyScope; // eax
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v35; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v7 = a2;
  Handle = 0LL;
  KeyHandle = 0LL;
  v9 = 0LL;
  v35 = 0LL;
  if ( !a2 )
  {
    v15 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v15;
    if ( v15 == -1073741772 )
    {
      v11 = 0;
    }
    else if ( v15 < 0 )
    {
      goto LABEL_73;
    }
    if ( !KeyHandle )
    {
      v7 = *(const WCHAR **)(a1 + 344);
      if ( !v7 )
        goto LABEL_24;
      if ( *v7 )
      {
        while ( 1 )
        {
          DriverPackageId = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
          v11 = DriverPackageId;
          if ( DriverPackageId == -1073741772 )
            goto LABEL_41;
          if ( DriverPackageId < 0 )
            goto LABEL_73;
          v19 = PnpOpenObjectRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)UnicodeString.Buffer,
                  8u,
                  131097,
                  0,
                  (__int64)&Handle);
          v11 = v19;
          if ( v19 == -1073741772 )
            break;
          if ( v19 < 0 )
            goto LABEL_73;
          v20 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
          v11 = v20;
          if ( v20 < 0 )
          {
            if ( v20 != -1073741772 )
              goto LABEL_37;
            ZwClose(Handle);
            Handle = 0LL;
            RtlFreeAnsiString(&UnicodeString);
            v21 = -1LL;
            do
              ++v21;
            while ( v7[v21] );
            v7 += v21 + 1;
            if ( *v7 )
              continue;
          }
          goto LABEL_38;
        }
        v11 = -1073740655;
      }
LABEL_37:
      if ( v11 < 0 )
        goto LABEL_73;
LABEL_38:
      if ( !KeyHandle )
      {
LABEL_24:
        v11 = -1073740654;
        goto LABEL_75;
      }
      goto LABEL_39;
    }
    v7 = *(const WCHAR **)(a1 + 48);
    goto LABEL_17;
  }
  if ( !wcsicmp(a2, *(const wchar_t **)(a1 + 48)) )
  {
    v10 = PiDevCfgOpenDriverConfiguration(*(void **)(a1 + 16), a3, &KeyHandle);
    v11 = v10;
    if ( v10 != -1073741772 )
    {
      if ( v10 < 0 )
        goto LABEL_73;
LABEL_17:
      v16 = PnpDuplicateUnicodeString((__int64)&UnicodeString, a1 + 56);
      v17 = 0LL;
      if ( !v16 )
      {
LABEL_40:
        v11 = -1073741670;
        goto LABEL_73;
      }
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v14 = SysCtxRegOpenKey(v17, *(_QWORD *)(a1 + 16), 0LL, 0, 0x20019u, (__int64)&Handle);
      v11 = v14;
      goto LABEL_21;
    }
LABEL_11:
    v11 = -1073740654;
    goto LABEL_73;
  }
  v12 = PiDevCfgGetDriverPackageId((__int64)v7, (__int64)&UnicodeString);
  v11 = v12;
  if ( v12 != -1073741772 )
  {
    if ( v12 < 0 )
      goto LABEL_73;
    v13 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)UnicodeString.Buffer, 8u, 131097, 0, (__int64)&Handle);
    v11 = v13;
    if ( v13 != -1073741772 )
    {
      if ( v13 < 0 )
        goto LABEL_73;
      v14 = PiDevCfgOpenDriverConfiguration(Handle, a3, &KeyHandle);
      v11 = v14;
      if ( v14 != -1073741772 )
      {
LABEL_21:
        if ( v14 < 0 )
          goto LABEL_73;
LABEL_39:
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1A0uLL, 0x63647050u);
        v23 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_40;
        memset(PoolWithTag, 0, 0x1A0uLL);
        *(_DWORD *)(v23 + 184) = 32;
        *(_QWORD *)(v23 + 232) = v23 + 224;
        *(_QWORD *)(v23 + 224) = v23 + 224;
        *(_QWORD *)(v23 + 216) = v23 + 208;
        *(_QWORD *)(v23 + 208) = v23 + 208;
        *(_QWORD *)(v23 + 376) = v23 + 368;
        *(_QWORD *)(v23 + 368) = v23 + 368;
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 40), v7)
          && PnpDuplicateUnicodeString(v23 + 56, (__int64)&UnicodeString)
          && RtlCreateUnicodeString((PUNICODE_STRING)(v23 + 88), a3) )
        {
          *(_DWORD *)(v23 + 104) = a4;
          RegistryValue = IopGetRegistryValue(KeyHandle, L"IncludeScope", 0, &v35);
          v9 = v35;
          v11 = RegistryValue;
          if ( RegistryValue == -1073741772 )
          {
            v11 = 0;
LABEL_68:
            *(_QWORD *)(v23 + 16) = Handle;
            *(_QWORD *)(v23 + 32) = KeyHandle;
            Handle = 0LL;
            KeyHandle = 0LL;
            *a5 = v23;
            v23 = 0LL;
            goto LABEL_69;
          }
          if ( RegistryValue >= 0 )
          {
            if ( !PnpValidateRegistryMultiSz(v35) )
            {
              v11 = -1073741823;
              goto LABEL_69;
            }
            for ( i = (wchar_t *)((char *)v9 + v9[2]); ; i += v32 + 1 )
            {
              v24 = *i;
              if ( !(_WORD)v24 )
                goto LABEL_68;
              v27 = *i - asc_14078D490[0];
              if ( !v27 )
                v27 = i[1] - asc_14078D490[1];
              if ( !v27 )
              {
                *(_DWORD *)(v23 + 104) = -1;
                goto LABEL_68;
              }
              v28 = 1;
              if ( (_WORD)v24 != 43 )
              {
                if ( (_WORD)v24 != 45 )
                  goto LABEL_59;
                v28 = 0;
              }
              ++i;
LABEL_59:
              DriverConfigurationKeyScope = PiDevCfgGetDriverConfigurationKeyScope(i);
              v30 = *(_DWORD *)(v23 + 104);
              if ( v28 )
                v31 = DriverConfigurationKeyScope | v30;
              else
                v31 = ~DriverConfigurationKeyScope & v30;
              *(_DWORD *)(v23 + 104) = v31;
              v32 = -1LL;
              do
                ++v32;
              while ( i[v32] );
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
LABEL_69:
        if ( v23 )
          PiDevCfgFreeDriverNode(v23, v24);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        goto LABEL_73;
      }
      goto LABEL_11;
    }
  }
LABEL_41:
  v11 = -1073740655;
LABEL_73:
  if ( KeyHandle )
    ZwClose(KeyHandle);
LABEL_75:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v11;
}
