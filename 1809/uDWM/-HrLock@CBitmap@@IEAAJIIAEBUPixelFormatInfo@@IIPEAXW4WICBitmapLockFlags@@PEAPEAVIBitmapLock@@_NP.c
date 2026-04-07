/*
 * XREFs of ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180047C1C
 * Callers:
 *     ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180047A70 (-Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180047D80 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800487F4 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v13; // edi
  int v15; // esi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  CBitmapLock *v18; // rax
  CBitmapLock *v19; // rsi
  unsigned int v21; // eax
  unsigned int v23; // [rsp+20h] [rbp-68h]

  v13 = a2;
  if ( (a8 & 2) != 0 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 53, 0x80000000, 0) )
      goto LABEL_8;
    v17 = -2003292403;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292403, 0x5Au);
    v23 = 667;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v23);
    return v17;
  }
  if ( (a8 & 1) == 0 )
  {
    v17 = -2147024809;
    v23 = 675;
    goto LABEL_31;
  }
  v15 = 0;
  while ( 1 )
  {
    v16 = *((_DWORD *)this + 53) & 0x7FFFFFFF;
    if ( v16 + 1 < 0 )
      break;
    if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)this + 53, v16 + 1, v16) )
      goto LABEL_6;
  }
  v15 = -2003292403;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292403, 0x3Bu);
LABEL_6:
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x29Fu);
    return v17;
  }
  v13 = a2;
LABEL_8:
  v18 = (CBitmapLock *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         160LL);
  if ( v18 )
    v19 = CBitmapLock::CBitmapLock(v18);
  else
    v19 = 0LL;
  if ( v19 )
  {
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 8LL))(v19);
    v17 = CBitmapLock::HrInit(
            v19,
            (struct IBitmapUnlock *)(((unsigned __int64)this + 32) & -(__int64)(this != 0LL)),
            v13,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a10,
            a11);
    if ( (v17 & 0x80000000) == 0 )
    {
      if ( (a8 & 2) != 0 && (*((_DWORD *)this + 42))++ == -1 )
        ++*((_DWORD *)this + 42);
      *a9 = (CBitmapLock *)((char *)v19 + 72);
      return v17;
    }
    v21 = 693;
  }
  else
  {
    v17 = -2147024882;
    v21 = 681;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v21);
  if ( (a8 & 2) != 0 )
  {
    *((_DWORD *)this + 53) = 0;
  }
  else if ( (a8 & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 53);
  }
  if ( v19 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v19 + 16LL))(v19);
  return v17;
}
