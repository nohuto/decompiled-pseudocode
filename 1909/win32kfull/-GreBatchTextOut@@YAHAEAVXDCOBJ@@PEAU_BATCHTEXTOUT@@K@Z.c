/*
 * XREFs of ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C00AF1F0
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00AD7B0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
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
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r12d
  int v16; // edx
  __int64 v17; // rcx
  int v18; // esi
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rbx
  struct tagRECT *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v33; // [rsp+60h] [rbp-38h]
  int v34; // [rsp+B0h] [rbp+18h]
  int v35; // [rsp+B8h] [rbp+20h]

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
  v33 = 0LL;
  v7 = -1;
  v8 = 0LL;
  v9 = *(_DWORD *)(v6 + 32);
  v10 = *(_DWORD *)(v6 + 56);
  v11 = *(unsigned int *)(v6 + 60);
  v12 = v3 - 84;
  if ( v10 > (unsigned int)(v3 - 84) >> 1 )
  {
LABEL_38:
    FreeTmpBuffer(v6);
    return 0LL;
  }
  if ( (_DWORD)v11 )
  {
    if ( (unsigned int)v11 <= v12
      && v10 <= (v12 - (unsigned int)v11) >> (((*(_DWORD *)(v6 + 32) & 0x2000) != 0) + 2)
      && (_DWORD)v11 == (((_DWORD)v11 + 3) & 0xFFFFFFFC) )
    {
      v8 = (int *)(v11 + v6 + 84);
      goto LABEL_13;
    }
    goto LABEL_38;
  }
LABEL_13:
  v13 = *(_QWORD *)a1;
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v15 = *(_DWORD *)(v14 + 184);
  v34 = *(_DWORD *)(v14 + 188);
  v16 = *(_DWORD *)(v6 + 4);
  if ( v15 != v16 )
  {
    *(_DWORD *)(v14 + 184) = v16;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = *(_DWORD *)(v6 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
    v13 = *(_QWORD *)a1;
  }
  v17 = *(_QWORD *)(v13 + 976);
  v18 = *(_DWORD *)(v17 + 176);
  v35 = *(_DWORD *)(v17 + 180);
  v19 = *(_DWORD *)(v6 + 8);
  if ( v18 != v19 )
  {
    *(_DWORD *)(v17 + 176) = v19;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)(v6 + 20);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
    v13 = *(_QWORD *)a1;
  }
  v20 = *(_QWORD *)(v13 + 976);
  v21 = *(_QWORD *)(v6 + 64);
  if ( *(_QWORD *)(v20 + 296) != v21 )
  {
    v33 = *(_QWORD *)(v20 + 296);
    *(_QWORD *)(v20 + 296) = v21;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
    v13 = *(_QWORD *)a1;
  }
  v22 = *(_QWORD *)(v13 + 976);
  v23 = *(_DWORD *)(v6 + 72);
  if ( *(_DWORD *)(v22 + 272) != v23 )
  {
    v7 = *(_DWORD *)(v22 + 272);
    *(_DWORD *)(v22 + 272) = v23;
    v13 = *(_QWORD *)a1;
  }
  v24 = *(_QWORD *)(v13 + 976);
  v25 = *(_QWORD *)(v24 + 324);
  if ( v25 != *(_QWORD *)(v6 + 76) )
  {
    *(_DWORD *)(v24 + 324) = *(_DWORD *)(v6 + 76);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)(v6 + 80);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  v26 = 0LL;
  if ( v9 >= 0 )
    v26 = (struct tagRECT *)(v6 + 36);
  v27 = v9 & 0x7FFFFFFF;
  if ( v9 >= 0 )
    v27 = v9;
  GreExtTextOutWLocked(
    a1,
    *(_DWORD *)(v6 + 24),
    *(_DWORD *)(v6 + 28),
    v27,
    v26,
    (unsigned __int16 *)(v6 + 84),
    v10,
    v8,
    *(_DWORD *)(v6 + 12),
    0LL,
    *(_DWORD *)(v6 + 52));
  v28 = *(_QWORD *)a1;
  v29 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v29 + 184) != v15 )
  {
    *(_DWORD *)(v29 + 184) = v15;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 188LL) = v34;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 7u;
    v28 = *(_QWORD *)a1;
  }
  v30 = *(_QWORD *)(v28 + 976);
  if ( *(_DWORD *)(v30 + 176) != v18 )
  {
    *(_DWORD *)(v30 + 176) = v18;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v35;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
  }
  if ( v33 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL) = v33;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x10u;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x20u;
  }
  if ( v7 != -1 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 272LL) = v7;
  v31 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( v25 != *(_QWORD *)(v31 + 324) )
  {
    *(_DWORD *)(v31 + 324) = v25;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v25);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  FreeTmpBuffer(v6);
  return 1LL;
}
