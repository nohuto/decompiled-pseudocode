/*
 * XREFs of sub_180050258 @ 0x180050258
 * Callers:
 *     sub_18004FF08 @ 0x18004FF08 (sub_18004FF08.c)
 * Callees:
 *     sub_180006FCC @ 0x180006FCC (sub_180006FCC.c)
 *     sub_180007424 @ 0x180007424 (sub_180007424.c)
 *     sub_18004E6DC @ 0x18004E6DC (sub_18004E6DC.c)
 *     sub_18004E7DC @ 0x18004E7DC (sub_18004E7DC.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

char __fastcall sub_180050258(__int64 a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // rcx
  const signed __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  const signed __int64 *v12; // r8
  const signed __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  const signed __int64 *v16; // r8
  const signed __int64 *v17; // rdx
  bool i; // zf
  unsigned __int64 v19; // rdx
  signed __int32 v21[14]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-A0h]
  const signed __int64 *v23; // [rsp+40h] [rbp-98h]
  unsigned __int64 v24; // [rsp+48h] [rbp-90h]
  unsigned __int64 v25; // [rsp+50h] [rbp-88h]
  unsigned __int64 v26; // [rsp+58h] [rbp-80h]
  const signed __int64 *v27; // [rsp+60h] [rbp-78h]
  __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v32; // [rsp+90h] [rbp-48h]
  __int64 v33; // [rsp+98h] [rbp-40h]
  int v34; // [rsp+F0h] [rbp+18h]

  v34 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v22 = v7;
  v8 = *(const signed __int64 **)(a1 + 8);
  v26 = v7;
  v27 = v8;
  v9 = a2 << 15;
  v24 = a2 << 15;
  v10 = 0x8000LL;
  if ( v7 - (a2 << 15) <= 0x8000 )
    v10 = v7 - (a2 << 15);
  v25 = v10;
  v32 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_22;
    v11 = v10 + v9 - 1;
    if ( v11 >= v7 )
    {
LABEL_13:
      LODWORD(v13) = 0;
      goto LABEL_19;
    }
    if ( v10 <= 1 )
    {
      if ( v10 != 1 )
        goto LABEL_13;
      LODWORD(v13) = !_bittest64(v8, v9);
    }
    else
    {
      v12 = &v8[v9 >> 6];
      v23 = v12;
      a4 = (unsigned __int64)&v8[v11 >> 6];
      if ( v12 == (const signed __int64 *)a4 )
      {
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << v9;
      }
      else
      {
        if ( ((-1LL << v9) & *v12) != 0 )
          goto LABEL_13;
        v23 = ++v12;
        while ( v12 != (const signed __int64 *)a4 )
        {
          if ( *v12 )
            goto LABEL_13;
          v23 = ++v12;
        }
        v14 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11;
      }
      LODWORD(v13) = (v14 & *v12) == 0;
    }
LABEL_19:
    v21[12] = (int)v13;
    if ( !(_DWORD)v13 )
      goto LABEL_20;
LABEL_22:
    a3 = 0;
    sub_18004E7DC(a1, 1uLL, (unsigned __int64)v31, a4);
    v28 = *(_QWORD *)(a1 + 32);
    if ( v28 == -1 )
      break;
    sub_18004E6DC((__int64)v31);
    sub_180007424((_QWORD *)(a1 + 32), &v28, 8LL, 0LL, dword_180163B6C);
    v13 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, a2) )
      goto LABEL_20;
    v7 = v22;
  }
  *(_QWORD *)(a1 + 32) = a2;
  sub_18004E6DC((__int64)v31);
  v34 = 1;
  LOBYTE(v13) = _bittest64(*(const signed __int64 **)a1, a2);
  if ( !(_BYTE)v13 )
    goto LABEL_20;
  v15 = v10 + v9 - 1;
  if ( v15 >= v22 )
    goto LABEL_20;
  if ( v10 <= 1 )
  {
    if ( v10 != 1 )
      goto LABEL_20;
    if ( !_bittest64(v8, v9) )
    {
LABEL_34:
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, a2);
      v30 = *(_QWORD *)(a1 + 8) + (a2 << 12);
      v29 = 4096LL;
      LOBYTE(v13) = ZwFreeVirtualMemory(-1LL, &v30, &v29, 0x4000LL);
      goto LABEL_20;
    }
    LOBYTE(v13) = 0;
LABEL_33:
    if ( !(_BYTE)v13 )
      goto LABEL_20;
    goto LABEL_34;
  }
  v16 = &v8[v9 >> 6];
  v17 = &v8[v15 >> 6];
  if ( v16 == v17 )
  {
    v19 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << v9;
LABEL_32:
    LOBYTE(v13) = (v19 & *v16) == 0;
    goto LABEL_33;
  }
  v13 = (const signed __int64 *)(-1LL << v9);
  for ( i = ((-1LL << v9) & *v16) == 0; i; i = *v16 == 0 )
  {
    if ( ++v16 == v17 )
    {
      v19 = 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v15;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( v34 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v21, 0);
    LOBYTE(v13) = sub_180006FCC(a1 + 32, 1);
  }
  return (char)v13;
}
