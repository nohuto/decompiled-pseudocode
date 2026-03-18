/*
 * XREFs of ?RegisterNotifiers@CVisualCapture@@QEAAJPEAVCResourceTable@@@Z @ 0x1802127EC
 * Callers:
 *     ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z @ 0x1802125EC (-ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALCAPTURE@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualCapture::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v3 = CResource::RegisterNotifier((CResource *)this, this[49]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x758u, 0LL);
  }
  else
  {
    v6 = CResource::RegisterNotifier((CResource *)this, this[50]);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x759u, 0LL);
    }
    else
    {
      v8 = CResource::RegisterNotifier((CResource *)this, this[51]);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x75Au, 0LL);
    }
  }
  return v5;
}
