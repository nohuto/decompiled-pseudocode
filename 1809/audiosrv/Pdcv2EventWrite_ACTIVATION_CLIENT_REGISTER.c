/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x1800511F0
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x180051304 (Pdcv2ActivationClientRegister.c)
 * Callees:
 *     McTemplateU0qqqqzr3 @ 0x18005124C (McTemplateU0qqqqzr3.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER(__int64 a1, int a2)
{
  int v2; // r10d
  const WCHAR *v3; // r8
  __int64 v4; // rax

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
    McTemplateU0qqqqzr3(a1, (unsigned int)"n", v2, a2);
  }
}
