/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000EB68
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x180010CD8 (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077BDC (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18000EC38 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18000ED18 (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(
        struct IWICBitmap *a1,
        const struct _MARGINS *a2,
        struct IDwmChannel *a3,
        struct CBitmapSource **a4)
{
  __int64 v7; // rax
  CBitmapSource *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax

  v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v8 = (CBitmapSource *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = &CBitmapSource::`vftable';
    *(_DWORD *)(v7 + 80) = 0x80000000;
    *(_DWORD *)(v7 + 88) = 0x80000000;
    *(_DWORD *)(v7 + 84) = 0x80000000;
    *(_DWORD *)(v7 + 92) = 0x80000000;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = CBitmapSource::Initialize(v8, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Eu);
    }
    else
    {
      v11 = CBitmapSource::Update(v8, a1);
      v10 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x90u);
      }
      else
      {
        *a4 = v8;
        v8 = 0LL;
      }
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x8Cu);
  }
  return v10;
}
