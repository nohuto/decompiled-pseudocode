/*
 * XREFs of ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x1801ABFBC
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180165BC0 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McTemplateU0tttttttttttt @ 0x1801AC70C (McTemplateU0tttttttttttt.c)
 */

void __fastcall ComputeScribbleSupportResult::FireEtwEvent(ComputeScribbleSupportResult *this)
{
  unsigned int v1; // r8d
  char v2; // r14

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v1 = *(unsigned __int8 *)this;
    v2 = *((_BYTE *)this + 1);
    McTemplateU0tttttttttttt(
      (v1 >> 3) & 1,
      (v1 >> 4) & 1,
      v1 & 1,
      (v1 >> 1) & 1,
      (v1 & 4) != 0,
      (*(_BYTE *)this & 8) != 0,
      (v1 & 0x10) != 0,
      (*(_BYTE *)this & 0x20) != 0,
      (v1 & 0x40) != 0,
      *(_BYTE *)this >> 7,
      v2 & 1,
      (v2 & 2) != 0,
      (v2 & 4) != 0,
      (v2 & 8) != 0);
  }
}
