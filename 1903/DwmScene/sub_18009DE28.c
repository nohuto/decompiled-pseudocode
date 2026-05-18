/*
 * XREFs of sub_18009DE28 @ 0x18009DE28
 * Callers:
 *     sub_180018730 @ 0x180018730 (sub_180018730.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_18003AE34 @ 0x18003AE34 (sub_18003AE34.c)
 * Callees:
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18009D918 @ 0x18009D918 (sub_18009D918.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 */

__int64 __fastcall sub_18009DE28(__int64 a1, _QWORD *a2, char a3)
{
  int **v6; // rcx
  int *v7; // rax
  int v8; // r11d
  int *v9; // rax
  int v10; // r10d
  int *v11; // rax
  int v12; // r9d
  int *v13; // rax
  int v14; // r8d
  int *v15; // rax
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  size_t v20; // [rsp+40h] [rbp-28h]
  __int128 v21; // [rsp+50h] [rbp-18h] BYREF

  sub_180064574(a1, 1, 0);
  sub_180064574(a1, 2, 0);
  sub_180064574(a1, 4, 0);
  v6 = *(int ***)(*a2 + 112LL);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  if ( v7 )
    v8 = v7[6];
  else
    LOBYTE(v8) = 0;
  if ( v6 )
    v9 = *v6;
  else
    v9 = 0LL;
  if ( v9 )
    v10 = v9[4];
  else
    LOBYTE(v10) = 0;
  if ( v6 )
    v11 = *v6;
  else
    v11 = 0LL;
  if ( v11 )
    v12 = v11[2];
  else
    v12 = 0;
  if ( v6 )
    v13 = *v6;
  else
    v13 = 0LL;
  if ( v13 )
    v14 = v13[1];
  else
    v14 = 0;
  if ( v6 )
    v15 = *v6;
  else
    v15 = 0LL;
  if ( v15 )
    v16 = *v15;
  else
    v16 = 0;
  LODWORD(v20) = 0;
  sub_18009DF60(a1, v16, v14, v12, v10, v8, a3, 0LL, v20, 0LL);
  v17 = a2[1];
  v21 = 0LL;
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a2[1];
  }
  v18 = *a2;
  *((_QWORD *)&v21 + 1) = v17;
  *(_QWORD *)&v21 = v18;
  return sub_18009D918(a1, &v21);
}
