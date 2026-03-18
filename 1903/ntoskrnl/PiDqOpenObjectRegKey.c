/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140666F54
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1405B7424 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqPropertyCallback @ 0x1405BB290 (PiDqPropertyCallback.c)
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x14071DE78 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140864E20 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408650AC (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x1405BBEC0 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x140667C28 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v8; // r8d

  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7);
  if ( a1 != 1 )
    return 3221225485LL;
  v8 = a4;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v8, a4, a6, (__int64)a7);
}
