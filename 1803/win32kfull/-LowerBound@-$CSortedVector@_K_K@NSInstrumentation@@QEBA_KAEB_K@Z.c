/*
 * XREFs of ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x1C00BE748
 * Callers:
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00BE7B8 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00BE8C0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C01201F8 (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(
        __int64 a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    return 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *a2;
  do
  {
    v7 = (v2 >> 1) + v4;
    v8 = *(_QWORD *)(v5 + 16 * v7);
    if ( v8 < v6 )
      v2 += -1LL - (v2 >> 1);
    else
      v2 >>= 1;
    v9 = v7 + 1;
    if ( v8 >= v6 )
      v9 = v4;
    v4 = v9;
  }
  while ( v2 );
  return v9;
}
