/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x1800210A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180014F60 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x180015FE8 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180020B84 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMRawInputProvider::Create(struct IRawInputClient *a1, __int16 a2, struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rbx
  RIMRawInputProvider *v7; // rax
  RIMRawInputProvider *v8; // rax
  struct IRawInputProvider *v9; // rsi
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v11 = -2147024809;
    v14 = 61LL;
    goto LABEL_14;
  }
  v7 = (RIMRawInputProvider *)RefCountedObject::operator new(0xE8uLL);
  if ( !v7 )
  {
    v6 = 0LL;
    goto LABEL_12;
  }
  v8 = RIMRawInputProvider::RIMRawInputProvider(v7, a1);
  v9 = v8;
  v6 = v8;
  if ( !v8 )
  {
LABEL_12:
    v11 = -2147024882;
    v14 = 68LL;
LABEL_14:
    v13 = v11;
    goto LABEL_15;
  }
  v10 = RIMRawInputProvider::Initialize(v8, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v6 = 0LL;
    *a3 = v9;
    v11 = 0;
    goto LABEL_7;
  }
  v13 = (unsigned int)v10;
  v14 = 71LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)v13);
LABEL_7:
  if ( v6 )
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)v6 + 16LL))(v6);
  return v11;
}
