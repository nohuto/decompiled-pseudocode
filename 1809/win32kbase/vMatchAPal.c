/*
 * XREFs of vMatchAPal @ 0x1C00F8690
 * Callers:
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00FF2A0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall vMatchAPal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // rbx
  unsigned int v7; // ecx
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // ebp
  int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r12
  __int64 v17; // r13
  int v18; // eax
  int v19; // ebx
  signed __int32 v20; // eax
  __int64 v21; // rcx
  signed __int32 v22; // eax
  signed __int32 v23; // eax
  __int64 v24; // rcx
  signed __int32 v25; // eax
  __int64 v26; // rax
  int v27; // eax
  _DWORD *result; // rax
  int v29; // [rsp+48h] [rbp+10h]
  int v30; // [rsp+48h] [rbp+10h]
  int v31; // [rsp+50h] [rbp+18h]

  v5 = *(_DWORD *)(a2 + 24);
  v6 = a4;
  if ( (v5 & 0x1000) != 0 )
  {
    v7 = 1;
  }
  else if ( (v5 & 0x10000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v8 = *(_DWORD **)(a3 + 72);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = 0;
  v11 = 0;
  if ( v7 < 256 - v7 )
  {
    v12 = 4LL * v7;
    v13 = 256 - v7 - v7;
    do
    {
      v14 = *(_QWORD *)(a2 + 112);
      v29 = *(_DWORD *)(v12 + v14);
      HIBYTE(v29) &= 0xDEu;
      *(_DWORD *)(v12 + v14) = v29;
      v12 += 4LL;
      --v13;
    }
    while ( v13 );
  }
  v15 = 0LL;
  if ( *(_DWORD *)(a3 + 28) )
  {
    do
    {
      if ( !v9 || *(_BYTE *)(v15 + v9 + 4) != *((_BYTE *)v8 + v15 + 4) )
        ++v11;
      v16 = *((unsigned __int8 *)v8 + v15 + 4);
      v17 = *(_QWORD *)(a2 + 112);
      v18 = *(_DWORD *)(v17 + 4 * v16);
      v30 = v18;
      if ( (v18 & 0x20000000) == 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v15);
        v31 = v19;
        if ( (v19 & 0x2000000) == 0
          && ((_WORD)v19 != (_WORD)v18 || BYTE2(v19) != BYTE2(v18) || ((HIBYTE(v19) ^ HIBYTE(v18)) & 1) != 0) )
        {
          HIBYTE(v31) = HIBYTE(v19) & 1;
          ++v10;
          HIBYTE(v18) = HIBYTE(v19) & 1;
          v30 = v31;
        }
        HIBYTE(v30) = HIBYTE(v18) | 0x30;
        *(_DWORD *)(v17 + 4 * v16) = v30;
      }
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(a3 + 28) );
    v6 = a4;
  }
  v20 = _InterlockedExchangeAdd((volatile signed __int32 *)&ulXlatePalUnique, 1u);
  v21 = *(_QWORD *)(a2 + 120);
  v22 = v20 + 1;
  *(_DWORD *)(a2 + 32) = v22;
  if ( v21 != a2 )
    *(_DWORD *)(v21 + 32) = v22;
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)&ulXlatePalUnique, 1u);
  v24 = *(_QWORD *)(a3 + 120);
  v25 = v23 + 1;
  *(_DWORD *)(a3 + 32) = v25;
  if ( v24 != a3 )
    *(_DWORD *)(v24 + 32) = v25;
  v26 = *(_QWORD *)(a2 + 120);
  if ( v26 == a2 )
    v27 = *(_DWORD *)(a2 + 32);
  else
    v27 = *(_DWORD *)(v26 + 32);
  *v8 = v27;
  result = a5;
  *v6 = v10;
  *a5 = v11;
  return result;
}
