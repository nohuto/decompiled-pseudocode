/*
 * XREFs of ?GetEndpointId@CAudioStream@@UEAAPEBGXZ @ 0x180046D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioStream::GetEndpointId(CAudioStream *this)
{
  return (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 72LL))(*((_QWORD *)this + 6));
}
