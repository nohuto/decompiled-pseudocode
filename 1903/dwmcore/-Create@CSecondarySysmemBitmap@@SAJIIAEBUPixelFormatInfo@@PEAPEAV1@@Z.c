/*
 * XREFs of ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18001C59C
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18001C500 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001C69C (-Initialize@CSecondarySysmemBitmap@@IEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Create(
        int a1,
        int a2,
        const struct PixelFormatInfo *a3,
        struct CSecondarySysmemBitmap **a4)
{
  _DWORD *v8; // rax
  unsigned int v9; // ecx
  CSecondarySysmemBitmap *v10; // rbx
  _DWORD *v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // edi

  *a4 = 0LL;
  v8 = operator new(0x98uLL);
  v10 = (CSecondarySysmemBitmap *)v8;
  if ( v8 )
  {
    v8[2] = 0;
    v11 = v8 + 8;
    *((_QWORD *)v10 + 3) = v11;
    *v11 = 0;
    *((_DWORD *)v10 + 30) = 0;
    *(_QWORD *)v10 = &CSecondarySysmemBitmap::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v10 + 2) = &CSecondarySysmemBitmap::`vftable'{for `CSecondaryBitmap'};
    *((_QWORD *)v10 + 12) = &CSecondarySysmemBitmap::`vftable'{for `ID2DBitmapCacheSource'};
    *((_QWORD *)v10 + 13) = &CSecondarySysmemBitmap::`vftable'{for `IBitmapUnlock'};
    *((_DWORD *)v10 + 28) = a1;
    *((_DWORD *)v10 + 29) = a2;
    *(_QWORD *)((char *)v10 + 124) = *(_QWORD *)a3;
    LODWORD(v11) = *((_DWORD *)a3 + 2);
    *((_QWORD *)v10 + 17) = 0LL;
    *((_DWORD *)v10 + 36) = 0;
    *((_DWORD *)v10 + 33) = (_DWORD)v11;
    *((_BYTE *)v10 + 148) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(CSecondarySysmemBitmap *))(*(_QWORD *)v10 + 8LL))(v10);
    v12 = CSecondarySysmemBitmap::Initialize(v10);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Du, 0LL);
      (*(void (__fastcall **)(CSecondarySysmemBitmap *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x1Au, 0LL);
  }
  return v14;
}
