/*
 * XREFs of ?_EnsureResources@CLivePreview@@AEAAJXZ @ 0x18004A59C
 * Callers:
 *     ?Initialize@CLivePreview@@MEAAJXZ @ 0x18004A520 (-Initialize@CLivePreview@@MEAAJXZ.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18000EF30 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800179E4 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800253D8 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLivePreview::_EnsureResources(CLivePreview *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void *v10; // [rsp+28h] [rbp-10h]

  v2 = CResource::Create(
         0xAu,
         *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
         (__int64 *)this + 59);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x654u, v10);
  }
  else
  {
    v4 = CResource::Create(
           0xAu,
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           (__int64 *)this + 60);
    v3 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x655u, v10);
    }
    else
    {
      v5 = CVisual::Create((struct CVisual **)this + 63);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x657u, v10);
      }
      else
      {
        v6 = CVisual::Create((struct CVisual **)this + 64);
        v3 = v6;
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x658u, v10);
        }
        else
        {
          v7 = CVisual::Create((struct CVisual **)this + 65);
          v3 = v7;
          if ( v7 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x659u, v10);
          }
          else
          {
            v8 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 66);
            v3 = v8;
            if ( v8 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x65Au, v10);
          }
        }
      }
    }
  }
  return v3;
}
