/*
 * XREFs of ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180221B28
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180047FE0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?AddRef@CHolographicClient@@UEAAKXZ @ 0x18001F570 (-AddRef@CHolographicClient@@UEAAKXZ.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800484F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x18004864C (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x1800D7D60 (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180222228 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 */

__int64 __fastcall CBitmap::HrLockUnaligned(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        void *lpMem,
        enum WICBitmapLockFlags a10,
        struct IBitmapLock **a11)
{
  volatile signed __int32 *v13; // rsi
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // r9d
  CBitmapLock *v17; // rax
  CBitmapLock *v18; // r14
  signed int v19; // eax
  __int64 v20; // rcx
  unsigned int v23; // [rsp+20h] [rbp-78h]
  const void *retaddr; // [rsp+98h] [rbp+0h]

  if ( (a10 & 2) != 0 )
  {
    v13 = (volatile signed __int32 *)((char *)this + 196);
    v14 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 196));
    v15 = v14;
    if ( v14 < 0 )
    {
      v23 = 758;
LABEL_4:
      v16 = v14;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v16, v23, 0LL);
      return v15;
    }
  }
  else
  {
    if ( (a10 & 1) == 0 )
    {
      v15 = -2147024809;
      v16 = -2147024809;
      v23 = 766;
      goto LABEL_21;
    }
    v13 = (volatile signed __int32 *)((char *)this + 196);
    v14 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 196));
    v15 = v14;
    if ( v14 < 0 )
    {
      v23 = 762;
      goto LABEL_4;
    }
  }
  v17 = (CBitmapLock *)DefaultHeap::AllocClear(0xA8uLL);
  v18 = v17;
  if ( !v17 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  CBitmapLock::CBitmapLock(v17);
  *((_QWORD *)v18 + 14) = 0LL;
  *(_QWORD *)v18 = &CBitmapLockUnaligned::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v18 + 2) = &CBitmapLockUnaligned::`vftable'{for `IBitmapLock'};
  *((_QWORD *)v18 + 3) = &CBitmapLockUnaligned::`vftable'{for `IWICBitmapLock'};
  CHolographicClient::AddRef(v18);
  v19 = CBitmapLockUnaligned::HrInit(v18, this, a2, a3, a4, (unsigned int)a7, a8, lpMem, a10, a5, a6);
  v15 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x310u, 0LL);
    if ( (a10 & 2) != 0 )
    {
      *v13 = 0;
    }
    else if ( (a10 & 1) != 0 )
    {
      _InterlockedDecrement(v13);
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  else
  {
    if ( (a10 & 2) != 0 && (*((_DWORD *)this + 28))++ == -1 )
      ++*((_DWORD *)this + 28);
    *a11 = (CBitmapLock *)((char *)v18 + 16);
  }
  return v15;
}
