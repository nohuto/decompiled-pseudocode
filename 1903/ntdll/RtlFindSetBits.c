/*
 * XREFs of RtlFindSetBits @ 0x18008B200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // r9
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rdx
  signed __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  bool v22; // cc
  unsigned int v23; // r10d
  int v25; // ecx
  _QWORD *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // r11d
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // r11d
  __int64 v34; // rax
  unsigned __int64 v35; // r11
  __int64 v36; // rax
  int v37; // ecx
  char v38; // r9
  _QWORD *v39; // rcx
  unsigned int v40; // r9d
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r9d
  __int64 v44; // [rsp+0h] [rbp-58h]
  __int64 v45; // [rsp+8h] [rbp-50h]

  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  v8 = *(_QWORD *)(a1 + 8);
  v45 = v8;
  v9 = v8 & 4;
  v44 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v10 + v6;
    v13 = v8 - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < a2 )
    {
LABEL_31:
      v21 = -1;
      goto LABEL_75;
    }
    v14 = v11 - a2 + 1;
    v15 = (1LL << (v12 & 0x3F)) - 1;
    v16 = v13 + 8 * ((unsigned __int64)v14 >> 6);
    v17 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v12 >> 6));
    v18 = ~*v17 | v15;
    if ( a2 > 0x7F )
    {
      v35 = v16 + 8;
      if ( (v14 & 0x3F) == 0 )
        v35 = v13 + 8 * ((unsigned __int64)(v11 - a2 + 1) >> 6);
      if ( !v18 )
      {
        v37 = 0;
        goto LABEL_52;
      }
      if ( *++v17 != -1LL )
        goto LABEL_68;
      v27 = !_BitScanReverse64((unsigned __int64 *)&v36, v18);
      if ( !v27 )
      {
        v37 = 63 - v36;
        goto LABEL_52;
      }
LABEL_67:
      v37 = 64;
LABEL_52:
      while ( 1 )
      {
        v21 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) - v37;
        if ( v21 > v14 )
          goto LABEL_31;
        v38 = a2 - v37;
        v39 = &v17[(unsigned __int64)(a2 - v37) >> 6];
        while ( ++v17 != v39 )
        {
          if ( *v17 != -1LL )
            goto LABEL_68;
        }
        v40 = v38 & 0x3F;
        if ( !v40 )
          goto LABEL_10;
        v27 = !_BitScanForward64((unsigned __int64 *)&v41, ~*v17);
        if ( v27 )
          LODWORD(v41) = 64;
        if ( (unsigned int)v41 >= v40 )
          goto LABEL_10;
        do
        {
LABEL_68:
          if ( (unsigned __int64)v17 > v35 )
            goto LABEL_31;
          ++v17;
        }
        while ( *v17 != -1LL );
        v27 = !_BitScanReverse64((unsigned __int64 *)&v42, ~*(v17 - 1));
        if ( v27 )
          goto LABEL_67;
        v37 = 63 - v42;
      }
    }
    v19 = 64;
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v18 < 0 )
          {
            if ( (unsigned __int64)++v17 > v16 )
              goto LABEL_31;
            v18 = ~*v17;
          }
          v27 = !_BitScanReverse64((unsigned __int64 *)&v32, v18);
          if ( !v27 )
            v19 = 63 - v32;
          v21 = (((unsigned int)(((__int64)v17 - v13) >> 3) + 1) << 6) - v19;
          if ( v21 > v14 )
            goto LABEL_31;
          v33 = a2 - v19;
          if ( a2 == v19 )
            goto LABEL_10;
          ++v17;
          v19 = 64;
          v18 = ~*v17;
          if ( v33 >= 0x40 )
            break;
LABEL_42:
          v27 = !_BitScanForward64((unsigned __int64 *)&v34, v18);
          if ( v27 )
            LODWORD(v34) = 64;
          if ( (unsigned int)v34 >= v33 )
            goto LABEL_10;
        }
        if ( *v17 == -1LL )
        {
          v33 -= 64;
          if ( !v33 )
            goto LABEL_10;
          v18 = ~*++v17;
          goto LABEL_42;
        }
      }
    }
    if ( a2 > 1 )
    {
      v25 = 0;
      v26 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v11 >> 6));
      while ( v18 != -1 )
      {
LABEL_19:
        v27 = !_BitScanForward64((unsigned __int64 *)&v28, v18);
        if ( v27 )
          LODWORD(v28) = 64;
        if ( v25 + (int)v28 >= a2 )
        {
          LODWORD(v30) = -v25;
LABEL_30:
          v21 = ((unsigned int)(((__int64)v17 - v13) >> 3) << 6) + v30;
          v22 = v21 <= v14;
          goto LABEL_9;
        }
        v29 = a2;
        v30 = ~v18;
        while ( 1 )
        {
          v30 &= v30 >> (v29 >> 1);
          if ( !v30 )
            break;
          v29 -= v29 >> 1;
          if ( v29 <= 1 )
          {
            _BitScanForward64(&v30, v30);
            goto LABEL_30;
          }
        }
        if ( v17 == v26 )
          goto LABEL_31;
        v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v18);
        if ( v27 )
          v25 = 64;
        else
          v25 = 63 - v31;
        v18 = ~*++v17;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v17 > v16 )
          goto LABEL_31;
        v18 = ~*v17;
        if ( *v17 )
        {
          v25 = 0;
          goto LABEL_19;
        }
      }
    }
    while ( v18 == -1 )
    {
      if ( (unsigned __int64)++v17 > v16 )
        goto LABEL_31;
      v18 = ~*v17;
    }
    _BitScanForward64(&v20, ~v18);
    v21 = v20 + ((unsigned int)(((__int64)v17 - v13) >> 3) << 6);
    v22 = v21 <= v14;
LABEL_9:
    if ( !v22 )
      goto LABEL_31;
LABEL_10:
    if ( v21 != -1 )
      break;
LABEL_75:
    if ( !v6 )
      break;
    v9 = v44;
    v43 = a2 + a3;
    v8 = v45;
    if ( a2 + a3 > v3 )
      v43 = v3;
    v7 = v43 - 1;
    v6 = 0;
  }
  v23 = v21 - v10;
  if ( v21 == -1 )
    return (unsigned int)-1;
  return v23;
}
