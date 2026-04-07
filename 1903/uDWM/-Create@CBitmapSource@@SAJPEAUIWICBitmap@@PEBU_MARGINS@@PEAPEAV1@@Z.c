/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000FC68
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18002246C (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180025AE0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x18007E4FC (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18000FD34 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJXZ @ 0x18000FE2C (-Initialize@CBitmapSource@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Create(struct IWICBitmap *a1, const struct _MARGINS *a2, struct CBitmapSource **a3)
{
  __int64 v5; // rax
  CBitmapSource *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-10h]

  v5 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         104LL);
  v6 = (CBitmapSource *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &CBitmapSource::`vftable';
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
    *(_DWORD *)(v5 + 80) = 0x80000000;
    *(_DWORD *)(v5 + 88) = 0x80000000;
    *(_DWORD *)(v5 + 84) = 0x80000000;
    *(_DWORD *)(v5 + 92) = 0x80000000;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CBitmapSource::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x88u, v11);
    }
    else
    {
      v9 = CBitmapSource::Update(v6, a1);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Au, v11);
      }
      else
      {
        *a3 = v6;
        v6 = 0LL;
      }
    }
    if ( v6 )
      CBaseObject::Release(v6);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x86u, v11);
  }
  return v8;
}
