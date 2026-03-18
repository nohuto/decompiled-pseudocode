/*
 * XREFs of EtwpCoverageSamplerInitialize @ 0x140904BA0
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409060E0 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall EtwpCoverageSamplerInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x4C0uLL);
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_DWORD *)(a1 + 1128) = 1;
  *(_QWORD *)(a1 + 736) = a1 + 728;
  *(_QWORD *)(a1 + 728) = a1 + 728;
  *(_DWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_DWORD *)(a1 + 700) = 0;
  *(_DWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_DWORD *)(a1 + 716) = 0;
  memset((void *)(a1 + 752), 0, 0x30uLL);
  *(_QWORD *)(a1 + 760) = 0LL;
  result = a1 + 1160;
  *(_DWORD *)(a1 + 796) = -1;
  *(_QWORD *)(a1 + 752) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1;
  *(_DWORD *)(a1 + 1204) = 1;
  *(_QWORD *)(a1 + 1168) = a1 + 1160;
  *(_QWORD *)(a1 + 1160) = a1 + 1160;
  return result;
}
