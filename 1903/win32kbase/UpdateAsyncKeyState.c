/*
 * XREFs of UpdateAsyncKeyState @ 0x1C00403C0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C003FF50 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     ?ApplyKeyStateUpdate@@YAXE_N@Z @ 0x1C01884DC (-ApplyKeyStateUpdate@@YAXE_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0040490 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ApiSetEditionUpdateAsyncKeyStateThreads @ 0x1C0040514 (ApiSetEditionUpdateAsyncKeyStateThreads.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x1C00405B8 (ApiSetEditionPostUpdateKeyStateEvent.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned int a2, int a3)
{
  int v6; // r11d
  _BYTE *v7; // r10
  unsigned int v8; // r9d
  int v9; // edx
  int v10; // edx
  unsigned __int8 v12; // cf
  unsigned int v13; // eax

  ApiSetEditionPostUpdateKeyStateEvent();
  v6 = a2 & 3;
  v7 = (char *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)a2 >> 2);
  v8 = 2 * v6;
  v9 = (unsigned __int8)*v7;
  if ( a3 )
  {
    v10 = v9 & ~(1 << v8);
  }
  else
  {
    v12 = _bittest(&v9, v8);
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)a2 >> 3)) |= 1 << (a2 & 7);
    if ( !v12 )
    {
      v13 = 2 * v6 + 1;
      if ( _bittest(&v9, v13) )
        v9 &= ~(1 << v13);
      else
        v9 |= 1 << v13;
    }
    v10 = (unsigned __int8)v9 | (1 << v8);
  }
  *v7 = v10;
  ApiSetEditionUpdateAsyncKeyStateThreads(a1, a2);
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &Feature_InputVirtualizationDesktopSpecific__private_propertyCache,
           19155918LL,
           &unk_1C01D8A90,
           0LL,
           3);
}
