/*
 * XREFs of NtGdiGetTextFaceW @ 0x1C00490B0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextFaceW @ 0x1C00491C0 (GreGetTextFaceW.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextFaceW(__int64 a1, int a2, char *a3, unsigned int a4)
{
  __int64 v7; // rax
  int v8; // edi
  BOOL v9; // r12d
  const void *v10; // rsi
  int TextFaceW; // eax
  size_t v12; // r8
  const void *v14; // [rsp+20h] [rbp-38h]

  v7 = a1;
  v8 = 0;
  v9 = 1;
  v10 = 0LL;
  v14 = 0LL;
  if ( a2 > 0 && a3 )
  {
    if ( (unsigned int)a2 <= 0x1388000 )
    {
      v10 = (const void *)AllocFreeTmpBuffer((unsigned int)(2 * a2));
      v14 = v10;
    }
    v9 = v10 != 0LL;
    v7 = a1;
  }
  if ( v9 )
  {
    TextFaceW = GreGetTextFaceW(v7, (unsigned int)a2, v10, a4, v14);
    v8 = TextFaceW;
    if ( TextFaceW > 0 && a3 )
    {
      if ( TextFaceW > a2 )
        v8 = 0;
      if ( v8 )
      {
        v12 = 2LL * v8;
        if ( (unsigned __int64)&a3[v12] > MmUserProbeAddress || &a3[v12] <= a3 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a3, v10, v12);
      }
    }
    if ( v10 )
      FreeTmpBuffer(v10);
  }
  return (unsigned int)v8;
}
