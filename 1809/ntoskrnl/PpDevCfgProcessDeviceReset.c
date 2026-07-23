/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x1408333E0
 * Callers:
 *     PiConfigureDevice @ 0x14083B4E4 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406F5C74 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F5CB8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406F7BA0 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14082FB98 (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v2; // ebx
  int inited; // edi
  __int64 v4; // rcx
  char *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v17; // [rsp+48h] [rbp-79h] BYREF
  int v18; // [rsp+4Ch] [rbp-75h] BYREF
  int v19; // [rsp+50h] [rbp-71h] BYREF
  int v20; // [rsp+54h] [rbp-6Dh] BYREF
  UNICODE_STRING GuidString; // [rsp+58h] [rbp-69h] BYREF
  int v22[2]; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v23[5]; // [rsp+70h] [rbp-51h] BYREF
  int v24[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  memset(v24, 0, 0x48uLL);
  v2 = 0;
  *(_QWORD *)v22 = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v20 = 1;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_28;
  }
  v4 = *(_QWORD *)(a1 + 48);
  if ( !v4 )
  {
    inited = -1073741808;
    goto LABEL_28;
  }
  inited = PiDevCfgInitDeviceContext(v4, 0LL, v24);
  if ( inited >= 0 )
  {
    v5 = *(char **)&v24[4];
    memset(v23, 0, sizeof(v23));
    v6 = *(_QWORD *)(a1 + 48);
    v23[0] = &DEVPKEY_Device_ClassGuid;
    v23[2] = &Guid;
    LODWORD(v23[1]) = 13;
    LODWORD(v23[3]) = 16;
    inited = PiDevCfgQueryObjectProperties(v7, v6, 1u, *(void **)&v24[4], (__int64)v23, 1u);
    if ( inited >= 0 )
    {
      if ( SLODWORD(v23[4]) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_28;
        if ( (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)GuidString.Buffer, 2u, 131097, 0, (__int64)v22) >= 0 )
          goto LABEL_12;
        RtlFreeAnsiString(&GuidString);
      }
      *(_QWORD *)Guid.Data4 = 0LL;
      *(_QWORD *)&Guid.Data1 = 0LL;
LABEL_12:
      v8 = PiDevCfgMigrateDevice(
             a1,
             (__int64)v24,
             (unsigned __int16 *)((unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL)),
             0LL,
             &v19,
             0LL);
      v9 = v19;
      if ( v8 < 0 )
        v9 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (__int64)v24,
        (_QWORD *)((unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL)),
        *(__int64 *)v22,
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = 0LL;
      RegRtlDeleteTreeInternal(v5, L"Devices", v11, 0);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      RegRtlDeleteTreeInternal(v5, L"Filters", v13, 0);
      if ( v9 )
      {
        v14 = *(_QWORD *)(a1 + 48);
        v18 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v14,
                    (__int64)v5,
                    11,
                    (__int64)&v20,
                    (__int64)&v17,
                    (__int64)&v18,
                    0) >= 0
          && v20 == 4
          && v18 == 4 )
        {
          v2 = v17;
        }
        v17 = v9 | v2;
        PiDevCfgSetDeviceRegProp(v15, (__int64)v24, 0xBu, 4, (__int64)&v17, 4);
      }
    }
  }
LABEL_28:
  RtlFreeAnsiString(&GuidString);
  PiDevCfgFreeDeviceContext((__int64)v24);
  return (unsigned int)inited;
}
