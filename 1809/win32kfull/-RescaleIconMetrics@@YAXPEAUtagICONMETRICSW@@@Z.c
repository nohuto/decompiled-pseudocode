/*
 * XREFs of ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01C5D84
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C61D8 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1)
{
  unsigned __int16 v2; // r8
  unsigned __int16 v3; // ax
  INT v4; // ebx

  v2 = *(_WORD *)(PsGetCurrentProcessWin32Process(a1) + 284);
  v3 = *(_WORD *)(gpsi + 6998LL);
  if ( v2 != v3 )
  {
    v4 = v2;
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), v3, v2);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v4);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v4);
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 6998LL), v4);
  }
}
