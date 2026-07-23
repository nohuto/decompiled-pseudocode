/*
 * XREFs of BgpFwLibraryInitialize @ 0x14095095C
 * Callers:
 *     BgLibraryInitialize @ 0x14094F81C (BgLibraryInitialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F308 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F358 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     BgpFwLibraryEnable @ 0x14016F8E0 (BgpFwLibraryEnable.c)
 *     BgpGxProcessQrCodeBitmap @ 0x140192D54 (BgpGxProcessQrCodeBitmap.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     BgpFwReservePoolSwap @ 0x14094F340 (BgpFwReservePoolSwap.c)
 *     ResFwConfigureDisplayStringResources @ 0x14094F650 (ResFwConfigureDisplayStringResources.c)
 *     AnFwConfigureProgressResources @ 0x14094F6DC (AnFwConfigureProgressResources.c)
 *     BgpFwInitializeReservePool @ 0x140951508 (BgpFwInitializeReservePool.c)
 *     LogFwInitialize @ 0x1409515A4 (LogFwInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140951E4C (BgpFwLibraryDestroy.c)
 *     AnFwProgressIndicatorTransition @ 0x140954F94 (AnFwProgressIndicatorTransition.c)
 *     BgpFoInitialize @ 0x1409FB898 (BgpFoInitialize.c)
 *     BgpBcInitializeCriticalMode @ 0x1409FC420 (BgpBcInitializeCriticalMode.c)
 *     BgpFwInitializeLock @ 0x1409FC9D0 (BgpFwInitializeLock.c)
 */

__int64 __fastcall BgpFwLibraryInitialize(__int64 a1, unsigned int a2)
{
  int v4; // r14d
  int v5; // ebx
  unsigned int v6; // ebp
  int v7; // eax
  unsigned int v8; // r13d
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r15d
  _OWORD *v15; // rax
  _OWORD *v16; // r12
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm1
  char *v20; // r8
  _OWORD *v21; // rbx
  int v22; // eax
  __int64 v23; // rdi
  void *v24; // rbx
  void *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 result; // rax
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 Memory; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  const wchar_t *v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // [rsp+60h] [rbp+8h]
  unsigned int v48; // [rsp+70h] [rbp+18h]

  if ( !a1 )
    return 3221225485LL;
  if ( *(_DWORD *)(a1 + 116) < 4u )
    return 3221225561LL;
  v4 = *(_DWORD *)(a1 + 120) & 0x16FF0000;
  if ( (dword_140406AD0 & 1) != 0 && (dword_140406AD0 & 4) == 0 && (*(_DWORD *)(a1 + 120) & 0x100000) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x100000) != 0 )
  {
    BgpFwAcquireLock();
    if ( a2 == -1 )
    {
      dword_140406AD0 &= ~2u;
      memset(&BgInternal, 0, 0x28uLL);
      dword_140406AD0 |= 0x101800u;
      result = BgpFwLibraryEnable(a1 + 32);
      if ( (int)result < 0 )
        return result;
      dword_140406AD0 &= ~0x2000u;
      v39 = *(_QWORD *)(a1 + 16);
      if ( v39 )
      {
        BgpFwReservePoolSwap(0, *(_QWORD *)(a1 + 240), *(_DWORD *)(a1 + 248), v39);
        qword_140406B98 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
        qword_140406B90 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
      }
      else
      {
        qword_140406B98 = 0LL;
        qword_140406B90 = 0LL;
      }
      LogFwInitialize();
    }
    else
    {
      dword_140406AD0 &= ~0x1000u;
      AnFwProgressIndicatorTransition();
    }
    BgpFwReleaseLock();
    goto LABEL_49;
  }
  if ( a2 == -1 )
  {
    dword_140406AD0 = BgpFwInitializeLock(0x100000LL) | 0xC04;
    qword_140406BA8 = (__int64)&qword_140406BA0;
    qword_140406BA0 = (__int64)&qword_140406BA0;
    v40 = *(_QWORD *)(a1 + 240);
    if ( !v40 || !*(_DWORD *)(a1 + 248) )
      return 3221225626LL;
    BgpFwInitializeReservePool(v40, 0x4000LL, &unk_1404DC590);
    v5 = BgpFwLibraryEnable(a1 + 32);
    if ( v5 < 0 )
      goto LABEL_59;
    xmmword_140406B08 = *(_OWORD *)(a1 + 100);
    if ( *(_QWORD *)(a1 + 88) )
    {
      Memory = BgpFwAllocateMemory(0x18uLL);
      if ( !Memory )
        goto LABEL_72;
      *(_QWORD *)Memory = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 8) = *(_DWORD *)(a1 + 96);
      *(_QWORD *)(Memory + 16) = *(_QWORD *)(a1 + 88);
      *(_DWORD *)(Memory + 12) = 1;
      qword_140406B78 = Memory;
      v5 = BgpFoInitialize(Memory, 0LL);
      if ( v5 < 0 )
        goto LABEL_59;
    }
    if ( *(_DWORD *)(a1 + 116) >= 3u )
    {
      qword_140406C50 = *(_QWORD *)(a1 + 404);
      dword_140406C58 = *(_DWORD *)(a1 + 412);
    }
    dword_140406C38 = *(_DWORD *)(a1 + 400);
    v5 = BgpBcInitializeCriticalMode(a1, 0xFFFFFFFFLL);
    if ( v5 < 0 )
      goto LABEL_59;
    goto LABEL_49;
  }
  BgpFwAcquireLock();
  v5 = BgpFwLibraryEnable(a1 + 32);
  if ( v5 >= 0 )
  {
    *(PHYSICAL_ADDRESS *)&xmmword_140406AB0 = MmGetPhysicalAddress(qword_140406A80);
    DWORD2(xmmword_140406AB0) = DWORD2(BgInternal);
    HIDWORD(xmmword_140406AB0) = DWORD1(BgInternal);
    LODWORD(xmmword_140406AC0) = HIDWORD(BgInternal);
    if ( (_DWORD)xmmword_140406A70 == 4 )
    {
      DWORD2(xmmword_140406AC0) = 3;
    }
    else if ( (_DWORD)xmmword_140406A70 == 5 )
    {
      DWORD2(xmmword_140406AC0) = 4;
    }
    else
    {
      DWORD2(xmmword_140406AC0) = 0;
    }
    v6 = 0;
    v7 = 416;
    v8 = 0;
    xmmword_140406BB0 = *(_OWORD *)(a1 + 272);
    v9 = 0;
    xmmword_140406BC0 = *(_OWORD *)(a1 + 288);
    xmmword_140406BD0 = *(_OWORD *)(a1 + 304);
    xmmword_140406BE0 = *(_OWORD *)(a1 + 320);
    xmmword_140406BF0 = *(_OWORD *)(a1 + 336);
    xmmword_140406C00 = *(_OWORD *)(a1 + 352);
    xmmword_140406C10 = *(_OWORD *)(a1 + 368);
    xmmword_140406C20 = *(_OWORD *)(a1 + 384);
    if ( *(_QWORD *)(a1 + 72) )
    {
      v8 = 2;
      v9 = *(_DWORD *)(a1 + 84);
      v6 = (*(_DWORD *)(a1 + 80) + 15) & 0xFFFFFFF0;
      v7 = v6 + 448;
    }
    v10 = 0;
    v11 = 0;
    v46 = 0;
    if ( *(_QWORD *)(a1 + 128) )
    {
      v10 = 32;
      v46 = 32;
      v11 = (*(_DWORD *)(a1 + 136) + 15) & 0xFFFFFFF0;
      v7 += v11 + 32;
    }
    v12 = v9 + 16480 + v7;
    v13 = v12 - v10 - v11 - v8 * 16 - v6 - 416;
    v14 = ((v13 >> 3) + 15) & 0xFFFFFFF0;
    v48 = v14 + v12;
    v15 = (_OWORD *)BgpFwAllocateMemory(v14 + v12);
    qword_140406B00 = (__int64)v15;
    v16 = v15;
    if ( v15 )
    {
      v17 = 3LL;
      v18 = (_OWORD *)a1;
      do
      {
        *v15 = *v18;
        v15[1] = v18[1];
        v15[2] = v18[2];
        v15[3] = v18[3];
        v15[4] = v18[4];
        v15[5] = v18[5];
        v15[6] = v18[6];
        v15 += 8;
        v19 = v18[7];
        v18 += 8;
        *(v15 - 1) = v19;
        --v17;
      }
      while ( v17 );
      *v15 = *v18;
      v15[1] = v18[1];
      v20 = (char *)v16 + v6 + v8 * 16 + v11 + v46 + 416;
      *(_DWORD *)v16 = v48;
      *((_QWORD *)v16 + 30) = 0LL;
      *((_DWORD *)v16 + 62) = 0;
      *((_QWORD *)v16 + 33) = 0LL;
      *((_QWORD *)v16 + 32) = 0LL;
      *((_DWORD *)v16 + 30) |= 0x100000u;
      BgpFwInitializeReservePool(&v20[v14], v13, v20);
      qword_140406B80 = 0LL;
      if ( !v6 )
        goto LABEL_76;
      v21 = &v16[v8 + 26];
      memmove(v21, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 80));
      *((_DWORD *)v16 + 107) = 1;
      *((_QWORD *)v16 + 52) = v21;
      *((_DWORD *)v16 + 106) = *(_DWORD *)(a1 + 80);
      *((_QWORD *)v16 + 54) = v21;
      dword_140406AD0 |= 0x800u;
      v22 = BgpFoInitialize(v16 + 26, 1LL);
      dword_140406AD0 &= ~0x800u;
      if ( v22 >= 0 )
        qword_140406B80 = (__int64)(v16 + 26);
      if ( !qword_140406B80 )
LABEL_76:
        DbgPrintEx(0x65u, 0, "BGFX system font initialization failure!\n");
      qword_140406B88 = 0LL;
      if ( v11 )
      {
        v23 = (__int64)&v16[v8 + 26] + v6;
        v24 = (void *)(v23 + v46);
        memmove(v24, *(const void **)(a1 + 128), *(unsigned int *)(a1 + 136));
        *(_DWORD *)(v23 + 12) = 1;
        *(_QWORD *)v23 = v24;
        *(_DWORD *)(v23 + 8) = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(v23 + 16) = v24;
        qword_140406B88 = v23;
      }
      memset(&qword_140406B18, 0, 0x58uLL);
      if ( *(_QWORD *)(a1 + 144) )
      {
        v25 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 160));
        qword_140406B18 = v25;
        if ( v25 )
        {
          memmove(v25, *(const void **)(a1 + 144), *(unsigned int *)(a1 + 160));
          LODWORD(Size) = *(_DWORD *)(a1 + 160);
          qword_140406B2C = *(_QWORD *)(a1 + 164);
        }
      }
      v26 = *(_QWORD *)(a1 + 184);
      if ( v26 && (int)BgpGxProcessQrCodeBitmap(v26, &qword_140406B58) < 0 )
        qword_140406B58 = 0LL;
      v27 = *(_QWORD *)(a1 + 216);
      if ( v27 )
      {
        v42 = -1LL;
        v43 = -1LL;
        do
          ++v43;
        while ( *(_WORD *)(v27 + 2 * v43) );
        Dst = (wchar_t *)BgpFwAllocateMemory(2 * v43 + 2);
        if ( Dst )
        {
          v44 = *(const wchar_t **)(a1 + 216);
          do
            ++v42;
          while ( v44[v42] );
          wcscpy_s(Dst, v42 + 1, v44);
        }
      }
      qword_140406B78 = 0LL;
      if ( !*(_QWORD *)(a1 + 88) )
        goto LABEL_35;
      v28 = (void *)BgpFwAllocateMemory(*(unsigned int *)(a1 + 96));
      v29 = (__int64)v28;
      if ( !v28 )
        goto LABEL_35;
      memmove(v28, *(const void **)(a1 + 88), *(unsigned int *)(a1 + 96));
      v30 = BgpFwAllocateMemory(0x18uLL);
      v31 = v30;
      if ( v30 )
      {
        *(_DWORD *)(v30 + 12) = 0;
        *(_QWORD *)v30 = v29;
        *(_DWORD *)(v30 + 8) = *(_DWORD *)(a1 + 96);
        *(_QWORD *)(v30 + 16) = v29;
        if ( (int)BgpFoInitialize(v30, 0LL) >= 0 )
        {
          qword_140406B78 = v31;
LABEL_35:
          if ( *(_DWORD *)(a1 + 116) >= 3u )
          {
            qword_140406C50 = *(_QWORD *)(a1 + 404);
            dword_140406C58 = *(_DWORD *)(a1 + 412);
          }
          v32 = *(_DWORD *)(a1 + 400);
          dword_140406AD0 |= 0x8000u;
          dword_140406C38 = v32;
          BgpBcInitializeCriticalMode(a1, a2);
          dword_140406AD0 = dword_140406AD0 & 0xFFFF77FF | 0x800;
          v33 = BgpFwAllocateMemory(0x38uLL);
          dword_140406AD0 &= ~0x800u;
          v34 = v33;
          if ( v33 )
          {
            v35 = *(_QWORD *)(a1 + 256);
            if ( v35 )
            {
              *(_OWORD *)v34 = *(_OWORD *)v35;
              *(_QWORD *)(v34 + 16) = *(_QWORD *)(v35 + 16);
              *(_DWORD *)(v34 + 24) = *(_DWORD *)(v35 + 24);
              *((_QWORD *)v16 + 32) = v34;
              v34 += 28LL;
            }
            v36 = *(_QWORD *)(a1 + 264);
            if ( v36 )
            {
              *(_OWORD *)v34 = *(_OWORD *)v36;
              *(_QWORD *)(v34 + 16) = *(_QWORD *)(v36 + 16);
              *(_DWORD *)(v34 + 24) = *(_DWORD *)(v36 + 24);
              *((_QWORD *)v16 + 33) = v34;
            }
          }
          qword_140406B98 = ResFwConfigureDisplayStringResources(*(_QWORD *)(a1 + 256));
          qword_140406B90 = AnFwConfigureProgressResources(*(int **)(a1 + 264));
          v37 = *(_DWORD *)(a1 + 124);
          dword_140406AD0 |= v4 | 0x80;
          dword_140406AD4 = v37;
          BgpFwReleaseLock();
          qword_140406B70 = *(_QWORD *)(a1 + 232);
LABEL_49:
          dword_140406AD0 |= 1u;
          v5 = 0;
          goto LABEL_50;
        }
        BgpFwFreeMemory(v29);
        v45 = v31;
      }
      else
      {
        v45 = v29;
      }
      BgpFwFreeMemory(v45);
      goto LABEL_35;
    }
    BgpFwReleaseLock();
LABEL_72:
    v5 = -1073741801;
    goto LABEL_59;
  }
  BgpFwReleaseLock();
LABEL_50:
  if ( v5 < 0 )
LABEL_59:
    BgpFwLibraryDestroy();
  return (unsigned int)v5;
}
