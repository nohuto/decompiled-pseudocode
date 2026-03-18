/*
 * XREFs of ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x18001E674
 * Callers:
 *     ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x18001E55C (-ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualCapture::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx

  v3 = CResource::RegisterNotifier((CResource *)this, this[50]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xCE2u);
  }
  else
  {
    v6 = CResource::RegisterNotifier((CResource *)this, this[51]);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCE3u);
    }
    else
    {
      v8 = CResource::RegisterNotifier((CResource *)this, this[52]);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCE4u);
    }
  }
  return v5;
}
