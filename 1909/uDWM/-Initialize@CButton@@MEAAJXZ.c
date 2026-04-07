/*
 * XREFs of ?Initialize@CButton@@MEAAJXZ @ 0x1800250C0
 * Callers:
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18002686C (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18001309C (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180025188 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x1800251F0 (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJXZ @ 0x180025590 (-Initialize@CAtlasedRectsVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CButton::Initialize(CButton *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  struct CAtlasedImage **v5; // rsi
  int v6; // eax
  int inserted; // eax
  int v8; // eax
  CAtlasedImage *v9; // rcx
  void *v11; // [rsp+28h] [rbp-20h]
  struct _MARGINS v12; // [rsp+30h] [rbp-18h] BYREF

  v2 = CAtlasedRectsVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2Du, v11);
  }
  else
  {
    v4 = CAtlasButton::Create((struct CAtlasButton **)this + 36);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2Fu, v11);
    }
    else
    {
      v5 = (struct CAtlasedImage **)((char *)this + 296);
      v6 = CAtlasButton::Create((struct CAtlasButton **)this + 37);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x30u, v11);
      }
      else
      {
        inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v5, *((_DWORD *)this + 66));
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x34u, v11);
        }
        else
        {
          v8 = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                 this,
                 *((struct CAtlasedImage **)this + 36),
                 *((_DWORD *)this + 66));
          v3 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x35u, v11);
          }
          else
          {
            v9 = *v5;
            *(_QWORD *)&v12.cxLeftWidth = 0LL;
            *(_QWORD *)&v12.cyTopHeight = 0LL;
            CAtlasedImage::SetInsetFromParent(v9, &v12);
          }
        }
      }
    }
  }
  return v3;
}
