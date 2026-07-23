/*
 * XREFs of CcCalculatePagesToWrite @ 0x1400D7774
 * Callers:
 *     CcScanLogHandleList @ 0x14007EBD8 (CcScanLogHandleList.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     CcNotifyExternalCaches @ 0x140166F3C (CcNotifyExternalCaches.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCalculatePagesToWrite(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4, char a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  __int64 v10; // rbx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v15; // r8

  if ( (unsigned int)(a2 - 1) <= 1 || a2 == 16 )
  {
    v6 = *(_QWORD *)a3;
  }
  else
  {
    v5 = *(_QWORD *)a3;
    v6 = *(_QWORD *)a3;
    v7 = *a4;
    v8 = a4[1];
    v9 = *(_QWORD *)(a3 + 8);
    v10 = *(unsigned int *)(a3 + 16);
    v11 = *((unsigned int *)a4 + 6);
    if ( *(_QWORD *)a3 > (unsigned __int64)(unsigned int)CcMaxLazyWritePages || (a5 & 1) != 0 )
      v6 >>= 3;
    v12 = 0LL;
    if ( v10 + v5 > v9 )
      v12 = v5 + v10 - v9;
    v13 = v5 + v12 - v6;
    if ( v13 > v11 )
    {
      v15 = v13 - v11;
      v6 += v15;
      if ( v7 < v8 || *(_QWORD *)(**(_QWORD **)(a1 + 8) + 7296LL) < 0x1000uLL )
        v6 += 2 * v15;
    }
    if ( v6 > v5 )
      v6 = v5;
  }
  if ( v6 > 0xFFFFFFFF )
    LODWORD(v6) = -1;
  return (unsigned int)v6;
}
