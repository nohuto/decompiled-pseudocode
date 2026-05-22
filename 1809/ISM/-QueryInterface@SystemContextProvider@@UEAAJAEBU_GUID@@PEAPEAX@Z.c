/*
 * XREFs of ?QueryInterface@SystemContextProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EA60
 * Callers:
 *     ?QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009E960 (-QueryInterface@SystemContextProvider@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemContextProvider::QueryInterface(
        SystemContextProvider *this,
        const struct _GUID *a2,
        void **a3)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(SystemContextProvider *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
      return 0LL;
    }
    else
    {
      return 2147500034LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\systemcontextprovider.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
