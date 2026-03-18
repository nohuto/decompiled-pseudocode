/*
 * XREFs of UserGetClientRgn @ 0x1C01B2428
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00FE214 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0257BD8 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, __int64 a2, int a3)
{
  _OWORD *v3; // rsi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // r9d
  HRGN v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2);
  v6 = v5;
  if ( v5 )
  {
    if ( a3 )
      v7 = (4 * (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 31LL) & 4)) | 1;
    else
      v7 = 24;
    CalcVisRgn(&v9, v5, (struct tagWND *)v5, v7);
    *v3 = *(_OWORD *)(*(_QWORD *)(v6 + 40) + 104LL);
  }
  return v9;
}
