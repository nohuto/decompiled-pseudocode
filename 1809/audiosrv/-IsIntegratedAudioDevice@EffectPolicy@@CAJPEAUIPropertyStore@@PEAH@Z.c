/*
 * XREFs of ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x180112128
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180111D90 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EffectPolicy::IsIntegratedAudioDevice(struct IPropertyStore *a1, int *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v11 = -1LL;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    pvar = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IPropertyStore *, const DEVPROPKEY *, PROPVARIANT *))a1->lpVtbl->GetValue)(
           a1,
           &DEVPKEY_Device_ContainerId,
           &pvar);
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( (_WORD)pvar == 72 )
      {
        v6 = *v8 - v10;
        if ( *v8 == v10 )
          v6 = v8[1] - v11;
        if ( !v6 )
          *a2 = 1;
      }
      PropVariantClear(&pvar);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        164LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)(unsigned int)v4);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      159LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
