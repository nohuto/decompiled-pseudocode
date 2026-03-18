/*
 * XREFs of ?CopyPixels@CBitmapColorKey@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802338F0
 * Callers:
 *     ?CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z @ 0x1800F1520 (-CopyPixels@CBitmapColorKey@@W7EAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007F41C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802337C0 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 */

__int64 __fastcall CBitmapColorKey::CopyPixels(
        CBitmapColorKey *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  const struct WICRect *v7; // rdi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]

  v21 = 0LL;
  v22 = 0LL;
  v7 = a2;
  if ( !a2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, char *))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           &v20,
           (char *)&v20 + 4);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x25Fu);
      return v11;
    }
    v7 = (const struct WICRect *)&v21;
    v22 = v20;
  }
  v12 = HrCheckBufferSize(*((_DWORD *)this + 6), a3, v7, a4);
  v11 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x26Au);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, const struct WICRect *, _QWORD, _QWORD, unsigned __int8 *))(**((_QWORD **)this + 2) + 48LL))(
            *((_QWORD *)this + 2),
            v7,
            a3,
            a4,
            a5);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x272u);
    }
    else
    {
      v17 = CBitmapColorKey::ApplyColorKeyToBuffer((CBitmapColorKey *)((char *)this - 16), v7, a3, v16, a5);
      v11 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x27Au);
    }
  }
  return v11;
}
