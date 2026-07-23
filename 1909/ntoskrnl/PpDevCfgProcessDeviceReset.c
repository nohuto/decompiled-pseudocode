/*
 * XREFs of PpDevCfgProcessDeviceReset @ 0x14086C244
 * Callers:
 *     PiConfigureDevice @ 0x1408744E4 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpOpenObjectRegKey @ 0x1405BC2A0 (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406FB1D4 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x1406FB7C8 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FF224 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073C69C (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140868908 (PiDevCfgResetDeviceDriverSettings.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceReset(__int64 a1)
{
  int v2; // ebx
  int inited; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rsi
  __int64 v7; // rdx
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
  _QWORD v23[3]; // [rsp+70h] [rbp-51h] BYREF
  int v24; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+8Ch] [rbp-35h]
  int v26; // [rsp+94h] [rbp-2Dh]
  int v27[20]; // [rsp+98h] [rbp-29h] BYREF
  GUID Guid; // [rsp+E8h] [rbp+27h] BYREF

  memset(v27, 0, 0x48uLL);
  v2 = 0;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  v20 = 1;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
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
  inited = PiDevCfgInitDeviceContext(v4, 0LL, v27);
  if ( inited >= 0 )
  {
    v6 = *(char **)&v27[4];
    v7 = *(_QWORD *)(a1 + 48);
    v23[0] = &DEVPKEY_Device_ClassGuid;
    v23[2] = &Guid;
    v23[1] = 13LL;
    v25 = 0LL;
    v26 = 0;
    v24 = 16;
    inited = PiDevCfgQueryObjectProperties(v5, v7, 1u, *(void **)&v27[4], (__int64)v23, 1u);
    if ( inited >= 0 )
    {
      if ( v25 >= 0 )
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
             (__int64)v27,
             (unsigned __int16 *)((unsigned __int64)&GuidString & -(__int64)(GuidString.Buffer != 0LL)),
             0LL,
             &v19,
             0LL);
      v9 = v19;
      if ( v8 < 0 )
        v9 = 0;
      PiDevCfgResetDeviceDriverSettings(
        a1,
        (__int64)v27,
        (_QWORD *)((unsigned __int64)&Guid & -(__int64)(GuidString.Buffer != 0LL)),
        *(__int64 *)v22,
        0LL);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v10 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v11 = *(_QWORD *)(v10 + 8);
      else
        v11 = 0LL;
      RegRtlDeleteTreeInternal(v6, L"Devices", v11, 0);
      if ( *(_QWORD *)&PiPnpRtlCtx && (v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      RegRtlDeleteTreeInternal(v6, L"Filters", v13, 0);
      if ( v9 )
      {
        v14 = *(_QWORD *)(a1 + 48);
        v18 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v14,
                    (__int64)v6,
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
        PiDevCfgSetDeviceRegProp(v15, (__int64)v27, 0xBu, 4, (__int64)&v17, 4);
      }
    }
  }
LABEL_28:
  RtlFreeAnsiString(&GuidString);
  PiDevCfgFreeDeviceContext((__int64)v27);
  return (unsigned int)inited;
}
