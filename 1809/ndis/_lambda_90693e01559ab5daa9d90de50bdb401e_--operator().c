/*
 * XREFs of _lambda_90693e01559ab5daa9d90de50bdb401e_::operator() @ 0x1C010431C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C0104168 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C00C51C8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

__int64 __fastcall lambda_90693e01559ab5daa9d90de50bdb401e_::operator()(__int64 *a1, wchar_t *a2, unsigned int a3)
{
  unsigned __int64 v4; // rbx
  struct Rtl::KString *v5; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  struct Rtl::KString *v9; // rcx

  v4 = a3;
  v5 = Rtl::KString::Initialize(a2);
  if ( !v5 )
    return 3221225626LL;
  v7 = *a1;
  if ( v4 >= *(unsigned int *)(v7 + 4) )
    __fastfail(5u);
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(struct Rtl::KString **)(v8 + 8 * v4);
  if ( v5 != v9 )
  {
    if ( v9 )
      ExFreePoolWithTag(v9, 0x7274534Bu);
    *(_QWORD *)(v8 + 8 * v4) = v5;
  }
  return 0LL;
}
