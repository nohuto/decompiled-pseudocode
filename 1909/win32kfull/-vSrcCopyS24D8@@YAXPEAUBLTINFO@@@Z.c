/*
 * XREFs of ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02C2440
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C014FC64 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02B7A20 (-XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z.c)
 */

void __fastcall vSrcCopyS24D8(struct BLTINFO *a1)
{
  unsigned int v1; // ebp
  struct BLTINFO *v2; // r14
  int v3; // esi
  char *v4; // r13
  unsigned __int8 *v5; // rbx
  struct _XLATEOBJ *v6; // rcx
  unsigned int v7; // edi
  int v8; // ebp
  unsigned int v9; // edi
  char *v10; // r12
  unsigned __int8 *v11; // r15
  unsigned int v12; // r13d
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  unsigned __int8 v16; // al
  int v17; // esi
  unsigned __int8 *v18; // r15
  int v19; // [rsp+20h] [rbp-78h]
  int v20; // [rsp+24h] [rbp-74h]
  struct _XLATEOBJ *v21; // [rsp+28h] [rbp-70h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-68h]
  unsigned __int8 *v23; // [rsp+38h] [rbp-60h]
  char *v24; // [rsp+40h] [rbp-58h]
  unsigned int v26; // [rsp+A8h] [rbp+10h]
  int v27; // [rsp+B0h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = a1;
  v3 = v1;
  v4 = (char *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v27 = *((_DWORD *)a1 + 8);
  v24 = v4;
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v6 = *(struct _XLATEOBJ **)a1;
  v23 = v5;
  if ( (-(int)v4 & 3u) <= v1 )
    v3 = -(int)v4 & 3;
  v21 = v6;
  v20 = v3;
  v7 = v1 - v3;
  v8 = (v1 - v3) & 3;
  v9 = v7 >> 2;
  v26 = v9;
  v19 = v8;
  Xlate555 = XLATEOBJ_pGetXlate555(v6);
  if ( Xlate555 )
  {
    while ( 1 )
    {
      v10 = v4;
      v11 = v5;
      if ( v3 )
      {
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v11 += 3;
          ++v10;
          --v3;
        }
        while ( v3 );
        v2 = a1;
        v9 = v26;
      }
      if ( v9 )
      {
        v12 = v9;
        do
        {
          v13 = (unsigned __int8)XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, v11[2] | ((v11[1] | (*v11 << 8)) << 8));
          v14 = (unsigned __int8)XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, v11[5] | ((v11[4] | (v11[3] << 8)) << 8));
          v15 = (unsigned __int8)XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, v11[8] | ((v11[7] | (v11[6] << 8)) << 8));
          v16 = XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, v11[11] | ((v11[10] | (v11[9] << 8)) << 8));
          v11 += 12;
          *(_DWORD *)v10 = v13 | ((v14 | ((v15 | (v16 << 8)) << 8)) << 8);
          v10 += 4;
          --v12;
        }
        while ( v12 );
        v2 = a1;
        v8 = v19;
        v4 = v24;
        v5 = v23;
        v9 = v26;
      }
      v17 = v8;
      if ( v8 )
      {
        v18 = v11 + 2;
        do
        {
          *v10 = XLATEOBJ_RGB32ToPalSurf(v21, Xlate555, *v18 | ((*(v18 - 1) | (*(v18 - 2) << 8)) << 8));
          v18 += 3;
          ++v10;
          --v17;
        }
        while ( v17 );
        v5 = v23;
        v9 = v26;
      }
      if ( !--v27 )
        break;
      v3 = v20;
      v5 += *((int *)v2 + 10);
      v4 += *((int *)v2 + 11);
      v23 = v5;
      v24 = v4;
    }
  }
}
