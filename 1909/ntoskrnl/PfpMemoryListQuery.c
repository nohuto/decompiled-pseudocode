/*
 * XREFs of PfpMemoryListQuery @ 0x14015B9B8
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405CEA00 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x140006020 (MmQueryMemoryListInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rdi
  unsigned int v8; // ebx
  _OWORD v10[11]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+100h] [rbp+8h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v8 = -1073741789;
  }
  else
  {
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v10, 0xB0u, v6, &v11);
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 0;
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 4) = 64;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)(v7 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v7 + 24) = *(_QWORD *)&v10[4]
                         + *((_QWORD *)&v10[3] + 1)
                         + *(_QWORD *)&v10[3]
                         + *((_QWORD *)&v10[2] + 1)
                         + *((_QWORD *)&v10[4] + 1);
    *(_QWORD *)(v7 + 32) = *(_QWORD *)&v10[5];
    *(_QWORD *)(v7 + 40) = *(_QWORD *)&v10[6] + *((_QWORD *)&v10[5] + 1);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)&v10[0] + *((_QWORD *)&v10[0] + 1);
    *(_QWORD *)(v7 + 56) = *((_QWORD *)&v10[1] + 1) + *(_QWORD *)&v10[1];
  }
  *a3 = 64;
  return v8;
}
