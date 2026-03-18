/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C024DD70
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C022CEB0 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C024DD20 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3)
{
  const GUID *v6; // r8
  unsigned int v7; // edx
  struct InteractiveControlDevice *v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int Device; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+34h] [rbp-25h] BYREF
  struct InteractiveControlDevice *v18; // [rsp+38h] [rbp-21h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  const char *v21; // [rsp+70h] [rbp+17h]
  int v22; // [rsp+78h] [rbp+1Fh]
  int v23; // [rsp+7Ch] [rbp+23h]
  int *p_Device; // [rsp+80h] [rbp+27h]
  int v25; // [rsp+88h] [rbp+2Fh]
  int v26; // [rsp+8Ch] [rbp+33h]

  v18 = 0LL;
  v19 = 0LL;
  if ( dword_1C0321308 > 4u )
  {
    v23 = 0;
    v26 = 0;
    v21 = "InteractiveControlManager::GetDeviceInfo entry";
    p_Device = &v17;
    v22 = 47;
    v17 = a2;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DF3, 0LL, 0LL, 4u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v18, 0LL);
  v7 = Device;
  if ( Device < 0 )
  {
    if ( dword_1C0321308 <= 2u )
      goto LABEL_14;
    v23 &= (unsigned int)v6;
    v26 &= (unsigned int)v6;
    v21 = "Function failed.";
    p_Device = &v17;
    v22 = 17;
    v17 = Device;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, v6, 0LL, 4u, &pData);
    goto LABEL_6;
  }
  v8 = v18;
  *(_DWORD *)a3 = *((_DWORD *)v18 + 2);
  *((_DWORD *)a3 + 5) = *((_DWORD *)v8 + 40);
  *((_DWORD *)a3 + 6) = *((_DWORD *)v8 + 38);
  v9 = 1;
  v10 = *((_QWORD *)v8 + 48);
  if ( v10 )
    v9 = *(_DWORD *)(v10 + 76);
  *((_DWORD *)a3 + 8) = v9;
  v11 = 0;
  v12 = *((_QWORD *)v8 + 48);
  if ( v12 )
    v11 = *(_DWORD *)(v12 + 88);
  *((_DWORD *)a3 + 9) = v11;
  v13 = *((_QWORD *)v8 + 30);
  if ( v13 )
  {
    LODWORD(v18) = *((_DWORD *)v8 + 55) - *((_DWORD *)v8 + 53);
    HIDWORD(v18) = *((_DWORD *)v8 + 56) - *((_DWORD *)v8 + 54);
    RIMTransformDimensionFromDigitizer(v13, 0LL, &v18, &v19);
    v14 = v19;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *(_QWORD *)((char *)a3 + 12) = __PAIR64__(HIDWORD(v19), v14);
LABEL_6:
    v7 = Device;
    goto LABEL_14;
  }
  *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)((char *)v8 + 212);
LABEL_14:
  if ( dword_1C0321308 > 4u )
  {
    v23 = 0;
    v26 = 0;
    v21 = "InteractiveControlManager::GetDeviceInfo exit";
    p_Device = &Device;
    v22 = 46;
    v25 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
    return (unsigned int)Device;
  }
  return v7;
}
