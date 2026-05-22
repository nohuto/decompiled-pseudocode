/*
 * XREFs of ?OnDelete@?$SharedUnknownBase@UISIPCServer@@UIUnknown@@U2@U2@U2@U2@U2@U2@U2@U2@@@MEAAXXZ @ 0x1800D6110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::OnDelete(
        Microsoft::Bamo::BaseBamoConnection *a1)
{
  Microsoft::Bamo::BaseBamoConnection::Free(a1);
}
