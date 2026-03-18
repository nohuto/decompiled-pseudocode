/*
 * XREFs of ?Lock@CBitmap@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x180214570
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmap::Lock(
        struct _RTL_CRITICAL_SECTION *this,
        const struct WICRect *a2,
        unsigned int a3,
        struct IWICBitmapLock **a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v15 = this + 2;
  EnterCriticalSection(this + 2);
  if ( !a2 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x11Du);
    goto LABEL_10;
  }
  if ( !a4 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x11Eu);
    goto LABEL_10;
  }
  v10 = (*((__int64 (__fastcall **)(HANDLE *, const struct WICRect *, _QWORD, __int64 *))this[-1].LockSemaphore + 3))(
          &this[-1].LockSemaphore,
          a2,
          a3,
          &v14);
  v9 = v10;
  if ( v10 < 0 )
  {
    v13 = 290;
  }
  else
  {
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IWICBitmapLock **))v14)(v14, &IID_IWICBitmapLock, a4);
    v9 = v10;
    if ( v10 >= 0 )
      goto LABEL_10;
    v13 = 292;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v13);
LABEL_10:
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
  return v9;
}
