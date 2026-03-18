/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x1405BCB28
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405BC394 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x1405BCA5C (_PnpGetMappedPropertyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1406944B0 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1406CF690 (_PnpGetObjectListDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x140708708 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x140937394 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1409375C0 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140937694 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140937764 (_PnpGetMappedPropertyLocalesDispatch.c)
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
