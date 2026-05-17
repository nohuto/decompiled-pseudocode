/*
 * XREFs of sub_180047844 @ 0x180047844
 * Callers:
 *     sub_180047490 @ 0x180047490 (sub_180047490.c)
 *     sub_18004E828 @ 0x18004E828 (sub_18004E828.c)
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 * Callees:
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_180047C74 @ 0x180047C74 (sub_180047C74.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010B3D4 @ 0x18010B3D4 (sub_18010B3D4.c)
 *     sub_18010B474 @ 0x18010B474 (sub_18010B474.c)
 */

__int64 __fastcall sub_180047844(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 v8; // r14
  int v9; // r12d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdi
  _WORD *v13; // r15
  void *v14; // rax
  size_t v15; // rdi
  int v16; // r13d
  __int64 v17; // rcx
  bool v18; // cf
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // edi
  int v24; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  __int16 v27; // [rsp+28h] [rbp-58h]
  void *v28; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  size_t Size; // [rsp+48h] [rbp-38h]
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  void *v33; // [rsp+58h] [rbp-28h]
  __int128 v34; // [rsp+60h] [rbp-20h] BYREF
  __int128 v35; // [rsp+70h] [rbp-10h] BYREF
  char v36; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+48h]

  v37 = a2;
  v30 = 0LL;
  v8 = a5;
  v9 = a6 & 0x40000000;
  v10 = a6 & 0xBFFFFFFF;
  v11 = a3;
  v36 = 0;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)sub_180047C74(
                          a5 << 12,
                          (*(_QWORD *)(*(_QWORD *)(a1 + 56) + 96LL) + *(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL)) << 12,
                          *(_QWORD *)(a1 + 56),
                          *(_QWORD *)(a1 + 56) + 32LL) )
      return (unsigned int)-1073741523;
    a2 = v37;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    v28 = (void *)(a2 & 0xFFFFFFFFFFE00000uLL);
    sub_1800506F0(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v32, 0LL);
    v13 = (_WORD *)(v32 + 2 * (v11 >> 9));
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (void *)(v37 + (unsigned int)((_DWORD)v11 << 12));
  v15 = (unsigned int)(a4 << 12);
  v16 = a7;
  Size = v15;
  v33 = v14;
  while ( 1 )
  {
    v28 = v14;
    v29 = v15;
    if ( !v13 )
      goto LABEL_8;
    v24 = sub_18010B474(a1, (_DWORD)v13, v8, v16, (__int64)&v30, (__int64)&v36);
    if ( v24 == -1073741568 )
      break;
    if ( v24 == -1073741566 )
    {
      v28 = (void *)((unsigned __int64)v28 & 0xFFFFFFFFFFE00000uLL);
      v25 = v10 | 0x20000000;
      v29 = 0x200000LL;
      if ( (int)v8 <= 0 )
        v25 = v10;
      v10 = v25;
    }
LABEL_8:
    if ( (int)v8 <= 0 )
    {
      v35 = *(_OWORD *)(a1 + 40);
      v22 = sub_180048170(&v28, &v29, v10, &v35);
    }
    else
    {
      if ( v9 && (v10 & 0x20000000) == 0 )
        v10 |= 0x40000000u;
      v17 = *(_QWORD *)(a1 + 56);
      v18 = (*(_DWORD *)(v17 + 20) & 0x40000000) != 0;
      v34 = *(_OWORD *)(a1 + 40);
      v19 = sub_180047CBC(v17, v18 ? 64 : 4);
      v20 = sub_1800479C8((unsigned int)&v28, (unsigned int)&v29, 0, v10, v19, (__int64)&v34);
      v22 = v20;
      if ( v9 && v20 >= 0 && (v10 & 0x40000000) == 0 )
        memset(v28, 0, Size);
    }
    if ( !v13 )
      return (unsigned int)v22;
    if ( (*v13 & 0x4000) != 0 && v22 >= 0 )
    {
      v26 = 1LL;
      if ( (int)v8 <= 0 )
        v26 = -1LL;
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1 + 8), v26);
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
    }
    sub_18010B3D4(v21, (_DWORD)v13, v8, v22 >= 0, (__int64)&v30, v27);
    if ( (v10 & 0x20000000) == 0 || v22 >= 0 || (v16 & 2) != 0 )
      return (unsigned int)v22;
    v15 = Size;
    v16 |= 1u;
    v14 = v33;
    v10 &= ~0x20000000u;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), v8);
  if ( v9 )
    memset(v28, 0, v15);
  return 0;
}
