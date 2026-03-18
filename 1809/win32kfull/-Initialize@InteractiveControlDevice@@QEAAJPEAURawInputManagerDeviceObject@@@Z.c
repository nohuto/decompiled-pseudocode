/*
 * XREFs of ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C023AF18
 * Callers:
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0235C00 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C023A61C (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1C023A6EC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023A964 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ @ 0x1C023B368 (-InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C023D87C (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C023DCF0 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023EB08 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C023F5F0 (-SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z.c)
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FD20 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 */

NTSTATUS __fastcall InteractiveControlDevice::Initialize(PHIDP_PREPARSED_DATA *this, char *Object)
{
  NTSTATUS result; // eax
  int v5; // ecx
  struct _HIDP_PREPARSED_DATA *v6; // rax
  __int64 v7; // rax
  SimpleHapticsController *v8; // rcx
  SimpleHapticsController *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const struct _DEVPROPKEY *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  SimpleHapticsController *v17; // rcx
  SimpleHapticsController *v18; // rcx
  int v19; // eax
  unsigned int ObjectType; // [rsp+20h] [rbp-59h]
  unsigned int AccessMode; // [rsp+28h] [rbp-51h]
  int v22; // [rsp+40h] [rbp-39h] BYREF
  int v23; // [rsp+44h] [rbp-35h] BYREF
  size_t Size; // [rsp+48h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  const char *v27; // [rsp+80h] [rbp+7h]
  __int64 v28; // [rsp+88h] [rbp+Fh]
  int *v29; // [rsp+90h] [rbp+17h]
  __int64 v30; // [rsp+98h] [rbp+1Fh]

  v22 = 0;
  Handle = 0LL;
  LODWORD(Size) = 0;
  if ( !Object )
  {
    v22 = -1073741811;
LABEL_47:
    InteractiveControlDevice::Deinitialize((InteractiveControlDevice *)this);
    return v22;
  }
  result = RawInputManagerDeviceObjectReference(Object);
  v22 = result;
  if ( result >= 0 )
  {
    v5 = dword_1C0310B6C;
    *((_DWORD *)this + 2) = dword_1C0310B6C;
    *this = (PHIDP_PREPARSED_DATA)Object;
    dword_1C0310B6C = v5 + 1;
    result = ObOpenObjectByPointer(Object, 0, 0LL, 3u, ExRawInputManagerObjectType, 1, &Handle);
    v22 = result;
    if ( result >= 0 )
    {
      result = RIMGetDevicePreparsedDataLockfree(Handle, 0LL, &Size, 0LL);
      v22 = result;
      if ( result >= 0 )
      {
        v6 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPool((unsigned int)Size, 1819440195LL);
        this[32] = v6;
        if ( !v6 )
          goto LABEL_42;
        memset(v6, 0, (unsigned int)Size);
        result = RIMGetDevicePreparsedDataLockfree(Handle, this[32], &Size, 0LL);
        v22 = result;
        if ( result < 0 )
          goto LABEL_44;
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
          *(_QWORD *)(v7 + 8) = 0LL;
        }
        else
        {
          v7 = 0LL;
        }
        this[48] = (PHIDP_PREPARSED_DATA)v7;
        if ( !v7 )
        {
LABEL_42:
          result = -1073741670;
          goto LABEL_43;
        }
        v22 = SimpleHapticsController::Initialize(
                (SimpleHapticsController *)v7,
                (struct _UNICODE_STRING *)(Object + 296));
        if ( v22 < 0 )
        {
          if ( dword_1C030C400 > 4u )
          {
            v28 = 49LL;
            v27 = "SimpleHapticsController->Initialize failed with.";
            v29 = &v22;
            v30 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D60DF, 0LL, 0LL, 4u, &pData);
          }
          v8 = this[48];
          if ( v8 )
          {
            SimpleHapticsController::DeInitialize(v8);
            v9 = this[48];
            if ( v9 )
              SimpleHapticsController::`scalar deleting destructor'(v9);
            this[48] = 0LL;
          }
          v22 = 0;
        }
        result = InteractiveControlParser::BuildDeviceCapabilities(this[32], (struct InteractiveControlDevice *)this);
        v22 = result;
        if ( result >= 0 )
        {
          if ( *((_DWORD *)this + 18) != 1 )
          {
            result = -1073741637;
LABEL_43:
            v22 = result;
            goto LABEL_44;
          }
          if ( this[30] )
            InteractiveControlDevice::CreateDeadzone((InteractiveControlDevice *)this, v10, v11, v12);
          if ( *((_DWORD *)InteractiveControlManager::Instance() + 21) )
          {
            v23 = 235930369;
            if ( gdwInAtomicOperation )
            {
              v14 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation, v15, v16);
            v17 = this[48];
            if ( v17 )
              SimpleHapticsController::SendDeviceIOControl(v17, 0xB0191u, &v23, 4u, 0LL, 0, 0LL);
            EnterCrit(0LL, 1LL);
          }
          if ( (*((_DWORD *)*this + 68) & 0x2000) == 0 && *((_DWORD *)this + 18) == 1 )
          {
            v18 = this[48];
            if ( v18 )
            {
              v19 = SimpleHapticsController::SetDevicePropertyData(v18, v13, v15, v16, ObjectType, AccessMode, this + 9);
              v22 = v19;
              if ( v19 < 0 && dword_1C030C400 > 2u )
              {
                v23 = v19;
                v29 = &v23;
                v27 = "Function failed.";
                v28 = 17LL;
                v30 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
              }
              v22 = 0;
            }
          }
          result = InteractiveControlDevice::InitializeWaveformOrdinalForDevice((InteractiveControlDevice *)this);
          v22 = result;
          if ( result < 0 && dword_1C030C400 > 2u )
          {
            v23 = result;
            v29 = &v23;
            v27 = "Function failed.";
            v28 = 17LL;
            v30 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
            result = v22;
          }
        }
      }
    }
  }
LABEL_44:
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
    result = v22;
  }
  if ( result < 0 )
    goto LABEL_47;
  return result;
}
