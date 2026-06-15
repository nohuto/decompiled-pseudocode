/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER @ 0x180134A5C
 * Callers:
 *     Pdcv2ActivationClientUnregister @ 0x18013396C (Pdcv2ActivationClientUnregister.c)
 * Callees:
 *     McTemplateU0qqqqzr3 @ 0x18005124C (McTemplateU0qqqqzr3.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_UNREGISTER(__int64 a1, int a2)
{
  int v2; // r10d
  const WCHAR *v3; // r8
  __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-28h]

  v2 = -1;
  v3 = &word_18015F720;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    v3 = (const WCHAR *)(a1 + 92);
  }
  if ( (byte_1801B30DA & 0x20) != 0 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    McTemplateU0qqqqzr3(a1, (__int64)"r", v2, a2, v5, v4, (__int64)v3);
  }
}
