/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140011EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140011FE8 (-AERTFree@@YAXPEAX0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  __int64 v4; // rcx
  BOOL inited; // eax
  LPVOID Context; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputRT'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `IAPOAcousticEchoCancellation'};
  *((_QWORD *)this + 8) = &CSystemEffectWrapper::`vftable'{for `IAudioAmbisonics'};
  *((_QWORD *)this + 9) = &CSystemEffectWrapper::`vftable'{for `IAPOPreferredFormatSupport'};
  *((_QWORD *)this + 10) = &CSystemEffectWrapper::`vftable'{for `ISystemEffectWrapper'};
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  if ( (a2 & 1) != 0 )
  {
    inited = InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
    AERTFree(this, (void *)((unsigned __int64)Context & -(__int64)inited));
  }
  return this;
}
