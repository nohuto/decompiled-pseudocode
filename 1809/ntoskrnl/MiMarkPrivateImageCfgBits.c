/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x140652574
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1405F57C4 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 *     MiGetControlAreaLoadConfig @ 0x1400D9594 (MiGetControlAreaLoadConfig.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1405F7524 (MiMarkPrivateOpenCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1405F7560 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 ControlAreaLoadConfig; // rax
  __int64 v13; // r8
  __int64 result; // rax
  __int16 v15; // cx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  v5 = **(__int64 ***)(a3 + 72);
  v6 = *v5;
  v7 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  v8 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  if ( MiVadMapsLargeImage(a3) )
  {
    result = MiMarkPrivateOpenCfgBits((int)a1, v8, v7, 0);
    if ( (int)result < 0 )
      return result;
    v8 += (unsigned __int64)*((unsigned __int8 *)MiLocateVadEvent(a3, 16) + 8) << 16;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL);
    v9 = 1;
    v16 = v8
        + ((__int64)(*(_QWORD *)(v6 + 64)
                   + 8
                   * (((v15 & 0xFFF) != 0LL)
                    + ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 24), -1LL, -1LL) >> 12))
                   - *(_QWORD *)(a3 + 80)) >> 3 << 12);
    if ( v7 > v16 )
      v7 = v16;
  }
  v10 = *(_QWORD *)(a3 + 80);
  v11 = *(_QWORD *)(v6 + 64);
  if ( v10 != v11 && !v9 )
  {
    v17 = (v10 - v11) >> 3 << 12;
    v8 += v17;
    v7 += v17;
  }
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)v5);
  return MiPopulateCfgBitMap(a1, *(_QWORD *)(ControlAreaLoadConfig + 8), v13, 0, v8, v7);
}
