/*
 * XREFs of EtwpCCSwapTrace @ 0x14017CCA0
 * Callers:
 *     EtwpLogContextSwapEvent @ 0x14017CB50 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     EtwpCCSwapFlush @ 0x14017D004 (EtwpCCSwapFlush.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

struct _KPRCB *__fastcall EtwpCCSwapTrace(__int64 a1, __int64 a2, unsigned int a3, struct _KPRCB **a4)
{
  struct _KPRCB *result; // rax
  __int64 v6; // r13
  _QWORD *EtwSupport; // r12
  unsigned int *v9; // rsi
  struct _KPRCB *v10; // r10
  _DWORD *v11; // rbx
  unsigned int v12; // r14d
  __int64 v13; // r10
  unsigned int v14; // edi
  unsigned int v15; // ecx
  char v16; // r8
  unsigned int v17; // eax
  int v18; // r10d
  char v19; // al
  unsigned int v20; // eax
  unsigned int v21; // ebx
  char v22; // al
  unsigned int v23; // eax
  struct _KPRCB *v24; // rcx
  unsigned int v25; // eax
  int Src; // [rsp+20h] [rbp-48h] BYREF
  int v27; // [rsp+24h] [rbp-44h]
  unsigned int v28; // [rsp+80h] [rbp+18h]

  v28 = a3;
  result = KeGetCurrentPrcb();
  v6 = a3;
  EtwSupport = result->EtwSupport;
  v9 = (unsigned int *)EtwSupport[a3 + 37];
  if ( v9 )
  {
    v10 = *a4;
    v11 = v9 + 6;
    v12 = 0;
    if ( *v9 )
    {
      v13 = (__int64)v10 - *((_QWORD *)v9 + 1);
    }
    else
    {
      v9[1] = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v9 + 1) = v10;
      *v9 = 104;
      *((_QWORD *)v9 + 2) = v10;
      memset(v9 + 6, 0, 0x40uLL);
      a3 = v28;
      v13 = 0LL;
    }
    v14 = *(_DWORD *)(a1 + 1600);
    v15 = 0;
    if ( v14 )
    {
      while ( *v11 != v14 )
      {
        if ( !*v11 )
        {
          v9[v15 + 6] = v14;
          *((_BYTE *)v9 + v15 + 88) = *(_BYTE *)(a1 + 563);
          break;
        }
        ++v15;
        ++v11;
        if ( v15 >= 0x10 )
          break;
      }
    }
    if ( v15 == 16
      || MEMORY[0xFFFFF78000000320] - v9[1] > 0x1F4
      || (unsigned __int64)*v9 + 8 > 0x400
      || v13 > 0x40000000
      || *((_BYTE *)EtwSupport + v6 + 288) )
    {
      EtwpCCSwapFlush(v9, a3);
      v24 = *a4;
      v25 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)v9 + 1) = *a4;
      *((_QWORD *)v9 + 2) = v24;
      v9[1] = v25;
      *v9 = 104;
      memset(v9 + 6, 0, 0x40uLL);
      *((_BYTE *)EtwSupport + v6 + 288) = 0;
      v13 = 0LL;
      v9[6] = v14;
      v15 = 0;
    }
    if ( v14 )
    {
      if ( *(_DWORD *)(a2 + 1600) )
        v12 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436);
      v16 = *(_BYTE *)(a1 + 195);
      v17 = v16 - *((char *)v9 + v15 + 88);
      if ( v12 > 1 || v17 > 7 || v13 >= 0x20000 )
      {
        Src = (4 * v13) | 3;
        if ( v12 >= 0x1FFFF )
          v12 = 0x1FFFF;
        v22 = *(_BYTE *)(a1 + 388);
        v27 = ((unsigned __int16)v27 ^ ((unsigned __int8)v15 ^ (unsigned __int8)v27) & 0xF) & 0x3FF | (((32 * v12) | v16 & 0x1F) << 10);
        if ( v22 == 5 )
          v23 = ((unsigned __int16)v27 ^ (unsigned __int16)(16 * *(unsigned __int8 *)(a1 + 643))) & 0x3F0 ^ v27;
        else
          v23 = (16 * *(unsigned __int8 *)(a1 + 388) - 369) & 0x3F0 | v27 & 0xFFFFFC0F;
        v27 = v23;
        v21 = 8;
      }
      else
      {
        v18 = Src & 0x7E00 | (4 * (v15 & 0xF | (16 * (v17 & 7 | ((_DWORD)v13 << 9)))));
        v19 = *(_BYTE *)(a1 + 388);
        Src = v18 | 2;
        if ( v19 == 5 )
          v20 = ((unsigned __int16)Src ^ (unsigned __int16)(*(unsigned __int8 *)(a1 + 643) << 9)) & 0x7E00 ^ Src;
        else
          v20 = ((*(unsigned __int8 *)(a1 + 388) << 9) - 11777) & 0x7E00 | Src & 0xFFFF81FF;
        Src = v20;
        v21 = 4;
      }
    }
    else if ( v13 >= 0x4000 )
    {
      v21 = 4;
      Src = (4 * v13) | 1;
    }
    else
    {
      v21 = 2;
      LOWORD(Src) = 4 * v13;
    }
    memmove((char *)v9 + *v9, &Src, v21);
    *v9 += v21;
    result = *a4;
    *((_QWORD *)v9 + 1) = *a4;
  }
  return result;
}
