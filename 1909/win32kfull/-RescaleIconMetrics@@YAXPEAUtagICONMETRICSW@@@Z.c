/*
 * XREFs of ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01D8FA8
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D93FC (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1, __int64 a2)
{
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // ax
  INT v5; // ebx

  v3 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 284);
  v4 = *(_WORD *)(gpsi + 6998LL);
  if ( v3 != v4 )
  {
    v5 = v3;
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), v4, v3);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v5);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v5);
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 6998LL), v5);
  }
}
