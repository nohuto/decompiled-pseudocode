/*
 * XREFs of sub_180020F00 @ 0x180020F00
 * Callers:
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 *     sub_1800DA634 @ 0x1800DA634 (sub_1800DA634.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_18001F450 @ 0x18001F450 (sub_18001F450.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_180020F00(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  _DWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  unsigned int v11; // edx
  __int64 result; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // r8
  unsigned int v15; // r10d
  unsigned int *v16; // r8
  unsigned int v17; // r11d
  unsigned int v18; // r9d
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  _QWORD *v23; // [rsp+70h] [rbp+40h] BYREF
  __int64 v24; // [rsp+78h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (__int64 *)(a1 + 112);
  v4 = sub_18001C4DC(*(_QWORD *)(v1 + 48), 1, 0xCu, (_DWORD *)(a1 + 112), &v22);
  v5 = v22;
  if ( v4 < 0 )
    v5 = 0LL;
  v6 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v22 = v5;
  *(_QWORD *)(a1 + 104) = v5;
  if ( !v6 )
    return 0LL;
  RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v21);
  v7 = sub_18001F450(*(_QWORD *)(v1 + 48));
  if ( !v7 || *v7 < 0x94u )
    goto LABEL_10;
  v8 = v21;
  if ( (*(_WORD *)(v21 + 94) & 0x4000) != 0 && (v7[36] & 0x100) != 0 )
  {
    v9 = (_QWORD *)*((_QWORD *)v7 + 14);
    *(_QWORD *)(a1 + 152) = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 144) = *v9;
LABEL_10:
      v8 = v21;
    }
  }
  v10 = *(_QWORD **)(a1 + 104);
  if ( !v10 )
  {
    v15 = *(_DWORD *)(v8 + 144);
    v16 = (unsigned int *)(*(unsigned __int16 *)(v8 + 20) + v8 + 24);
    v10 = 0LL;
    if ( v15 )
    {
      v17 = *(unsigned __int16 *)(v8 + 6);
      v18 = 0;
      if ( *(_WORD *)(v8 + 6) )
      {
        while ( 1 )
        {
          v19 = v16[3];
          if ( v15 >= v19 && v15 < v19 + v16[4] )
            break;
          ++v18;
          v16 += 10;
          if ( v18 >= v17 )
          {
            v10 = 0LL;
            goto LABEL_12;
          }
        }
        v10 = (_QWORD *)(*(_QWORD *)(v1 + 48) + v19);
        *(_QWORD *)(a1 + 104) = v10;
        v20 = v16[2];
        *v2 = v20;
        if ( !v20 )
          *v2 = v16[4];
      }
    }
  }
LABEL_12:
  v11 = 0;
  if ( v10 && *v2 )
  {
    v24 = *v2;
    v23 = v10;
    result = ZwProtectVirtualMemory(-1LL, &v23, &v24, 4LL, a1 + 136);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    v13 = v23;
    v14 = (unsigned __int64)v23 + v24;
    do
    {
      *v13 = *v13;
      v13 += 512;
    }
    while ( (unsigned __int64)v13 < v14 );
  }
  return v11;
}
