/*
 * XREFs of ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023360
 * Callers:
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001FBE4 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 * Callees:
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180021460 (-Initialize@CAtlasedRectsVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D08 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002343C (-Create@CAtlasButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800258D8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CButton::Initialize(CButton *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CAtlasedImage **v7; // r14
  int v8; // eax
  int inserted; // eax
  int v10; // eax
  CAtlasedImage *v11; // rcx
  struct _MARGINS v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = CAtlasedRectsVisual::Initialize((CBaseObject **)this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2Cu);
  }
  else
  {
    v6 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 36);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Eu);
    }
    else
    {
      v7 = (struct CAtlasedImage **)((char *)this + 296);
      v8 = CAtlasButton::Create(a2, (struct CAtlasButton **)this + 37);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2Fu);
      }
      else
      {
        inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v7, *((_DWORD *)this + 66));
        v5 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x33u);
        }
        else
        {
          v10 = CAtlasedRectsVisual::InsertAtlasImageAtIndex(
                  this,
                  *((struct CAtlasedImage **)this + 36),
                  *((_DWORD *)this + 66));
          v5 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x34u);
          }
          else
          {
            v11 = *v7;
            *(_QWORD *)&v13.cxLeftWidth = 0LL;
            *(_QWORD *)&v13.cyTopHeight = 0LL;
            CAtlasedImage::SetInsetFromParent(v11, &v13);
          }
        }
      }
    }
  }
  return v5;
}
