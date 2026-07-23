/*
 * XREFs of PiDevCfgMigrateDevice @ 0x140701FB0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082EABC (PiDevCfgMigrateRootDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408333E0 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x14059D4CC (_CmIsRootEnumeratedDevice.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgSetObjectProperty @ 0x1406E601C (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1406FADE4 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgFreeMigrationContext @ 0x140702074 (PiDevCfgFreeMigrationContext.c)
 *     PiDevCfgInitMigrationContext @ 0x140702094 (PiDevCfgInitMigrationContext.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14082CDF0 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14082E264 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgLogDeviceMigrated @ 0x14082E7A0 (PiDevCfgLogDeviceMigrated.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082EE1C (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgMigrateDevice(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v9; // r15
  PVOID v10; // rdi
  __int64 v11; // r12
  int inited; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  _WORD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int DeviceMigrationNode; // eax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // r15
  int v27; // [rsp+30h] [rbp-71h]
  int v28; // [rsp+30h] [rbp-71h]
  PVOID v29; // [rsp+68h] [rbp-39h] BYREF
  int v30; // [rsp+70h] [rbp-31h]
  HANDLE Handle; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING P; // [rsp+80h] [rbp-21h] BYREF
  __int64 v33[7]; // [rsp+90h] [rbp-11h] BYREF

  memset(v33, 0, sizeof(v33));
  v9 = a5;
  v29 = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v30 = 0;
  *(_QWORD *)&P.Length = 0LL;
  if ( a5 )
    *a5 = 0;
  v11 = (__int64)a6;
  if ( a6 )
    *a6 = 0;
  inited = PiDevCfgInitMigrationContext(a3, a4, v33);
  if ( inited < 0 )
    goto LABEL_8;
  if ( !v33[0] )
  {
    inited = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a2 + 8),
                       1u,
                       *(_QWORD *)(a2 + 16),
                       0LL,
                       (__int64)&DEVPKEY_Device_MigrationRank,
                       (__int64)&a6,
                       0LL,
                       0,
                       (__int64)&a5,
                       0) == -1073741789
    && (_DWORD)a6 == 9
    && (_DWORD)a5 == 8 )
  {
    goto LABEL_78;
  }
  if ( v33[1] )
  {
    inited = PiDevCfgQueryDeviceMigrationNode(v33, *(_QWORD *)(a2 + 8), &v29);
    if ( inited < 0 )
    {
      v29 = 0LL;
      if ( inited == -1073741772 )
        inited = 0;
    }
    else
    {
      v10 = v29;
      *((_QWORD *)v29 + 23) = 0LL;
    }
    if ( v10 )
      goto LABEL_53;
  }
  if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a2 + 8)) )
  {
LABEL_78:
    PiDevCfgClearDeviceMigrationNode(v33, *(_QWORD *)(a2 + 8));
    goto LABEL_79;
  }
  if ( !*(_QWORD *)(a2 + 64) )
    goto LABEL_46;
  v14 = v33[4];
  if ( !v33[4] )
  {
    v15 = 0LL;
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v15 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v16 = SysCtxRegOpenKey(v15, v33[0], (__int64)L"Locations", 0, 0x20019u, (__int64)&v33[4]);
    if ( v16 == -1073741772 )
    {
      v33[4] = 0LL;
      goto LABEL_46;
    }
    if ( v16 < 0 )
    {
      inited = v16;
      goto LABEL_8;
    }
    v14 = v33[4];
    if ( !v33[4] )
    {
LABEL_46:
      if ( v33[3] )
      {
        DeviceMigrationNode = PiDevCfgFindDeviceMigrationNode(v33, a2, v33[3], 69665LL, &v29);
        inited = DeviceMigrationNode;
        if ( DeviceMigrationNode >= 0 )
        {
          v10 = v29;
        }
        else
        {
          v10 = 0LL;
          if ( DeviceMigrationNode == -1073741275 )
            inited = 0;
        }
        if ( v10 )
          goto LABEL_53;
      }
      goto LABEL_78;
    }
  }
  v17 = *(_WORD **)(a2 + 64);
  v18 = 0LL;
  if ( !*v17 )
    goto LABEL_44;
  while ( 1 )
  {
    if ( *(_QWORD *)&PiPnpRtlCtx )
      v18 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
    v19 = SysCtxRegOpenKey(v18, v14, (__int64)v17, 0, 0x20019u, (__int64)&Handle);
    if ( v19 == -1073741772 )
    {
      v18 = 0LL;
      goto LABEL_38;
    }
    if ( v19 < 0 )
      break;
    inited = PiDevCfgFindDeviceMigrationNode(v33, a2, Handle, 70145LL, &v29);
    ZwClose(Handle);
    v18 = 0LL;
    if ( inited >= 0 )
    {
      v10 = v29;
      goto LABEL_45;
    }
    v29 = 0LL;
    v10 = 0LL;
    if ( inited == -1073741275 )
      inited = 0;
LABEL_38:
    v20 = -1LL;
    do
      ++v20;
    while ( v17[v20] );
    v17 += v20 + 1;
    if ( !*v17 )
      goto LABEL_44;
    v14 = v33[4];
  }
  inited = v19;
LABEL_44:
  if ( inited >= 0 )
  {
LABEL_45:
    if ( !v10 )
      goto LABEL_46;
LABEL_53:
    v22 = *((_DWORD *)v10 + 4);
    if ( (v22 & 1) != 0 )
    {
      inited = -1073740007;
    }
    else if ( (v22 & 2) != 0 )
    {
      inited = -1073740719;
    }
    else
    {
      if ( IopGetRegistryValue(*((HANDLE *)v10 + 5), L"ConfigFlags", 0, &P) >= 0 )
      {
        if ( *(_DWORD *)(*(_QWORD *)&P.Length + 4LL) == 4 && *(_DWORD *)(*(_QWORD *)&P.Length + 12LL) == 4 )
          v30 = *(_DWORD *)(*(unsigned int *)(*(_QWORD *)&P.Length + 8LL) + *(_QWORD *)&P.Length);
        ExFreePoolWithTag(*(PVOID *)&P.Length, 0);
      }
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 8);
      LODWORD(a5) = 0;
      if ( (unsigned int)PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v24,
                           1u,
                           v23,
                           0LL,
                           (__int64)&DEVPKEY_Device_ClassGuid,
                           (__int64)&a6,
                           0LL,
                           0,
                           (__int64)&a5,
                           0) != -1073741789
        || (_DWORD)a6 != 13
        || (_DWORD)a5 != 16 )
      {
        if ( a3 )
          PiDevCfgSetDeviceRegProp(v25, a2, 9u, 1, *((_QWORD *)a3 + 1), *a3 + 2);
        else
          PiDevCfgSetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            (_DWORD *)a2,
            *(_QWORD *)(a2 + 8),
            1u,
            *(_QWORD *)(a2 + 16),
            v27,
            (__int64)&DEVPKEY_Device_ClassGuid,
            13,
            (__int64)v10 + 80,
            16,
            0);
      }
      inited = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, *((_QWORD *)v10 + 5), -1, 0LL, 0LL, v9, v11);
      if ( inited >= 0 )
      {
        if ( v9 )
          *v9 |= v30;
        if ( *((_QWORD *)v10 + 23) )
        {
          v26 = *(void **)(a2 + 16);
          if ( RtlInitUnicodeStringEx(&P, L"ParentIdPrefix") >= 0 )
            ZwDeleteValueKey(v26, &P);
        }
        PiDevCfgSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          (_DWORD *)a2,
          *(_QWORD *)(a2 + 8),
          1u,
          *(_QWORD *)(a2 + 16),
          v28,
          (__int64)&DEVPKEY_Device_MigrationRank,
          9,
          (__int64)v10 + 184,
          8,
          0);
      }
    }
    PiDevCfgLogDeviceMigrated(a2, v10, (unsigned int)inited);
    if ( (*((_DWORD *)v10 + 4) & 1) == 0 )
      PiDevCfgClearDeviceMigrationNode(v33, *((_QWORD *)v10 + 4));
    if ( wcsicmp(*(const wchar_t **)(a2 + 8), *((const wchar_t **)v10 + 4)) )
      goto LABEL_78;
LABEL_79:
    if ( v10 )
      PiDevCfgFreeDeviceMigrationNode(v10);
  }
LABEL_8:
  PiDevCfgFreeMigrationContext(v33);
  return (unsigned int)inited;
}
