/*
 * XREFs of ?Reset@CAPOWrapperClient@@UEAAJXZ @ 0x18013AC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperClient::Reset(CAPOWrapperClient *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  else
    return 2147500033LL;
}
