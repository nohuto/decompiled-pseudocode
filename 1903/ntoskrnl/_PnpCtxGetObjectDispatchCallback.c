/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1405BC748
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405BBFB4 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1405BC67C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x140667090 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406D0420 (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140706928 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140937924 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140937B50 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140937C24 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140937CF4 (_PnpGetMappedPropertyLocalesDispatch.c)
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
