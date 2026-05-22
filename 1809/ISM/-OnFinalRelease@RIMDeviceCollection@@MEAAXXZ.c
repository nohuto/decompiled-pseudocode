/*
 * XREFs of ?OnFinalRelease@RIMDeviceCollection@@MEAAXXZ @ 0x18005CF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RIMDeviceCollection::OnFinalRelease(RIMDeviceCollection *this)
{
  RIMDeviceCollection::Close(this);
}
