/*
 * XREFs of ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x1C02B5748
 * Callers:
 *     GreRealizePalette @ 0x1C0121EBC (GreRealizePalette.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00EF6D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z @ 0x1C02B55F4 (-ColorMatch@@YAKVXEPALOBJ@@T_PAL_ULONG@@PEAK@Z.c)
 */

_DWORD *__fastcall ptransMatchAPal(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, _DWORD *a6)
{
  int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  _DWORD *result; // rax
  _DWORD *v14; // r13
  signed __int32 v15; // ecx
  signed __int32 v16; // ecx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // eax
  char v22; // r15
  unsigned int v23; // eax
  char v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  signed __int32 v27; // ecx
  __int64 v28; // rax
  signed __int32 v29; // ecx
  int v30; // r9d
  int v31; // [rsp+20h] [rbp-20h]
  unsigned int i; // [rsp+24h] [rbp-1Ch]
  _DWORD *v33; // [rsp+30h] [rbp-10h]
  __int64 v34; // [rsp+38h] [rbp-8h]
  int v35; // [rsp+80h] [rbp+40h]
  int v36; // [rsp+80h] [rbp+40h]
  int v37; // [rsp+80h] [rbp+40h]
  __int64 v38; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v39; // [rsp+90h] [rbp+50h] BYREF

  v38 = a2;
  v33 = (_DWORD *)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = a2;
  if ( (v8 & 0x1000) != 0 )
  {
    v10 = 1;
  }
  else if ( (v8 & 0x10000) != 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v31 = 0;
  v11 = v10;
  v12 = 256 - v10;
  result = PALLOCMEM2((unsigned int)(*(_DWORD *)(a3 + 28) + 7), 1818316871LL, 0);
  v14 = result;
  if ( result )
  {
    if ( a4 )
    {
      v15 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v9 = v38;
      v16 = v15 + 1;
      *(_DWORD *)(v38 + 32) = v16;
      v17 = *(_QWORD *)(v9 + 120);
      if ( v17 != v9 )
        *(_DWORD *)(v17 + 32) = v16;
      v39 = v10;
      if ( v10 < v12 )
      {
        v18 = 4LL * v10;
        v19 = v12 - v10;
        v39 = 256 - v10;
        do
        {
          v20 = *(_QWORD *)(v9 + 112);
          v35 = *(_DWORD *)(v18 + v20);
          HIBYTE(v35) &= 0xCEu;
          *(_DWORD *)(v18 + v20) = v35;
          v18 += 4LL;
          --v19;
        }
        while ( v19 );
      }
    }
    v21 = 0;
    v22 = 48;
    for ( i = 0; v21 < *(_DWORD *)(a3 + 28); i = v21 )
    {
      v34 = v21;
      v36 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v21);
      v23 = ColorMatch(v9, v36, &v39);
      v24 = v23;
      if ( v39 )
      {
        if ( v11 || (*v33 & 0x10000) != 0 )
        {
          while ( 1 )
          {
            v39 = v11;
            if ( v11 < v12 )
              break;
LABEL_23:
            if ( (v22 & 0x10) == 0 )
            {
              v11 = 0;
              goto LABEL_27;
            }
            v22 &= ~0x10u;
            v11 = v10;
          }
          v26 = *(_QWORD *)(v9 + 112);
          while ( ((unsigned __int8)v22 & *(_BYTE *)(v26 + 4LL * v11 + 3)) != 0 )
          {
            v39 = ++v11;
            if ( v11 >= v12 )
              goto LABEL_23;
          }
          HIBYTE(v36) |= 0x30u;
          v24 = v11;
          ++v31;
          *(_DWORD *)(v26 + 4LL * v11) = v36;
        }
      }
      else if ( (v36 & 0x2000000) == 0 )
      {
        v25 = *(_QWORD *)(v9 + 112);
        v37 = *(_DWORD *)(v25 + 4LL * v23);
        HIBYTE(v37) |= 0x30u;
        *(_DWORD *)(v25 + 4LL * v23) = v37;
      }
LABEL_27:
      *((_BYTE *)v14 + v34 + 4) = v24;
      v21 = i + 1;
    }
    v27 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
    v28 = *(_QWORD *)(a3 + 120);
    v29 = v27 + 1;
    *(_DWORD *)(a3 + 32) = v29;
    if ( v28 != a3 )
      *(_DWORD *)(v28 + 32) = v29;
    *v14 = XEPALOBJ::ulTime((XEPALOBJ *)&v38);
    *a5 = v31;
    *a6 = v30;
    return v14;
  }
  return result;
}
