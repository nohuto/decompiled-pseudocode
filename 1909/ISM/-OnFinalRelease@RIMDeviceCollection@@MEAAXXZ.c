/*
 * XREFs of ?OnFinalRelease@RIMDeviceCollection@@MEAAXXZ @ 0x1800998D0
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
