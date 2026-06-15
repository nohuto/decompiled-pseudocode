/*
 * XREFs of ?UpdateLatency@CCrossProcessBaseServerEndpoint@@UEAAJ_J@Z @ 0x14001B260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::UpdateLatency(CCrossProcessBaseServerEndpoint *this, __int64 a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 42);
  *((_QWORD *)this + 5) += a2;
  _InterlockedExchange64((volatile __int64 *)(v2 + 168), *((_QWORD *)this + 5));
  return 0LL;
}
