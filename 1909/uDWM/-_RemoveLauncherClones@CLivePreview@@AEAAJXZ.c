/*
 * XREFs of ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18007C8EC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_RemoveLauncherClones(CLivePreview *this)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  struct CVisual *v7; // rdx
  int v8; // eax
  CBaseObject *v9; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 82) - 1;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = 40LL * v2;
    do
    {
      v6 = *((_QWORD *)this + 38);
      if ( *(_DWORD *)(*(_QWORD *)(v6 + v5) + 112LL) == 6 )
      {
        v7 = *(struct CVisual **)(v6 + v5 + 8);
        if ( v7 )
        {
          v8 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v7 + 3) + 32LL), v7);
          v1 = v8;
          if ( v8 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x7D6u);
            return v1;
          }
          v9 = *(CBaseObject **)(*((_QWORD *)this + 38) + v5 + 8);
          if ( v9 )
          {
            CBaseObject::Release(v9);
            *(_QWORD *)(*((_QWORD *)this + 38) + v5 + 8) = 0LL;
          }
        }
      }
      v5 -= 40LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return v1;
}
