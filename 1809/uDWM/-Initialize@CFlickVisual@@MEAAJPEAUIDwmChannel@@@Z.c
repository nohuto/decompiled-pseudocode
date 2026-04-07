/*
 * XREFs of ?Initialize@CFlickVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A1D0
 * Callers:
 *     ??$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z @ 0x180090C58 (--$CreateTouchVisual@VCFlickVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCFlickVisual@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFlickVisual::Initialize(struct CImage **this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int inserted; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CImage::Create(a2, this + 41);
    v5 = v6;
    if ( v6 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), this[41], 0LL, 0, 1);
      v5 = inserted;
      if ( inserted >= 0 )
      {
        this[44] = 0LL;
        this[40] = 0LL;
        *((_DWORD *)this + 87) = 1061158912;
        *((_DWORD *)this + 86) = 20;
        *((_BYTE *)this + 280) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x27u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x26u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x23u);
  }
  return v5;
}
