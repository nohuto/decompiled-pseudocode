/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0056BB0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C019F620 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C020C7C0 (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C0210E18 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0211240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02117DC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02121A4 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C02121F8 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02126AC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        const GUID *a3,
        const GUID *a4)
{
  InteractiveControlDevice *v6; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  InteractiveControlDevice *v9; // r14
  __int64 result; // rax
  InteractiveControlDevice *v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v16; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v17[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v19; // [rsp+60h] [rbp-9h]
  __int64 v20; // [rsp+68h] [rbp-1h]
  unsigned int *v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  __int64 v23; // [rsp+80h] [rbp+17h]
  _DWORD v24[2]; // [rsp+88h] [rbp+1Fh] BYREF

  v16 = 0;
  if ( dword_1C031C7D0 > 4u )
  {
    v20 = 48LL;
    v19 = "InteractiveControlManager::OnDeviceAttach entry";
    v21 = v24;
    v23 = *((_QWORD *)a2 + 37);
    v24[0] = *((unsigned __int16 *)a2 + 144);
    v22 = 2LL;
    v24[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3A74, a3, a4, 5u, &pData);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPool(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    result = 3221225626LL;
    v16 = -1073741670;
    goto LABEL_21;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  result = InteractiveControlDevice::Initialize(v11, a2);
  v16 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::InsertDevice(this, (void **)v11);
    v16 = result;
    if ( (int)result >= 0 )
    {
      InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
      InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2));
      if ( !*((_DWORD *)this + 2) )
      {
        v12 = *((_QWORD *)a2 + 52);
        RIMUnlockExclusive(v12 + 96);
        v13 = InteractiveControlDevice::SetComponentResolution(v11, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
        v16 = v13;
        if ( v13 < 0 && dword_1C031C7D0 > 2u )
        {
          v17[0] = v13;
          v19 = "Function failed.";
          v21 = v17;
          v20 = 17LL;
          v22 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v14, v15, 4u, &pData);
        }
        RIMLockExclusive(v12 + 96);
      }
      goto LABEL_16;
    }
    if ( dword_1C031C7D0 <= 2u )
      goto LABEL_17;
  }
  else if ( dword_1C031C7D0 <= 2u )
  {
    goto LABEL_17;
  }
  v17[0] = result;
  v19 = "Function failed.";
  v21 = v17;
  v20 = 17LL;
  v22 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v7, v8, 4u, &pData);
LABEL_16:
  result = v16;
LABEL_17:
  if ( (int)result < 0 )
  {
    if ( v11 )
      InteractiveControlDevice::Deinitialize(v11);
    Win32FreePool(v9);
    result = v16;
  }
LABEL_21:
  if ( dword_1C031C7D0 > 4u )
  {
    v20 = 47LL;
    v19 = "InteractiveControlManager::OnDeviceAttach exit";
    v21 = &v16;
    v22 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v7, v8, 4u, &pData);
    return v16;
  }
  return result;
}
