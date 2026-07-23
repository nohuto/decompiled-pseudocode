/*
 * XREFs of PopDripsWatchdogSelectCallback @ 0x14086FA94
 * Callers:
 *     PopDripsWatchdogCallbackWorker @ 0x14086F250 (PopDripsWatchdogCallbackWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDripsWatchdogSelectCallback(__int64 a1, __int64 a2, __int128 *a3, _QWORD *a4, __int64 a5)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // r10d
  unsigned int v9; // ebx
  int *v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 result; // rax

  v5 = *(_DWORD *)(a1 + 316);
  v6 = a2 - *(_QWORD *)(a1 + 328);
  v7 = a2 - *(_QWORD *)(a1 + 320);
  v8 = v5;
  v9 = v5;
  if ( v5 < 2 )
  {
    v10 = &dword_140417CA4[4 * v5];
    do
    {
      if ( *((_BYTE *)v10 - 4) && v6 >= (unsigned int)(10000000 * *v10) )
        v8 = v9;
      ++v9;
      v10 += 4;
    }
    while ( v9 < 2 );
    if ( v8 != v5 )
    {
      *(_DWORD *)(a1 + 312) = 0;
      *(_DWORD *)(a1 + 316) = v8;
    }
  }
  v11 = *a3;
  v12 = a3[1];
  *a4 = qword_140417CA8[2 * (int)v8];
  *(_DWORD *)a5 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a5 + 4) = *(_DWORD *)(a1 + 632);
  result = *(unsigned int *)(a1 + 312);
  *(_OWORD *)(a5 + 56) = v11;
  *(_QWORD *)(a5 + 16) = v7;
  *(_OWORD *)(a5 + 72) = v12;
  *(_DWORD *)(a5 + 8) = result;
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a1 + 336);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a1 + 352);
  return result;
}
