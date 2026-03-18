/*
 * XREFs of ?LowerBound@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEBA_KAEBQEAX@Z @ 0x1C02AE548
 * Callers:
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02AE32C (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02AE448 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<void *,void *>::LowerBound(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int64 v9; // r11
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 48);
  v7 = *a2;
  do
  {
    v8 = (v2 >> 1) + v5;
    v9 = *(_QWORD *)(v6 + 16 * v8);
    if ( v9 >= v7 )
      v2 >>= 1;
    else
      v2 += -1LL - (v2 >> 1);
    v10 = v8 + 1;
    if ( v9 >= v7 )
      v10 = v5;
    v5 = v10;
  }
  while ( v2 );
  return v10;
}
