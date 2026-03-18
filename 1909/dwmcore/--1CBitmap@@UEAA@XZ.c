/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x1800489E0
 * Callers:
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180047D90 (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18004AE40 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x180221760 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
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
  operator delete(this[5].DebugInfo);
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
  DynArrayImpl<0>::~DynArrayImpl<0>(&this[1].OwningThread);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
