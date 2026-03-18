/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235C00
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C0102C50 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01C0810 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C0235B8C (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C023A4F8 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023A964 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023AF18 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023B958 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C023B9B4 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023BE94 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
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

  v10 = 0;
  if ( dword_1C030C400 > 4u )
  {
    v14 = 48LL;
    v13 = "InteractiveControlManager::OnDeviceAttach entry";
    v15 = v18;
    v17 = *((_QWORD *)a2 + 38);
    v18[0] = *((unsigned __int16 *)a2 + 148);
    v16 = 2LL;
    v18[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D647B, 0LL, 0LL, 5u, &pData);
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
      InteractiveControlDevice::SetBackgroundAccessor(v7, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
      InteractiveControlDevice::SetFocus(v7, *(_QWORD *)this, *((unsigned int *)this + 2));
      if ( !*((_DWORD *)this + 2) )
      {
        v8 = *((_QWORD *)a2 + 53);
        RIMUnlockExclusive(v8 + 104);
        v9 = InteractiveControlDevice::SetComponentResolution(v7, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
        v10 = v9;
        if ( v9 < 0 && dword_1C030C400 > 2u )
        {
          v11[0] = v9;
          v13 = "Function failed.";
          v15 = v11;
          v14 = 17LL;
          v16 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
        }
        RIMLockExclusive(v8 + 104);
      }
      goto LABEL_16;
    }
    if ( dword_1C030C400 <= 2u )
      goto LABEL_17;
  }
  else if ( dword_1C030C400 <= 2u )
  {
    goto LABEL_17;
  }
  v11[0] = result;
  v13 = "Function failed.";
  v15 = v11;
  v14 = 17LL;
  v16 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
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
  if ( dword_1C030C400 > 4u )
  {
    v14 = 47LL;
    v13 = "InteractiveControlManager::OnDeviceAttach exit";
    v15 = &v10;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
    return v10;
  }
  return result;
}
