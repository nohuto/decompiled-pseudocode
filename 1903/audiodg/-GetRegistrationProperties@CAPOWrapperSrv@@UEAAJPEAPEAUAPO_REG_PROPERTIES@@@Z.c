/*
 * XREFs of ?GetRegistrationProperties@CAPOWrapperSrv@@UEAAJPEAPEAUAPO_REG_PROPERTIES@@@Z @ 0x140042940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::GetRegistrationProperties(CAPOWrapperSrv *this, struct APO_REG_PROPERTIES **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, struct APO_REG_PROPERTIES **))(*(_QWORD *)v2 + 40LL))(v2, a2);
  else
    return 2147500033LL;
}
