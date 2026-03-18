/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18009676C
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180072940 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180096BD0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800714BC (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?LockWrite@CBitmapLockState@@QEAAJXZ @ 0x180079D4C (-LockWrite@CBitmapLockState@@QEAAJXZ.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800968D4 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180096A38 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?LockRead@CBitmapLockState@@QEAAJXZ @ 0x180096BA0 (-LockRead@CBitmapLockState@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::HrLock(
        CBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7,
        enum WICBitmapLockFlags a8,
        struct IBitmapLock **a9,
        bool a10,
        struct IUnknown *a11)
{
  volatile signed __int32 *v14; // r14
  int v15; // eax
  unsigned int v16; // ebx
  CBitmapLock *v17; // rax
  unsigned int v18; // ecx
  CBitmapLock *v19; // rdi
  int v20; // eax
  unsigned int v21; // ecx
  int v24; // r9d
  unsigned int v25; // [rsp+20h] [rbp-68h]

  if ( (a8 & 2) == 0 )
  {
    if ( (a8 & 1) == 0 )
    {
      v16 = -2147024809;
      v25 = 690;
      v24 = -2147024809;
      goto LABEL_27;
    }
    v14 = (volatile signed __int32 *)((char *)this + 196);
    v15 = CBitmapLockState::LockRead((CBitmap *)((char *)this + 196));
    v16 = v15;
    if ( v15 >= 0 )
      goto LABEL_4;
    v25 = 686;
LABEL_16:
    v24 = v15;
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v24, v25);
    return v16;
  }
  v14 = (volatile signed __int32 *)((char *)this + 196);
  v15 = CBitmapLockState::LockWrite((CBitmap *)((char *)this + 196));
  v16 = v15;
  if ( v15 < 0 )
  {
    v25 = 682;
    goto LABEL_16;
  }
LABEL_4:
  v17 = (CBitmapLock *)CBitmapLock::operator new();
  if ( v17 )
    v19 = CBitmapLock::CBitmapLock(v17);
  else
    v19 = 0LL;
  if ( v19 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11);
    v16 = v20;
    if ( v20 >= 0 )
    {
      if ( (a8 & 2) != 0 && (*((_DWORD *)this + 28))++ == -1 )
        ++*((_DWORD *)this + 28);
      *a9 = (CBitmapLock *)((char *)v19 + 16);
      return v16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2C4u);
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x2B8u);
  }
  if ( (a8 & 2) != 0 )
  {
    *v14 = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement(v14);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v16;
}
