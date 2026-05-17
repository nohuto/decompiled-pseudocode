/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D7090
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpFilterSacl @ 0x1800E63C4 (RtlpFilterSacl.c)
 */

__int64 __fastcall RtlQuerySecurityObject(__int64 a1, __int16 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v6; // ecx
  char v8; // si
  unsigned int v9; // r13d
  unsigned int v10; // r8d
  unsigned __int16 *v11; // rbp
  __int64 v12; // rbx
  unsigned __int8 *v13; // r15
  unsigned int v14; // r12d
  unsigned __int8 *v15; // rsi
  unsigned int v16; // ecx
  char *v17; // rsi
  __int16 v18; // dx
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // eax
  __int16 v22; // ax
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-68h]
  int v27; // [rsp+24h] [rbp-64h]
  int v28; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Src; // [rsp+30h] [rbp-58h]
  unsigned int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v30 = 0;
  v6 = 0;
  v26 = 0;
  LODWORD(Size) = 0;
  v28 = a2 & 2;
  v8 = a2;
  Src = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v13 = *(unsigned __int8 **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_8;
      v13 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 8));
    }
    if ( v13 )
      v26 = (4 * v13[1] + 11) & 0xFFFFFFFC;
  }
LABEL_8:
  v27 = a2 & 4;
  if ( (a2 & 4) != 0 && (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v11 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      v11 = (unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 16));
    }
    if ( v11 )
      v9 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v14 = a2 & 0x1F8;
  if ( (a2 & 0x1F8) != 0 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v12 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_24;
      v12 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v30, a2 & 0x1F8);
      v10 = v30;
      v6 = Size;
      a4 = v33;
    }
  }
LABEL_24:
  v31 = v8 & 1;
  if ( (v8 & 1) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v15 = *(unsigned __int8 **)(a1 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 4) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v15 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 4));
    }
    Src = v15;
    if ( v15 )
    {
      v6 = (4 * v15[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v16 = v9 + v6 + v10 + v26 + 20;
  *a5 = v16;
  if ( v16 > a4 || !a3 )
    return 3221225507LL;
  v17 = (char *)(a3 + 20);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  *(_BYTE *)a3 = 1;
  v18 = *(_WORD *)(a3 + 2) | 0x8000;
  *(_WORD *)(a3 + 2) = v18;
  if ( v14 )
  {
    v19 = v18;
    if ( v10 )
    {
      RtlpFilterSacl(v12, a3 + 20, &v30, v14);
      *(_DWORD *)(a3 + 12) = 20;
      v17 += v30;
      v19 = *(_WORD *)(a3 + 2);
    }
    v18 = v19 | *(_WORD *)(a1 + 2) & 0x2830;
    *(_WORD *)(a3 + 2) = v18;
  }
  if ( v27 )
  {
    v20 = v18;
    if ( v9 )
    {
      memmove(v17, v11, v9);
      v21 = (int)v17;
      v17 += v9;
      *(_DWORD *)(a3 + 16) = v21 - a3;
      v20 = *(_WORD *)(a3 + 2);
    }
    v18 = v20 | *(_WORD *)(a1 + 2) & 0x140C;
    *(_WORD *)(a3 + 2) = v18;
  }
  if ( v31 )
  {
    v22 = v18;
    if ( (_DWORD)Size )
    {
      v23 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      v24 = (int)v17;
      v17 += v23;
      *(_DWORD *)(a3 + 4) = v24 - a3;
      v22 = *(_WORD *)(a3 + 2);
    }
    v18 = v22 | *(_WORD *)(a1 + 2) & 1;
    *(_WORD *)(a3 + 2) = v18;
  }
  if ( v28 )
  {
    if ( v26 )
    {
      memmove(v17, v13, v26);
      v18 = *(_WORD *)(a3 + 2);
      *(_DWORD *)(a3 + 8) = (_DWORD)v17 - a3;
    }
    *(_WORD *)(a3 + 2) = v18 | *(_WORD *)(a1 + 2) & 2;
  }
  return 0LL;
}
