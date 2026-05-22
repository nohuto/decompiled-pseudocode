/*
 * XREFs of ?QueryInterface@LampArrayRawInputProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070990
 * Callers:
 *     ?QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071440 (-QueryInterface@LampArrayRawInputProvider@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180071470 (-QueryInterface@LampArrayRawInputProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::QueryInterface(
        LampArrayRawInputProvider *this,
        const struct _GUID *a2,
        LampArrayRawInputProvider **a3)
{
  unsigned __int64 v5; // rcx
  LampArrayRawInputProvider *v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    v5 = (unsigned __int64)this + 16;
LABEL_12:
    v6 = (LampArrayRawInputProvider *)(v5 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    goto LABEL_13;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8.Data4 )
  {
    v6 = this;
LABEL_13:
    _InterlockedIncrement((volatile signed __int32 *)this + 6);
    *a3 = v6;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    v5 = (unsigned __int64)this + 8;
    goto LABEL_12;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
