/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02117DC
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020C834 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C0210F2C (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C0210FF8 (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0211240 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C0211BD8 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0213FAC (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C02143C8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C02150F4 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C0215B0C (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C02161C0 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

NTSTATUS __fastcall InteractiveControlDevice::Initialize(PHIDP_PREPARSED_DATA *this, struct _UNICODE_STRING *Object)
{
  NTSTATUS result; // eax
  int v5; // ecx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  __int64 v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  SimpleHapticsController *v10; // rcx
  SimpleHapticsController *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  const struct _DEVPROPKEY *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  SimpleHapticsController *v19; // rcx
  SimpleHapticsController *v20; // rcx
  int v21; // eax
  const GUID *v22; // r8
  const GUID *v23; // r9
  const GUID *v24; // r8
  const GUID *v25; // r9
  unsigned int ObjectType; // [rsp+20h] [rbp-59h]
  unsigned int AccessMode; // [rsp+28h] [rbp-51h]
  int v28; // [rsp+40h] [rbp-39h] BYREF
  int v29; // [rsp+44h] [rbp-35h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const char *v33; // [rsp+80h] [rbp+7h]
  __int64 v34; // [rsp+88h] [rbp+Fh]
  int *v35; // [rsp+90h] [rbp+17h]
  __int64 v36; // [rsp+98h] [rbp+1Fh]

  v28 = 0;
  Handle = 0LL;
  LODWORD(Size) = 0;
  if ( !Object )
  {
    v28 = -1073741811;
LABEL_47:
    InteractiveControlDevice::Deinitialize((InteractiveControlDevice *)this);
    return v28;
  }
  result = RawInputManagerDeviceObjectReference(Object);
  v28 = result;
  if ( result >= 0 )
  {
    v5 = dword_1C03202B4;
    *((_DWORD *)this + 2) = dword_1C03202B4;
    *this = (PHIDP_PREPARSED_DATA)Object;
    dword_1C03202B4 = v5 + 1;
    result = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, &Handle);
    v28 = result;
    if ( result >= 0 )
    {
      result = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      v28 = result;
      if ( result >= 0 )
      {
        v6 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        this[32] = v6;
        if ( !v6 )
        {
LABEL_7:
          result = -1073741670;
LABEL_8:
          v28 = result;
          goto LABEL_44;
        }
        memset(v6, 0, (unsigned int)Size);
        result = RIMGetDevicePreparsedDataLockfree(Handle, this[32], &Size, 0LL);
        v28 = result;
        if ( result >= 0 )
        {
          v7 = Win32AllocPool(96LL, 1667787091LL);
          if ( v7 )
          {
            *(_QWORD *)(v7 + 16) = 0LL;
            *(_QWORD *)(v7 + 24) = 0LL;
            *(_QWORD *)(v7 + 32) = 0LL;
            *(_QWORD *)(v7 + 56) = 0LL;
            *(_QWORD *)(v7 + 64) = 0LL;
            *(_WORD *)(v7 + 72) = 0;
            *(_DWORD *)(v7 + 76) = 0;
            *(_QWORD *)(v7 + 80) = 0LL;
            *(_DWORD *)(v7 + 88) = 0;
            *(_BYTE *)(v7 + 92) = 0;
          }
          else
          {
            v7 = 0LL;
          }
          this[48] = (PHIDP_PREPARSED_DATA)v7;
          if ( !v7 )
            goto LABEL_7;
          v28 = SimpleHapticsController::Initialize((SimpleHapticsController *)v7, Object + 18);
          if ( v28 < 0 )
          {
            if ( dword_1C031C7D0 > 4u )
            {
              v34 = 49LL;
              v33 = "SimpleHapticsController->Initialize failed with.";
              v35 = &v28;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3860, v8, v9, 4u, &pData);
            }
            v10 = this[48];
            if ( v10 )
            {
              SimpleHapticsController::DeInitialize(v10);
              v11 = this[48];
              if ( v11 )
                SimpleHapticsController::`scalar deleting destructor'(v11);
              this[48] = 0LL;
            }
            v28 = 0;
          }
          result = InteractiveControlParser::BuildDeviceCapabilities(this[32], (struct InteractiveControlDevice *)this);
          v28 = result;
          if ( result >= 0 )
          {
            if ( *((_DWORD *)this + 18) != 1 )
            {
              result = -1073741637;
              goto LABEL_8;
            }
            if ( this[30] )
              InteractiveControlDevice::CreateDeadzone((InteractiveControlDevice *)this, v12, v13, v14);
            if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
            {
              v29 = 235930369;
              if ( gdwInAtomicOperation )
              {
                v16 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation, v17, v18);
              v19 = this[48];
              if ( v19 )
                SimpleHapticsController::SendDeviceIOControl(v19, 0xB0191u, &v29, 4u, 0LL, 0, 0LL);
              EnterCrit(0LL, 1LL);
            }
            if ( (*((_DWORD *)*this + 66) & 0x1000) == 0 && *((_DWORD *)this + 18) == 1 )
            {
              v20 = this[48];
              if ( v20 )
              {
                v21 = SimpleHapticsController::SetDevicePropertyData(
                        v20,
                        v15,
                        v17,
                        v18,
                        ObjectType,
                        AccessMode,
                        this + 9);
                v28 = v21;
                if ( v21 < 0 && dword_1C031C7D0 > 2u )
                {
                  v29 = v21;
                  v35 = &v29;
                  v33 = "Function failed.";
                  v34 = 17LL;
                  v36 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v22, v23, 4u, &pData);
                }
                v28 = 0;
              }
            }
            result = InteractiveControlDevice::InitializeWaveformOrdinalForDevice((InteractiveControlDevice *)this);
            v28 = result;
            if ( result < 0 && dword_1C031C7D0 > 2u )
            {
              v29 = result;
              v35 = &v29;
              v33 = "Function failed.";
              v34 = 17LL;
              v36 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, v24, v25, 4u, &pData);
              result = v28;
            }
          }
        }
      }
    }
  }
LABEL_44:
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
    result = v28;
  }
  if ( result < 0 )
    goto LABEL_47;
  return result;
}
