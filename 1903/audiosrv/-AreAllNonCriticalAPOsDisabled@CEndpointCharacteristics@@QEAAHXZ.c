/*
 * XREFs of ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1801160AC
 * Callers:
 *     ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x18011B028 (-UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(CEndpointCharacteristics *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    pvar = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v1 + 40LL))(
           v1,
           &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      LOBYTE(v2) = (_DWORD)v5 == 1;
    }
    PropVariantClear(&pvar);
  }
  return v2;
}
