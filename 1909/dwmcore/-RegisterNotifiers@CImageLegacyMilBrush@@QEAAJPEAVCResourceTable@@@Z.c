/*
 * XREFs of ?RegisterNotifiers@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800ACEA8
 * Callers:
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x1800ACD20 (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IMAGELEGACYMILBRUSH@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CImageLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx

  v3 = CResource::RegisterNotifier((CResource *)this, this[17]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x395u, 0LL);
  }
  else
  {
    v6 = CResource::RegisterNotifier((CResource *)this, this[18]);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x396u, 0LL);
    }
    else
    {
      v8 = CResource::RegisterNotifier(
             (CResource *)this,
             (struct CResource *)(((unsigned __int64)this[30] + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this[30] >> 64)));
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x397u, 0LL);
      }
      else
      {
        v10 = CResource::RegisterNotifier((CResource *)this, this[16]);
        v5 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x398u, 0LL);
        }
        else
        {
          v12 = CResource::RegisterNotifier((CResource *)this, this[22]);
          v5 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x399u, 0LL);
          }
          else
          {
            v14 = CResource::RegisterNotifier((CResource *)this, this[25]);
            v5 = v14;
            if ( v14 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x39Au, 0LL);
          }
        }
      }
    }
  }
  return v5;
}
