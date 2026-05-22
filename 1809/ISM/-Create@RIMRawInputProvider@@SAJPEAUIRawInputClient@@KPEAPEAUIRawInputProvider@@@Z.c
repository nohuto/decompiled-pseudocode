/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18005C190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18005BDF4 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18005C284 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rbx
  RIMRawInputProvider *v7; // rax
  RIMRawInputProvider *v8; // rbx
  RIMRawInputProvider *v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = 0LL;
  if ( !a1 || !a3 )
  {
    v10 = -2147024809;
    v11 = 57LL;
    goto LABEL_14;
  }
  v7 = (RIMRawInputProvider *)malloc(0xE0uLL);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, 0xE0uLL);
  if ( v8 )
    v9 = RIMRawInputProvider::RIMRawInputProvider(v8, a1);
  else
    v9 = 0LL;
  v6 = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    v11 = 64LL;
LABEL_14:
    v13 = v10;
    goto LABEL_15;
  }
  v12 = RIMRawInputProvider::Initialize(v9, a2);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v6 = 0LL;
    *a3 = v9;
    v10 = 0;
    goto LABEL_16;
  }
  v13 = (unsigned int)v12;
  v11 = 67LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimrawinputprovider.cpp",
    (const char *)v13);
LABEL_16:
  if ( v6 )
    (*(void (__fastcall **)(RIMRawInputProvider *))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
