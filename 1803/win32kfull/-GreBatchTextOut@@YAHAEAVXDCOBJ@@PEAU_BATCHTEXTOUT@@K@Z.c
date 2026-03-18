/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0089030
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall GreBatchTextOut(struct XDCOBJ *a1, struct _BATCHTEXTOUT *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  int v7; // r13d
  int *v8; // r15
  int v9; // r11d
  unsigned int v10; // r10d
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // edx
  __int64 v20; // rcx
  int v21; // esi
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rcx
  __int64 v28; // rbx
  struct tagRECT *v29; // rcx
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v36; // [rsp+60h] [rbp-38h]
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v3 = a3;
  if ( a3 < 0x54 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v6 = AllocFreeTmpBuffer(a3);
  if ( !v6 )
    return 0LL;
  if ( (struct _BATCHTEXTOUT *)((char *)a2 + v3) < a2 || (unsigned __int64)a2 + v3 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove((void *)v6, a2, (unsigned int)v3);
  v36 = 0LL;
  v7 = -1;
  v8 = 0LL;
  v9 = *(_DWORD *)(v6 + 32);
  v10 = *(_DWORD *)(v6 + 56);
  v11 = *(unsigned int *)(v6 + 60);
  v12 = v3 - 84;
  if ( v10 > (unsigned int)(v3 - 84) >> 1 )
  {
LABEL_43:
    FreeTmpBuffer(v6);
    return 0LL;
  }
  if ( (_DWORD)v11 )
  {
    v13 = 4;
    if ( (v9 & 0x2000) != 0 )
      v13 = 8;
    if ( (unsigned int)v11 <= v12 )
    {
      v14 = v12 - v11;
      v15 = v13 == 4 ? v14 >> 2 : v14 / v13;
      if ( v10 <= v15 && (_DWORD)v11 == (((_DWORD)v11 + 3) & 0xFFFFFFFC) )
      {
        v8 = (int *)(v11 + v6 + 84);
        goto LABEL_17;
      }
    }
    goto LABEL_43;
  }
LABEL_17:
  v16 = *(_QWORD *)a1;
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v18 = *(_DWORD *)(v17 + 40);
  v37 = *(_DWORD *)(v17 + 44);
  v19 = *(_DWORD *)(v6 + 4);
  if ( v18 != v19 )
  {
    *(_DWORD *)(v17 + 40) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
    v16 = *(_QWORD *)a1;
  }
  v20 = *(_QWORD *)(v16 + 80);
  v21 = *(_DWORD *)(v20 + 32);
  v38 = *(_DWORD *)(v20 + 36);
  v22 = *(_DWORD *)(v6 + 8);
  if ( v21 != v22 )
  {
    *(_DWORD *)(v20 + 32) = v22;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
    v16 = *(_QWORD *)a1;
  }
  v23 = *(_QWORD *)(v16 + 80);
  v24 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v23 + 176) != v24 )
  {
    v36 = *(_QWORD *)(v23 + 176);
    *(_QWORD *)(v23 + 176) = v24;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
    v16 = *(_QWORD *)a1;
  }
  v25 = *(_QWORD *)(v16 + 80);
  v26 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v25 + 152) != v26 )
  {
    v7 = *(_DWORD *)(v25 + 152);
    *(_DWORD *)(v25 + 152) = v26;
    v16 = *(_QWORD *)a1;
  }
  v27 = *(_QWORD *)(v16 + 80);
  v28 = *(_QWORD *)(v27 + 336);
  if ( v28 != *(_QWORD *)(v6 + 76) )
  {
    *(_DWORD *)(v27 + 336) = *(_DWORD *)(v6 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)(v6 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  v29 = 0LL;
  if ( v9 >= 0 )
    v29 = (struct tagRECT *)(v6 + 36);
  v30 = v9 & 0x7FFFFFFF;
  if ( v9 >= 0 )
    v30 = v9;
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v30,
    v29,
    (unsigned __int16 *)(v6 + 84),
    v10,
    v8,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v31 = *(_QWORD *)a1;
  v32 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v32 + 40) != v18 )
  {
    *(_DWORD *)(v32 + 40) = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 44LL) = v37;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 7u;
    v31 = *(_QWORD *)a1;
  }
  v33 = *(_QWORD *)(v31 + 80);
  if ( *(_DWORD *)(v33 + 32) != v21 )
  {
    *(_DWORD *)(v33 + 32) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v38;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
  }
  if ( v36 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 176LL) = v36;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= ~0x20u;
  }
  if ( v7 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 152LL) = v7;
  v34 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( v28 != *(_QWORD *)(v34 + 336) )
  {
    *(_DWORD *)(v34 + 336) = v28;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v28);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6);
  return 1LL;
}
