/*
 * XREFs of ?RegisterSystemContextObserver@InputConfigContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180029CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z @ 0x180029D60 (-RegisterSystemContextObserver@SystemContextProvider@@UEAAJPEAUISystemContextObserver@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputConfigContextProvider::RegisterSystemContextObserver(
        InputConfigContextProvider *this,
        struct ISystemContextObserver *a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // edi
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  memset(v10, 0, 24);
  v4 = SystemContextProvider::RegisterSystemContextObserver(this, a2);
  if ( v4 < 0 )
  {
    v7 = 71LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v5 = (*(__int64 (__fastcall **)(InputConfigContextProvider *, _BYTE *))(*(_QWORD *)this + 40LL))(this, v10);
  v4 = v5;
  if ( v5 < 0 )
  {
    if ( v5 == -2147023728 )
      v4 = 0;
    goto LABEL_5;
  }
  v8 = (*(__int64 (__fastcall **)(struct ISystemContextObserver *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v10);
  v9 = v8;
  if ( v8 >= 0 )
  {
LABEL_5:
    if ( v4 >= 0 )
      return 0LL;
    v7 = 85LL;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
