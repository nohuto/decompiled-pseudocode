/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C020BDC0
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C01EEB20 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C020BD70 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3,
        const GUID *a4)
{
  LPCGUID v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int Device; // [rsp+30h] [rbp-29h] BYREF
  int v18; // [rsp+34h] [rbp-25h] BYREF
  LPCGUID pActivityId; // [rsp+38h] [rbp-21h] BYREF
  __int64 v20; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v22; // [rsp+70h] [rbp+17h]
  int v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+7Ch] [rbp+23h]
  int *p_Device; // [rsp+80h] [rbp+27h]
  int v26; // [rsp+88h] [rbp+2Fh]
  int v27; // [rsp+8Ch] [rbp+33h]

  Device = 0;
  pActivityId = 0LL;
  v20 = 0LL;
  if ( dword_1C031C7D0 > 4u )
  {
    v24 = 0;
    v27 = 0;
    v22 = "InteractiveControlManager::GetDeviceInfo entry";
    p_Device = &v18;
    v23 = 47;
    v18 = a2;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3826, (LPCGUID)a3, a4, 4u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, (struct InteractiveControlDevice **)&pActivityId, 0LL);
  v9 = Device;
  if ( Device < 0 )
  {
    if ( dword_1C031C7D0 <= 2u )
      goto LABEL_14;
    v24 &= (unsigned int)v7;
    v27 &= (unsigned int)v7;
    v22 = "Function failed.";
    p_Device = &v18;
    v23 = 17;
    v18 = Device;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v7, v8, 4u, &pData);
    goto LABEL_6;
  }
  v7 = pActivityId;
  *(_DWORD *)a3 = *(_DWORD *)pActivityId->Data4;
  *((_DWORD *)a3 + 5) = v7[10].Data1;
  *((_DWORD *)a3 + 6) = *(_DWORD *)v7[9].Data4;
  v10 = 1;
  v11 = *(_QWORD *)&v7[24].Data1;
  if ( v11 )
    v10 = *(_DWORD *)(v11 + 76);
  *((_DWORD *)a3 + 8) = v10;
  v12 = 0;
  v13 = *(_QWORD *)&v7[24].Data1;
  if ( v13 )
    v12 = *(_DWORD *)(v13 + 88);
  *((_DWORD *)a3 + 9) = v12;
  v14 = *(_QWORD *)&v7[15].Data1;
  if ( v14 )
  {
    LODWORD(pActivityId) = *(_DWORD *)&v7[13].Data4[4] - *(_DWORD *)&v7[13].Data2;
    HIDWORD(pActivityId) = v7[14].Data1 - *(_DWORD *)v7[13].Data4;
    RIMTransformDimensionFromDigitizer(v14, 0LL, &pActivityId, &v20);
    v15 = v20;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *(_QWORD *)((char *)a3 + 12) = __PAIR64__(HIDWORD(v20), v15);
LABEL_6:
    v9 = Device;
    goto LABEL_14;
  }
  *(GUID *)((char *)a3 + 4) = *(LPCGUID)((char *)v7 + 212);
LABEL_14:
  if ( dword_1C031C7D0 > 4u )
  {
    v24 = 0;
    v27 = 0;
    v22 = "InteractiveControlManager::GetDeviceInfo exit";
    p_Device = &Device;
    v23 = 46;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v7, v8, 4u, &pData);
    return (unsigned int)Device;
  }
  return v9;
}
