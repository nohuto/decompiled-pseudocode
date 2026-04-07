/*
 * XREFs of ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x1800B25E0
 * Callers:
 *     ??_ECCompressedSourceBitmap@@MEAAPEAXI@Z @ 0x1800B26D0 (--_ECCompressedSourceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompressedSourceBitmap::~CCompressedSourceBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  ULONG_PTR SpinCount; // rdx
  HANDLE LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx

  SpinCount = this[6].SpinCount;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[2].SpinCount = (ULONG_PTR)&CCompressedSourceBitmap::`vftable'{for `CMTALock'};
  this[6].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *(_QWORD *)&this[6].LockCount = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  if ( SpinCount )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  LockSemaphore = this[6].LockSemaphore;
  if ( LockSemaphore )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)LockSemaphore + 16LL))(LockSemaphore);
  OwningThread = this[6].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  v5 = *(_QWORD *)&this[7].LockCount;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CBitmap::~CBitmap(this);
}
