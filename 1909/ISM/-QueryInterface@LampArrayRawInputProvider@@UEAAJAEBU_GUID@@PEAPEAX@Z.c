/*
 * XREFs of ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D6B0
 * Callers:
 *     ?QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800386E0 (-QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800386F0 (-QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::QueryInterface(
        LampArrayRawInputProvider *this,
        const struct _GUID *a2,
        LampArrayRawInputProvider **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  LampArrayRawInputProvider *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v6 = (LampArrayRawInputProvider *)((char *)this + 16);
      if ( !this )
        v6 = 0LL;
      goto LABEL_13;
    }
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4;
    if ( !v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      v6 = this;
LABEL_13:
      *a3 = v6;
      return 0LL;
    }
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4;
    if ( !v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 6);
      if ( this )
        v6 = (LampArrayRawInputProvider *)((char *)this + 8);
      else
        v6 = 0LL;
      goto LABEL_13;
    }
    result = 2147500034LL;
    *a3 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80004003LL,
      v8);
    return 2147500035LL;
  }
  return result;
}
