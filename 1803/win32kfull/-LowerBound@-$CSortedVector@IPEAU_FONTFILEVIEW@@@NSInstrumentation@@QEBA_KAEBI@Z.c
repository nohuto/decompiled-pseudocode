/*
 * XREFs of ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C00BEFE4
 * Callers:
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00BEE4C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00BEF3C (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(
        __int64 a1,
        unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r10
  unsigned int v8; // r11d
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
    v8 = *(_DWORD *)(v5 + 16 * v7);
    if ( v8 >= v6 )
      v2 >>= 1;
    else
      v2 += -1LL - (v2 >> 1);
    v9 = v7 + 1;
    if ( v8 >= v6 )
      v9 = v4;
    v4 = v9;
  }
  while ( v2 );
  return v9;
}
