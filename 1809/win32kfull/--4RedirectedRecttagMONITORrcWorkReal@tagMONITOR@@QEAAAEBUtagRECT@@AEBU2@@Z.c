/*
 * XREFs of ??4RedirectedRecttagMONITORrcWorkReal@tagMONITOR@@QEAAAEBUtagRECT@@AEBU2@@Z @ 0x1C00CDE2C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall tagMONITOR::RedirectedRecttagMONITORrcWorkReal::operator=(__int64 a1, _DWORD *a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 - 28) + 44LL) = *a2;
  *(_DWORD *)(*(_QWORD *)(a1 - 28) + 48LL) = a2[1];
  *(_DWORD *)(*(_QWORD *)(a1 - 28) + 52LL) = a2[2];
  *(_DWORD *)(*(_QWORD *)(a1 - 28) + 56LL) = a2[3];
  return a2;
}
