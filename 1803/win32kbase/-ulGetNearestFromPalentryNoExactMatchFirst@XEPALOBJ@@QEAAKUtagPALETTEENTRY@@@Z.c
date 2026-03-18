/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C003E6E0
 * Callers:
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C003E258 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C003E520 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C009F6A4 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(XEPALOBJ *this, struct tagPALETTEENTRY a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  unsigned __int8 *v4; // rcx
  unsigned __int8 *v5; // r9
  unsigned __int8 *v6; // rdi
  unsigned __int8 *v7; // rbx
  unsigned int v8; // r11d
  unsigned __int8 *v9; // r12
  unsigned __int8 *v10; // r15
  unsigned int v11; // r10d

  v2 = *(_QWORD *)this;
  v3 = *(unsigned int *)(*(_QWORD *)this + 28LL);
  if ( !(_DWORD)v3 )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v4 = 0LL;
  if ( (struct PALETTE *)v2 == ppalDefault )
    v5 = (unsigned __int8 *)&aPalDefaultVGA;
  else
    v5 = *(unsigned __int8 **)(v2 + 112);
  v6 = &v5[4 * v3];
  v7 = v5;
  v8 = 196608;
  do
  {
    v9 = v4;
    v10 = v5;
    v11 = pArrayOfSquares[*v5 - a2.peRed] + pArrayOfSquares[v5[1] - a2.peGreen] + pArrayOfSquares[v5[2] - a2.peBlue];
    if ( v11 < v8 )
    {
      v4 = v5;
      if ( !v11 )
        break;
    }
    v5 += 4;
    v4 = v10;
    if ( v11 >= v8 )
    {
      v11 = v8;
      v4 = v9;
    }
    v8 = v11;
  }
  while ( v5 < v6 );
  return (v4 - v7) >> 2;
}
