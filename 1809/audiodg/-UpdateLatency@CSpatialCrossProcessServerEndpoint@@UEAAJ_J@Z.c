/*
 * XREFs of ?UpdateLatency@CSpatialCrossProcessServerEndpoint@@UEAAJ_J@Z @ 0x14001B520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::UpdateLatency(
        CSpatialCrossProcessServerEndpoint *this,
        __int64 a2)
{
  *((_QWORD *)this + 17) += a2;
  return 0LL;
}
