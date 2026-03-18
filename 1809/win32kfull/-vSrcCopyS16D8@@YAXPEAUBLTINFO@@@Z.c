/*
 * XREFs of ?vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02ABE40
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C0145774 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D8(struct BLTINFO *a1)
{
  unsigned __int8 (__fastcall *v1)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int); // r12
  unsigned int v2; // ebp
  struct BLTINFO *v3; // rsi
  _BYTE *v4; // r13
  struct _XLATEOBJ *v5; // rdi
  unsigned __int16 *v6; // rbx
  int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // ebp
  ULONG v11; // edx
  _BYTE *v12; // r15
  unsigned __int16 *v13; // r14
  int v14; // ebx
  unsigned int v15; // ebp
  int v16; // ebx
  int v17; // edi
  int v18; // ebx
  unsigned __int8 v19; // al
  int v20; // esi
  unsigned int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+24h] [rbp-64h]
  unsigned __int16 *v23; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Xlate555; // [rsp+30h] [rbp-58h]
  struct _XLATEOBJ *v25; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A0h] [rbp+18h]

  v1 = XLATEOBJ_ulIndexToPalSurf;
  v2 = *((_DWORD *)a1 + 7);
  v3 = a1;
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v5 = *(struct _XLATEOBJ **)a1;
  v27 = *((_DWORD *)a1 + 8);
  v25 = *(struct _XLATEOBJ **)a1;
  v6 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v23 = v6;
  v7 = v2;
  if ( (-(int)v4 & 3u) <= v2 )
    v7 = -(int)v4 & 3;
  v8 = v2 - v7;
  v28 = v7;
  v9 = v8 >> 2;
  v10 = v8 & 3;
  v21 = v9;
  v22 = v10;
  Xlate555 = XLATEOBJ_pGetXlate555(v5);
  if ( Xlate555 )
  {
    v11 = v5[1].pulXlate[6];
    if ( (v11 & 0x200000) != 0 )
    {
      v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int))XLATEOBJ_RGB16_555ToPalSurf;
    }
    else if ( (v11 & 0x400000) != 0 )
    {
      v1 = (unsigned __int8 (__fastcall *)(struct _XLATEOBJ *, const unsigned __int8 *, unsigned int))XLATEOBJ_RGB16_565ToPalSurf;
    }
    while ( 1 )
    {
      v12 = v4;
      v13 = v6;
      if ( v28 )
      {
        v14 = v28;
        do
        {
          *v12++ = v1(v5, Xlate555, *v13++);
          --v14;
        }
        while ( v14 );
        v3 = a1;
        v6 = v23;
      }
      if ( v21 )
      {
        v15 = v21;
        do
        {
          v16 = v1(v5, Xlate555, v13[3]) << 8;
          v17 = (v16 | v1(v5, Xlate555, v13[2])) << 8;
          v18 = v17 | v1(v25, Xlate555, v13[1]);
          v5 = v25;
          v19 = v1(v25, Xlate555, *v13);
          v13 += 4;
          *(_DWORD *)v12 = (v18 << 8) | v19;
          v12 += 4;
          --v15;
        }
        while ( v15 );
        v3 = a1;
        v10 = v22;
        v6 = v23;
      }
      if ( v10 )
      {
        v20 = v10;
        do
        {
          *v12++ = v1(v5, Xlate555, *v13++);
          --v20;
        }
        while ( v20 );
        v3 = a1;
        v6 = v23;
      }
      if ( !--v27 )
        break;
      v6 = (unsigned __int16 *)((char *)v6 + *((int *)v3 + 10));
      v4 += *((int *)v3 + 11);
      v23 = v6;
    }
  }
}
