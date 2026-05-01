/*
 * XREFs of ?GetAt@CGITCallbackArray@@EEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180077550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGITCallbackArray::GetAt(
        CGITCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // rcx

  *a4 = 0LL;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 3) )
    return 2147942487LL;
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v4 + 24LL))(v4, a3, a4);
}
