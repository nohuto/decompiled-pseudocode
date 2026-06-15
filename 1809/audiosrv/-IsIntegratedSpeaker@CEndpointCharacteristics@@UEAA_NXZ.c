/*
 * XREFs of ?IsIntegratedSpeaker@CEndpointCharacteristics@@UEAA_NXZ @ 0x18010C2E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEndpointCharacteristics::IsIntegratedSpeaker(CEndpointCharacteristics *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-50h] BYREF
  LPCOLESTR lpsz; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h]
  PROPVARIANT v9; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+40h] [rbp-30h]
  __int64 v11; // [rsp+48h] [rbp-28h]
  GUID iid; // [rsp+50h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 8589) )
  {
    *((_BYTE *)this + 8588) = 0;
    v2 = *((_QWORD *)this + 5);
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    pvar = 0LL;
    lpsz = 0LL;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
           v2,
           &PKEY_Device_ContainerId,
           &v9) >= 0 )
    {
      *(_QWORD *)iid.Data4 = -1LL;
      *(_QWORD *)&iid.Data1 = 0LL;
      if ( (_WORD)v9 == 72 )
      {
        v3 = -*v10;
        if ( !*v10 )
          v3 = *(_QWORD *)iid.Data4 - v10[1];
        if ( !v3
          && (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
               *((_QWORD *)this + 5),
               &PKEY_AudioEndpoint_JackSubType,
               &pvar) >= 0
          && (_WORD)pvar == 31
          && IIDFromString(lpsz, &iid) >= 0 )
        {
          v4 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1;
          if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data1 )
            v4 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21ce1_f70f_11d0_b917_00a0c9223196.Data4;
          if ( !v4 )
            *((_BYTE *)this + 8588) = 1;
        }
      }
    }
    *((_BYTE *)this + 8589) = 1;
    PropVariantClear(&pvar);
    PropVariantClear(&v9);
  }
  return *((_BYTE *)this + 8588);
}
