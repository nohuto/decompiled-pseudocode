/*
 * XREFs of VidSchiFillSubmitCommandDataVirtual @ 0x1C0003780
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandDataVirtual(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 || (v7 = *(_QWORD *)(a1 + 56)) != 0 && (*(_DWORD *)(v7 + 72) & 0x8000) != 0 )
    v8 = 8;
  else
    v8 = 0;
  *((_DWORD *)a2 + 13) = v8;
  v9 = v8 | (*(_DWORD *)(a1 + 92) >> 6) & 0x40;
  *((_DWORD *)a2 + 13) = v9;
  v10 = v9 | (*(_DWORD *)(a1 + 92) >> 7) & 0x80;
  *((_DWORD *)a2 + 13) = v10;
  v11 = v10 | ((*(_BYTE *)(v2 + 893) & 1) << 8);
  *((_DWORD *)a2 + 13) = v11;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 13) = v11 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    v12 = *(_DWORD *)(a1 + 92);
    if ( (v12 & 0x10) != 0 )
    {
      v11 |= 0x30u;
      *((_DWORD *)a2 + 13) = v11;
      *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 404LL);
      *((_DWORD *)a2 + 11) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 160LL);
      v12 = *(_DWORD *)(a1 + 92);
    }
    v13 = v11 | (v12 >> 7) & 2;
    *((_DWORD *)a2 + 13) = v13;
    *((_DWORD *)a2 + 13) = v13 | (*(_DWORD *)(a1 + 92) >> 1) & 4;
  }
  a2[1] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 148);
  a2[3] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 152);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(a1 + 184);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 104);
  v14 = *(unsigned __int16 *)(v5 + 4);
  v15 = *(_QWORD *)(v6 + 616);
  if ( (unsigned int)v14 < *(_DWORD *)(v6 + 688) )
    v15 += 8 * v14;
  *((_DWORD *)a2 + 14) = *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL);
  v16 = *(unsigned __int16 *)(v5 + 4);
  v17 = *(__int64 **)(v6 + 616);
  if ( (unsigned int)v16 < *(_DWORD *)(v6 + 688) )
    v17 += v16;
  result = *v17;
  *((_DWORD *)a2 + 15) = *(unsigned __int16 *)(*v17 + 8);
  return result;
}
