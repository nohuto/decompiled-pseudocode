/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x180094BA0
 * Callers:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x1800929F4 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18009E460 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180213FE0 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rdx
  _QWORD *OwningThread; // rax
  __int64 v4; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  WPF::ProcessHeapImpl::Free(this[5].DebugInfo);
  DeleteCriticalSection(this + 3);
  *(_QWORD *)&this[1].LockCount = &CMILResourceCache::`vftable';
LABEL_2:
  LODWORD(v2) = this[2].DebugInfo;
  while ( (_DWORD)v2 )
  {
    OwningThread = this[1].OwningThread;
    v2 = (unsigned int)(v2 - 1);
    LODWORD(this[2].DebugInfo) = v2;
    v4 = OwningThread[v2];
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      goto LABEL_2;
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(&this[1].OwningThread);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
