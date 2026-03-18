/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E844
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C010CAB0 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01D45B0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C024E7D0 (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C0253198 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C025360C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253BC4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C0254634 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0254690 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C0254B6C (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  InteractiveControlDevice *v4; // rax
  InteractiveControlDevice *v5; // r14
  __int64 result; // rax
  InteractiveControlDevice *v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v11[3]; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  unsigned int *v15; // [rsp+70h] [rbp+7h]
  __int64 v16; // [rsp+78h] [rbp+Fh]
  __int64 v17; // [rsp+80h] [rbp+17h]
  _DWORD v18[2]; // [rsp+88h] [rbp+1Fh] BYREF

  if ( dword_1C0321308 > 4u )
  {
    v14 = 48LL;
    v13 = "InteractiveControlManager::OnDeviceAttach entry";
    v15 = v18;
    v17 = *((_QWORD *)a2 + 38);
    v18[0] = *((unsigned __int16 *)a2 + 148);
    v16 = 2LL;
    v18[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E9156, 0LL, 0LL, 5u, &pData);
  }
  v4 = (InteractiveControlDevice *)Win32AllocPool(400LL, 1819440195LL);
  v5 = v4;
  if ( !v4 )
  {
    result = 3221225626LL;
    v10 = -1073741670;
    goto LABEL_21;
  }
  v7 = InteractiveControlDevice::InteractiveControlDevice(v4);
  result = InteractiveControlDevice::Initialize(v7, a2);
  v10 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::InsertDevice(this, (void **)v7);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v8 = *((_QWORD *)a2 + 53);
      RIMUnlockExclusive(v8 + 104);
      InteractiveControlDevice::SetBackgroundAccessor(v7, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
      InteractiveControlDevice::SetFocus(v7, *(_QWORD *)this, *((unsigned int *)this + 2), 1LL);
      if ( !*((_DWORD *)this + 2) )
      {
        v9 = InteractiveControlDevice::SetComponentResolution(v7, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
        v10 = v9;
        if ( v9 < 0 && dword_1C0321308 > 2u )
        {
          v11[0] = v9;
          v13 = "Function failed.";
          v15 = v11;
          v14 = 17LL;
          v16 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
        }
      }
      RIMLockExclusive(v8 + 104);
      goto LABEL_16;
    }
    if ( dword_1C0321308 <= 2u )
      goto LABEL_17;
  }
  else if ( dword_1C0321308 <= 2u )
  {
    goto LABEL_17;
  }
  v11[0] = result;
  v13 = "Function failed.";
  v15 = v11;
  v14 = 17LL;
  v16 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
LABEL_16:
  result = v10;
LABEL_17:
  if ( (int)result < 0 )
  {
    if ( v7 )
      InteractiveControlDevice::Deinitialize(v7);
    Win32FreePool(v5);
    result = v10;
  }
LABEL_21:
  if ( dword_1C0321308 > 4u )
  {
    v14 = 47LL;
    v13 = "InteractiveControlManager::OnDeviceAttach exit";
    v15 = &v10;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
    return v10;
  }
  return result;
}
