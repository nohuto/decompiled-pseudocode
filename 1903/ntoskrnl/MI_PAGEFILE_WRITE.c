/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14014CE08
 * Callers:
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char Priority; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 256LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8616), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 8624) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 8632) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 8630) = Priority;
  *(_BYTE *)(v7 + v6 + 8631) = a3;
  *(_QWORD *)(v7 + v6 + 8640) = *a2;
  *(_WORD *)(v7 + v6 + 8628) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 8648) = *(_QWORD *)(v6 + 8064);
  *(_QWORD *)(v7 + v6 + 8656) = *(_QWORD *)(v6 + 8448);
  *(_QWORD *)(v7 + v6 + 8664) = *(_QWORD *)(v6 + 8560);
  *(_QWORD *)(v7 + v6 + 8672) = *(_QWORD *)(v6 + 8512);
  result = *(_QWORD *)(v6 + 2688);
  *(_QWORD *)(v7 + v6 + 8680) = result;
  *(_OWORD *)(v7 + v6 + 8688) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 8704) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 8720) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 8736) = *(_QWORD *)(a1 + 256);
  return result;
}
