/*
 * XREFs of ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0249934
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     MNDrawEdge @ 0x1C024A474 (MNDrawEdge.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall DrawOutline(HDC a1, int a2, int a3, int a4, int a5, int a6, HBRUSH a7)
{
  _DWORD v7[4]; // [rsp+30h] [rbp-31h] BYREF
  HBRUSH v8; // [rsp+40h] [rbp-21h]
  int v9; // [rsp+48h] [rbp-19h]
  int v10; // [rsp+4Ch] [rbp-15h]
  int v11; // [rsp+50h] [rbp-11h]
  int v12; // [rsp+54h] [rbp-Dh]
  HBRUSH v13; // [rsp+58h] [rbp-9h]
  int v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+64h] [rbp+3h]
  int v16; // [rsp+68h] [rbp+7h]
  int v17; // [rsp+6Ch] [rbp+Bh]
  HBRUSH v18; // [rsp+70h] [rbp+Fh]
  int v19; // [rsp+78h] [rbp+17h]
  int v20; // [rsp+7Ch] [rbp+1Bh]
  int v21; // [rsp+80h] [rbp+1Fh]
  int v22; // [rsp+84h] [rbp+23h]
  HBRUSH v23; // [rsp+88h] [rbp+27h]

  v7[1] = a3;
  v10 = a3;
  v15 = a3;
  v7[0] = a2;
  v20 = a5 + a3 - a6;
  v9 = a2;
  v11 = a4;
  v19 = a2;
  v21 = a4;
  v7[2] = a6;
  v7[3] = a5;
  v8 = a7;
  v12 = a6;
  v13 = a7;
  v14 = a4 + a2 - a6;
  v16 = a6;
  v17 = a5;
  v18 = a7;
  v22 = a6;
  v23 = a7;
  GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v7, 4);
}
