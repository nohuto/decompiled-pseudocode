/*
 * XREFs of _lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator() @ 0x1C00C5154
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___ @ 0x1C00C5090 (KRegKey--QueryValueBlob__lambda_f1f475d4aaff1d18d6eae9fe5eca1b95___.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C00C51C8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 */

__int64 __fastcall lambda_f1f475d4aaff1d18d6eae9fe5eca1b95_::operator()(void ***a1, const wchar_t *a2, int a3)
{
  struct Rtl::KString *v4; // rax
  struct Rtl::KString *v5; // rbx
  void **v6; // rdi
  void *v7; // rcx

  if ( !a3 || (a3 & 1) != 0 || *((_BYTE *)a2 + (unsigned int)(a3 - 1)) || *((_BYTE *)a2 + (unsigned int)(a3 - 2)) )
    return 3221225534LL;
  v4 = Rtl::KString::Initialize(a2);
  v5 = v4;
  if ( !v4 )
    return 3221225626LL;
  v6 = *a1;
  v7 = *v6;
  if ( v4 != *v6 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x7274534Bu);
    *v6 = v5;
  }
  return 0LL;
}
