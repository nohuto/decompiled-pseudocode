/*
 * XREFs of ?QueryInterface@TouchProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180103CC0
 * Callers:
 *     ?QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180103ED0 (-QueryInterface@TouchProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@TouchProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180103EE0 (-QueryInterface@TouchProcessor@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchProcessor::QueryInterface(TouchProcessor *this, const struct _GUID *a2, void **a3)
{
  void *v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    *a3 = 0LL;
    if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_00000000_0000_0000_c000_000000000046 )
    {
      v4 = (void *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      *a3 = v4;
      if ( v4 )
        (*(void (__fastcall **)(TouchProcessor *))(*(_QWORD *)this + 8LL))(this);
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
      (void *)0x50,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
