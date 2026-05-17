/*
 * XREFs of sub_18002DEC8 @ 0x18002DEC8
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_18002952C @ 0x18002952C (sub_18002952C.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002DE68 @ 0x18002DE68 (sub_18002DE68.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     sub_18002E5E8 @ 0x18002E5E8 (sub_18002E5E8.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CF794 @ 0x1800CF794 (sub_1800CF794.c)
 */

__int64 __fastcall sub_18002DEC8(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  __int64 *v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // eax
  __int128 v11; // xmm1
  bool v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v18[2]; // [rsp+80h] [rbp-80h] BYREF
  int v19; // [rsp+90h] [rbp-70h] BYREF
  _WORD *v20; // [rsp+98h] [rbp-68h]
  _WORD v21[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v23; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v4 = 0;
  v16 = 0LL;
  v20 = v21;
  v13 = 0;
  v19 = 0x1000000;
  v21[0] = 0;
  v15 = 0uLL;
  v14 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((dword_180162714 & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    sub_180021798(*(_QWORD *)(v1 + 80), v5 & ((-(__int64)((dword_180162714 & 4) != 0) & 0x400) + 31488) | 1, v22);
    v6 = v22;
  }
  else
  {
    sub_180021798(0LL, 0LL, v22);
    v6 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = sub_18002D8FC(
           (__int16 *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v18,
           &v19,
           (__int64)&v17,
           (unsigned __int16 *)&v15,
           &v13,
           (__int64)&v14);
    v9 = v7;
    if ( v13 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      v9 = sub_18002E5E8(a1, (unsigned int)&v15, (unsigned int)&v17, (unsigned int)&v19, v7);
      if ( v9 < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v14 |= 1u;
      v10 = sub_18002952C((unsigned __int16 *)&v17);
      *(_DWORD *)(v2 + 264) = v10;
      v9 = sub_18002E6A0((unsigned int)&v17, (unsigned int)&v15, *(_DWORD *)(a1 + 32), v10, (__int64)&v16);
      if ( v9 != -1073741515 )
        goto LABEL_14;
    }
    sub_18002E1A4(v2 + 72);
    v11 = v17;
    *(_OWORD *)(v2 + 72) = v15;
    *(_OWORD *)(v2 + 88) = v11;
    v15 = 0uLL;
    v9 = sub_18002D3B4(a1, (__int64)&v19);
    if ( v9 != 1073741838 )
      goto LABEL_14;
    if ( v21 != v20 )
      RtlDeleteBoundaryDescriptor(v20);
    v19 = 0x1000000;
    v20 = v21;
    v21[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  v9 = -1073741701;
LABEL_14:
  if ( v16 )
  {
    sub_180070848(a1);
  }
  else if ( sub_18002DE68(v8) )
  {
    sub_1800CF794(v14, a1);
  }
  if ( v21 != v20 )
    RtlDeleteBoundaryDescriptor(v20);
  v19 = 0x1000000;
  v20 = v21;
  v21[0] = 0;
  sub_18002E1A4(&v15);
  if ( v23 )
    RtlReleasePath(v22[0]);
  return (unsigned int)v9;
}
