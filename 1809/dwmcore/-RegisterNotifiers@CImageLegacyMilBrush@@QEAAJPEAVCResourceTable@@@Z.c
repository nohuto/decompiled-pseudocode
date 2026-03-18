/*
 * XREFs of ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x180073854
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x180073674 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx

  v3 = CResource::RegisterNotifier((CResource *)this, this[17]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x4A1u);
  }
  else
  {
    v6 = CResource::RegisterNotifier((CResource *)this, this[18]);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4A2u);
    }
    else
    {
      v8 = CResource::RegisterNotifier(
             (CResource *)this,
             (struct CResource *)(((unsigned __int64)this[31] + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this[31] >> 64)));
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x4A3u);
      }
      else
      {
        v10 = CResource::RegisterNotifier((CResource *)this, this[16]);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x4A4u);
        }
        else
        {
          v12 = CResource::RegisterNotifier((CResource *)this, this[22]);
          v5 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x4A5u);
          }
          else
          {
            v14 = CResource::RegisterNotifier((CResource *)this, this[25]);
            v5 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x4A6u);
          }
        }
      }
    }
  }
  return v5;
}
