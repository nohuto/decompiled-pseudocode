/*
 * XREFs of ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x1800A1770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcEndpoint::ShareBuffer(SipcEndpoint *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), a2);
}
