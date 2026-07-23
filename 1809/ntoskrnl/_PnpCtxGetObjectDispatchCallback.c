/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x14059B400
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x14059820C (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x14059B324 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14059E2BC (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x1406E6BF8 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1406F3B40 (_PnpValidateObjectNameDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1408FAF58 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1408FB1B0 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1408FB284 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1408FB354 (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
