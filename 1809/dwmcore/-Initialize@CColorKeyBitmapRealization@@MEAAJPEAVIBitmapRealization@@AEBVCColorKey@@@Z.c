/*
 * XREFs of ?Initialize@CColorKeyBitmapRealization@@MEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x180226950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x180229D68 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::Initialize(
        CColorKeyBitmapRealization *this,
        struct IBitmapRealization *a2,
        const struct CColorKey *a3)
{
  struct CColorKeyBitmap **v3; // rdi
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  v3 = (struct CColorKeyBitmap **)((char *)this + 152);
  v5 = *((_QWORD *)this + 19);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = CColorKeyBitmap::Create(a2, a3, v3);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x30u);
  else
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      ((unsigned __int64)*v3 + 16) & -(__int64)(*v3 != 0LL));
  return v10;
}
