/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253BC4
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C024E844 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00D8DC8 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C02532C4 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0253394 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C025360C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C025403C (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02565F8 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0256A70 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0257888 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C0258334 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C0258A70 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

NTSTATUS __fastcall InteractiveControlDevice::Initialize(InteractiveControlDevice *this, char *Object)
{
  __int64 v2; // rsi
  NTSTATUS result; // eax
  int v6; // ecx
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  SimpleHapticsController *v10; // rcx
  SimpleHapticsController *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  SimpleHapticsController *v15; // rcx
  const struct _DEVPROPKEY *v16; // rdx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  SimpleHapticsController *v19; // rcx
  int v20; // eax
  unsigned int ObjectType; // [rsp+20h] [rbp-59h]
  unsigned int AccessMode; // [rsp+28h] [rbp-51h]
  int v23; // [rsp+40h] [rbp-39h] BYREF
  int v24; // [rsp+44h] [rbp-35h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const char *v28; // [rsp+80h] [rbp+7h]
  __int64 v29; // [rsp+88h] [rbp+Fh]
  int *v30; // [rsp+90h] [rbp+17h]
  __int64 v31; // [rsp+98h] [rbp+1Fh]

  v2 = *((_QWORD *)Object + 53);
  Handle = 0LL;
  LODWORD(Size) = 0;
  result = RawInputManagerDeviceObjectReference(Object);
  v23 = result;
  if ( result >= 0 )
  {
    v6 = dword_1C0325B9C;
    *((_DWORD *)this + 2) = dword_1C0325B9C;
    *(_QWORD *)this = Object;
    dword_1C0325B9C = v6 + 1;
    result = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, &Handle);
    v23 = result;
    if ( result >= 0 )
    {
      result = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      v23 = result;
      if ( result >= 0 )
      {
        v7 = (void *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        *((_QWORD *)this + 32) = v7;
        if ( !v7 )
          goto LABEL_42;
        memset(v7, 0, (unsigned int)Size);
        result = RIMGetDevicePreparsedDataLockfree(Handle, *((_QWORD *)this + 32), &Size, 0LL);
        v23 = result;
        if ( result < 0 )
          goto LABEL_43;
        v8 = Win32AllocPool(96LL, 1667787091LL);
        if ( v8 )
        {
          *(_QWORD *)(v8 + 16) = 0LL;
          *(_QWORD *)(v8 + 24) = 0LL;
          *(_QWORD *)(v8 + 32) = 0LL;
          *(_QWORD *)(v8 + 56) = 0LL;
          *(_QWORD *)(v8 + 64) = 0LL;
          *(_WORD *)(v8 + 72) = 0;
          *(_DWORD *)(v8 + 76) = 0;
          *(_QWORD *)(v8 + 80) = 0LL;
          *(_DWORD *)(v8 + 88) = 0;
          *(_BYTE *)(v8 + 92) = 0;
          *(_QWORD *)(v8 + 8) = 0LL;
        }
        else
        {
          v8 = 0LL;
        }
        *((_QWORD *)this + 48) = v8;
        if ( v8 )
        {
          v9 = v2 + 104;
          RIMUnlockExclusive(v9);
          v23 = SimpleHapticsController::Initialize(
                  *((SimpleHapticsController **)this + 48),
                  (struct _UNICODE_STRING *)(Object + 296));
          if ( v23 < 0 )
          {
            if ( dword_1C0321308 > 4u )
            {
              v29 = 49LL;
              v28 = "SimpleHapticsController->Initialize failed with.";
              v30 = &v23;
              v31 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8DBA, 0LL, 0LL, 4u, &pData);
            }
            v10 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v10 )
            {
              SimpleHapticsController::DeInitialize(v10);
              v11 = (SimpleHapticsController *)*((_QWORD *)this + 48);
              if ( v11 )
                SimpleHapticsController::`scalar deleting destructor'(v11);
              *((_QWORD *)this + 48) = 0LL;
            }
            v23 = 0;
          }
          v23 = InteractiveControlParser::BuildDeviceCapabilities(*((PHIDP_PREPARSED_DATA *)this + 32), this);
          if ( v23 < 0 )
            goto LABEL_21;
          if ( *((_DWORD *)this + 18) != 1 )
          {
            v23 = -1073741637;
LABEL_21:
            RIMLockExclusive(v9);
LABEL_41:
            result = v23;
            goto LABEL_43;
          }
          if ( *((_QWORD *)this + 30) )
            InteractiveControlDevice::CreateDeadzone(this, v12, v13);
          if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
          {
            v24 = 235930369;
            if ( gdwInAtomicOperation )
            {
              v14 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v14);
            v15 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v15 )
              SimpleHapticsController::SendDeviceIOControl(v15, 0xB0191u, &v24, 4u, 0LL, 0, 0LL);
            EnterCrit(0LL, 1LL);
          }
          RIMLockExclusive(v9);
          if ( (*(_DWORD *)(*(_QWORD *)this + 272LL) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v19 = (SimpleHapticsController *)*((_QWORD *)this + 48);
            if ( v19 )
            {
              v20 = SimpleHapticsController::SetDevicePropertyData(
                      v19,
                      v16,
                      v17,
                      v18,
                      ObjectType,
                      AccessMode,
                      (char *)this + 72);
              v23 = v20;
              if ( v20 < 0 && dword_1C0321308 > 2u )
              {
                v24 = v20;
                v30 = &v24;
                v28 = "Function failed.";
                v29 = 17LL;
                v31 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
              }
              v23 = 0;
            }
          }
          result = InteractiveControlDevice::InitializeWaveformOrdinalForDevice(this);
          v23 = result;
          if ( result < 0 && dword_1C0321308 > 2u )
          {
            v24 = result;
            v30 = &v24;
            v28 = "Function failed.";
            v29 = 17LL;
            v31 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
            goto LABEL_41;
          }
        }
        else
        {
LABEL_42:
          result = -1073741670;
          v23 = -1073741670;
        }
      }
    }
  }
LABEL_43:
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
    result = v23;
  }
  if ( result < 0 )
  {
    InteractiveControlDevice::Deinitialize(this);
    return v23;
  }
  return result;
}
