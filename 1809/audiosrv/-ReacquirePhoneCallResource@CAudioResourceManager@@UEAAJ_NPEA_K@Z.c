/*
 * XREFs of ?ReacquirePhoneCallResource@CAudioResourceManager@@UEAAJ_NPEA_K@Z @ 0x1800ECA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::ReacquirePhoneCallResource(
        CAudioResourceManager *this,
        unsigned __int8 a2,
        unsigned __int64 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64 *))(**((_QWORD **)this + 5) + 48LL))(
           *((_QWORD *)this + 5),
           a2,
           a3);
}
