/*
 * XREFs of sub_180102C88 @ 0x180102C88
 * Callers:
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180102C88(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rsi
  _QWORD *v7; // r9
  unsigned __int64 v8; // rdx
  int v9; // r8d
  _QWORD *v10; // r11
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // r9
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r9
  int v19; // edx
  int v20; // eax
  unsigned __int16 v21; // ax
  unsigned __int64 i; // rcx
  unsigned __int16 v23; // ax
  int v24; // eax
  unsigned __int16 v25; // r10
  int v26; // ecx
  int v27; // eax
  unsigned __int16 v28; // cx
  int v29; // eax
  unsigned __int16 v30; // ax
  int v31; // eax
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]
  int v36; // [rsp+8h] [rbp-10h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (_QWORD *)(a1 + 272);
      v8 = *(_QWORD *)(a1 + 272);
      if ( v8 != a1 + 272 )
      {
        v9 = dword_1801627F8;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            result = 5LL;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_1801627F8 = v9;
          }
          v8 = *(_QWORD *)v8;
        }
        while ( (_QWORD *)v8 != v7 );
      }
      return result;
    }
    v6 = result - 24;
    if ( *(_QWORD *)(result + 24) <= a2 && *(_QWORD *)(result + 48) > a2 )
      break;
  }
  v10 = (_QWORD *)(result + 72);
  v11 = *(_QWORD **)(result + 72);
  v12 = 0LL;
  v13 = 0LL;
  while ( v11 != v10 )
  {
    v14 = v11 - 2;
    v15 = v11[2];
    v16 = v15 + v11[3];
    if ( v16 < a2 && v16 > v12 )
      v12 = v15 + v11[3];
    if ( v15 > a2 )
    {
      if ( v13 && v15 >= v13[4] )
        v14 = v13;
      v13 = v14;
    }
    v11 = (_QWORD *)*v11;
  }
  v17 = 0LL;
  v18 = 0LL;
  if ( !v12 )
    v12 = v6;
  if ( v12 < a2 )
  {
    v19 = *(_DWORD *)(a1 + 124);
    do
    {
      v18 = v12;
      if ( v19 )
      {
        v20 = *(_DWORD *)(v12 + 8);
        v19 = *(_DWORD *)(a1 + 124);
        LOWORD(v32) = v20;
        if ( (v19 & v20) != 0 )
          v32 = *(_DWORD *)(a1 + 136) ^ v20;
        v21 = v32;
      }
      else
      {
        v21 = *(_WORD *)(v12 + 8);
      }
      if ( !v21 )
        break;
      v12 += 16LL * v21;
    }
    while ( v12 < a2 );
  }
  for ( i = (unsigned __int64)(v13 - 2); i > a2; i += -16LL * v23 )
  {
    v17 = i;
    v23 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12);
    if ( !v23 )
      break;
  }
  qword_180162828 = v18;
  qword_180162830 = v17;
  if ( !v18 || !v17 )
    goto LABEL_74;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v24 = *(_DWORD *)(v18 + 8);
    LOWORD(v33) = v24;
    if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
      v33 = *(_DWORD *)(a1 + 136) ^ v24;
    v25 = v33;
  }
  else
  {
    v25 = *(_WORD *)(v18 + 8);
  }
  result = v18 + 16LL * v25;
  if ( result != v17 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v17 + 12)) )
  {
    dword_1801627F8 = 4;
  }
  else
  {
LABEL_74:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v26 = *(_DWORD *)(v18 + 8);
      v27 = *(_DWORD *)(a1 + 124);
      LOWORD(v34) = v26;
      if ( (v27 & v26) != 0 )
        v34 = *(_DWORD *)(a1 + 136) ^ v26;
      v28 = v34;
    }
    else
    {
      v28 = *(_WORD *)(v18 + 8);
      v27 = 0;
    }
    if ( v17 )
    {
      qword_180162838 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v17 + 12);
      v27 = *(_DWORD *)(a1 + 124);
    }
    if ( v18 )
    {
      if ( v27 )
      {
        v29 = *(_DWORD *)(v18 + 8);
        LOWORD(v35) = v29;
        if ( (v29 & *(_DWORD *)(a1 + 124)) != 0 )
          v35 = *(_DWORD *)(a1 + 136) ^ v29;
        v30 = v35;
      }
      else
      {
        v30 = *(_WORD *)(v18 + 8);
      }
      qword_180162840 = v30;
      v27 = *(_DWORD *)(a1 + 124);
    }
    if ( v27 )
    {
      v31 = *(_DWORD *)(v18 + 16LL * v28 + 8);
      LOWORD(v36) = v31;
      if ( (v31 & *(_DWORD *)(a1 + 124)) != 0 )
        v36 = *(_DWORD *)(a1 + 136) ^ v31;
      LOWORD(result) = v36;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v18 + 16LL * v28 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_180162838 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_180162840 != (result ^ *(unsigned __int16 *)(v18 + 16LL * v28 + 12)) )
        dword_1801627F8 = 7;
    }
    else
    {
      dword_1801627F8 = 6;
    }
  }
  return result;
}
