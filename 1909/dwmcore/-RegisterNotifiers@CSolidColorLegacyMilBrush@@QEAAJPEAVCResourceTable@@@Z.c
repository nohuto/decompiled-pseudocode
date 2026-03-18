/*
 * XREFs of ?RegisterNotifiers@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@@Z @ 0x1800ABCF8
 * Callers:
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x1800AA9F0 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SOLIDCOLORLEGAC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall CSolidColorLegacyMilBrush::RegisterNotifiers(struct CResource **this, struct CResourceTable *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v3 = CResource::RegisterNotifier((CResource *)this, this[9]);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x661u, 0LL);
  }
  else
  {
    v6 = CResource::RegisterNotifier((CResource *)this, this[10]);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x662u, 0LL);
    }
    else
    {
      v8 = CResource::RegisterNotifier((CResource *)this, this[8]);
      v5 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x663u, 0LL);
    }
  }
  return v5;
}
