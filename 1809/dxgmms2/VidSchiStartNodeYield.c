/*
 * XREFs of VidSchiStartNodeYield @ 0x1C0013E94
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiScheduleCommandToRun @ 0x1C00073F0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0009DE0 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013DC8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiSelectContext @ 0x1C002FDD8 (VidSchiSelectContext.c)
 * Callees:
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     McTemplateK0pqxx @ 0x1C0027E94 (McTemplateK0pqxx.c)
 */

__int64 __fastcall VidSchiStartNodeYield(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8

  v4 = *(_QWORD *)(a1 + 24);
  v8 = *(unsigned int *)(v4 + 192);
  if ( !*(_QWORD *)(v4 + 176) )
  {
    v9 = (_DWORD)v8 == 10 && a4 == 16 ? 9500LL : (unsigned int)(100 * a4 * v8);
    ExSetTimer(*(_QWORD *)(v4 + 168), -v9, v9, 0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v10, &EventYieldSetExpirationTimer, v11, *(_QWORD *)(v4 + 16));
  }
  v12 = 100LL * *(_QWORD *)(a1 + 1992);
  *(_QWORD *)(a1 + 1984) = a2;
  result = a2 + 2 * (v12 / v8) + v12 / v8;
  *(_QWORD *)(v4 + 176) = result;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = *(_QWORD *)(v4 + 176) - a2;
    if ( is_mul_ok(v14, 0x989680uLL) )
      v15 = v14 * (unsigned __int128)0x989680uLL / a3;
    else
      v15 = 10000000 * ((*(_QWORD *)(v4 + 176) - a2) % a3) / a3 + 10000000 * (v14 / a3);
    v16 = *(_QWORD *)(a1 + 1992);
    if ( is_mul_ok(v16, 0x989680uLL) )
    {
      v17 = v16 * (unsigned __int128)0x989680uLL / a3;
    }
    else
    {
      v16 /= a3;
      v17 = 10000000 * (*(_QWORD *)(a1 + 1992) % a3) / a3 + 10000000 * v16;
    }
    return McTemplateK0pqxx(
             v16,
             (unsigned int)&EventYieldStartNode,
             v17,
             *(_QWORD *)(v4 + 16),
             *(_WORD *)(a1 + 4),
             v17,
             v15);
  }
  return result;
}
