/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14014FA90
 * Callers:
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
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
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 7848), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 7856) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 7864) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 7862) = Priority;
  *(_BYTE *)(v7 + v6 + 7863) = a3;
  *(_QWORD *)(v7 + v6 + 7872) = *a2;
  *(_WORD *)(v7 + v6 + 7860) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 7880) = *(_QWORD *)(v6 + 7296);
  *(_QWORD *)(v7 + v6 + 7888) = *(_QWORD *)(v6 + 7680);
  *(_QWORD *)(v7 + v6 + 7896) = *(_QWORD *)(v6 + 7792);
  *(_QWORD *)(v7 + v6 + 7904) = *(_QWORD *)(v6 + 7744);
  result = *(_QWORD *)(v6 + 2688);
  *(_QWORD *)(v7 + v6 + 7912) = result;
  *(_OWORD *)(v7 + v6 + 7920) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 7936) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 7952) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 7968) = *(_QWORD *)(a1 + 256);
  return result;
}
