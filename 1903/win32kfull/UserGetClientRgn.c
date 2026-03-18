/*
 * XREFs of UserGetClientRgn @ 0x1C01EA238
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C003E860 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02839B4 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

HRGN __fastcall UserGetClientRgn(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // rsi
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // r9d
  HRGN v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = (_OWORD *)a2;
  LOBYTE(a2) = 1;
  v5 = a3;
  v6 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v7 = v6;
  if ( v6 )
  {
    if ( v5 )
      v8 = (4 * (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 4)) | 1;
    else
      v8 = 24;
    CalcVisRgn(&v10, v6, (struct tagWND *)v6, v8);
    *v4 = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 104LL);
  }
  return v10;
}
