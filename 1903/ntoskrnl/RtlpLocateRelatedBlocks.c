/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x14031A5D0
 * Callers:
 *     RtlpHpHeapHandleError @ 0x14031A540 (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rsi
  unsigned __int64 *v7; // r8
  unsigned __int64 i; // rdx
  _QWORD *v9; // r11
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v22; // ax
  int v23; // ecx
  unsigned __int16 v24; // r10
  int v25; // eax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  int v28; // [rsp+8h] [rbp-48h]
  int v29; // [rsp+18h] [rbp-38h]
  int v30; // [rsp+28h] [rbp-28h]
  int v31; // [rsp+38h] [rbp-18h]
  int v32; // [rsp+48h] [rbp-8h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      for ( i = *v7; (unsigned __int64 *)i != v7; i = *(_QWORD *)i )
      {
        if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
          dword_14042AA28 = 5;
      }
      return result;
    }
    v6 = (_QWORD *)(result - 24);
    if ( *(_QWORD *)(result + 24) <= a2 && *(_QWORD *)(result + 48) > a2 )
      break;
  }
  v9 = (_QWORD *)(result + 72);
  v10 = *(_QWORD **)(result + 72);
  v11 = 0LL;
  v12 = 0LL;
  while ( v10 != v9 )
  {
    v13 = v10 - 2;
    v14 = v10[2];
    v15 = v14 + v10[3];
    if ( v15 < a2 && v15 > v11 )
      v11 = v14 + v10[3];
    if ( v14 > a2 )
    {
      if ( v12 && v14 >= v12[4] )
        v13 = v12;
      v12 = v13;
    }
    v10 = (_QWORD *)*v10;
  }
  v16 = 0LL;
  v17 = 0LL;
  if ( !v11 )
    v11 = (unsigned __int64)v6;
  if ( v11 < a2 )
  {
    v18 = *(_DWORD *)(a1 + 124);
    do
    {
      v17 = v11;
      if ( v18 )
      {
        v19 = *(_DWORD *)(v11 + 8);
        v18 = *(_DWORD *)(a1 + 124);
        LOWORD(v28) = v19;
        if ( (v18 & v19) != 0 )
          v28 = *(_DWORD *)(a1 + 136) ^ v19;
        v20 = v28;
      }
      else
      {
        v20 = *(_WORD *)(v11 + 8);
      }
      if ( !v20 )
        break;
      v11 += 16LL * v20;
    }
    while ( v11 < a2 );
  }
  for ( j = (unsigned __int64)(v12 - 2); j > a2; j += -16LL * v22 )
  {
    v16 = j;
    v22 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v22 )
      break;
  }
  qword_14042AA58 = v17;
  qword_14042AA60 = v16;
  if ( !v17 || !v16 )
    goto LABEL_71;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(v17 + 8);
    LOWORD(v29) = v23;
    if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
      v29 = *(_DWORD *)(a1 + 136) ^ v23;
    v24 = v29;
  }
  else
  {
    v24 = *(_WORD *)(v17 + 8);
  }
  result = v17 + 16LL * v24;
  if ( result != v16 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12)) )
  {
    dword_14042AA28 = 4;
  }
  else
  {
LABEL_71:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = *(_DWORD *)(v17 + 8);
      v25 = *(_DWORD *)(a1 + 124);
      if ( (v25 & v30) != 0 )
        v30 ^= *(_DWORD *)(a1 + 136);
      v26 = v30;
    }
    else
    {
      v26 = *(_WORD *)(v17 + 8);
      v25 = 0;
    }
    if ( v16 )
    {
      qword_14042AA68 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12);
      v25 = *(_DWORD *)(a1 + 124);
    }
    if ( v17 )
    {
      if ( v25 )
      {
        v31 = *(_DWORD *)(v17 + 8);
        if ( (*(_DWORD *)(a1 + 124) & v31) != 0 )
          v31 ^= *(_DWORD *)(a1 + 136);
        v27 = v31;
      }
      else
      {
        v27 = *(_WORD *)(v17 + 8);
      }
      qword_14042AA70 = v27;
      v25 = *(_DWORD *)(a1 + 124);
    }
    if ( v25 )
    {
      v32 = *(_DWORD *)(v17 + 16LL * v26 + 8);
      if ( (*(_DWORD *)(a1 + 124) & v32) != 0 )
        v32 ^= *(_DWORD *)(a1 + 136);
      LOWORD(result) = v32;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v17 + 16LL * v26 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_14042AA68 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_14042AA70 != (result ^ *(unsigned __int16 *)(v17 + 16LL * v26 + 12)) )
        dword_14042AA28 = 7;
    }
    else
    {
      dword_14042AA28 = 6;
    }
  }
  return result;
}
