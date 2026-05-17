/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x18010568C
 * Callers:
 *     RtlpHpHeapHandleError @ 0x180103FC0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
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
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned __int16 v29; // dx
  __int64 v30; // rdx
  int v31; // eax
  unsigned __int16 v32; // ax
  int v33; // eax
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]
  int v36; // [rsp+8h] [rbp-10h]
  int v37; // [rsp+8h] [rbp-10h]
  int v38; // [rsp+8h] [rbp-10h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (_QWORD *)(a1 + 272);
      v8 = *(_QWORD *)(a1 + 272);
      if ( v8 != a1 + 272 )
      {
        v9 = dword_180162808;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            result = 5LL;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_180162808 = v9;
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
        LOWORD(v34) = v20;
        if ( (v19 & v20) != 0 )
          v34 = *(_DWORD *)(a1 + 136) ^ v20;
        v21 = v34;
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
  qword_180162838 = v18;
  qword_180162840 = v17;
  if ( !v18 || !v17 )
    goto LABEL_49;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v24 = *(_DWORD *)(v18 + 8);
    LOWORD(v35) = v24;
    if ( (v24 & *(_DWORD *)(a1 + 124)) != 0 )
      v35 = *(_DWORD *)(a1 + 136) ^ v24;
    v25 = v35;
  }
  else
  {
    v25 = *(_WORD *)(v18 + 8);
  }
  result = v18 + 16LL * v25;
  if ( result != v17 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v17 + 12)) )
  {
    dword_180162808 = 4;
  }
  else
  {
LABEL_49:
    v26 = *(_DWORD *)(a1 + 124);
    if ( v26 )
    {
      v27 = *(_DWORD *)(v18 + 8);
      v28 = *(_DWORD *)(a1 + 124);
      LOWORD(v36) = v27;
      if ( (v28 & v27) != 0 )
        v36 = *(_DWORD *)(a1 + 136) ^ v27;
      v29 = v36;
      v26 = *(_DWORD *)(a1 + 124);
    }
    else
    {
      v29 = *(_WORD *)(v18 + 8);
      v28 = 0;
    }
    v30 = 2LL * v29;
    if ( v17 )
    {
      qword_180162848 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v17 + 12);
      v28 = *(_DWORD *)(a1 + 124);
      v26 = v28;
    }
    if ( v18 )
    {
      if ( v28 )
      {
        v31 = *(_DWORD *)(v18 + 8);
        LOWORD(v37) = v31;
        if ( (v31 & *(_DWORD *)(a1 + 124)) != 0 )
          v37 = *(_DWORD *)(a1 + 136) ^ v31;
        v32 = v37;
      }
      else
      {
        v32 = *(_WORD *)(v18 + 8);
      }
      qword_180162850 = v32;
      v26 = *(_DWORD *)(a1 + 124);
    }
    if ( v26 )
    {
      v33 = *(_DWORD *)(v18 + 8 * v30 + 8);
      LOWORD(v38) = v33;
      if ( (v33 & *(_DWORD *)(a1 + 124)) != 0 )
        v38 = *(_DWORD *)(a1 + 136) ^ v33;
      LOWORD(result) = v38;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v18 + 8 * v30 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_180162848 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_180162850 != (result ^ *(unsigned __int16 *)(v18 + 8 * v30 + 12)) )
        dword_180162808 = 7;
    }
    else
    {
      dword_180162808 = 6;
    }
  }
  return result;
}
