/*
 * XREFs of ?FireEtwEvent@ComputeScribbleSupportResult@@QEAAXXZ @ 0x18022C5BC
 * Callers:
 *     ?CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180207CF0 (-CheckComputeScribbleSupportForCurrentFrame@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McTemplateU0ttttttttttt @ 0x18022CD18 (McTemplateU0ttttttttttt.c)
 */

void __fastcall ComputeScribbleSupportResult::FireEtwEvent(ComputeScribbleSupportResult *this)
{
  unsigned int v1; // r8d

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    v1 = *(unsigned __int8 *)this;
    McTemplateU0ttttttttttt(
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
      *((_BYTE *)this + 1) & 1,
      (*((_BYTE *)this + 1) & 2) != 0,
      (*((_BYTE *)this + 1) & 4) != 0);
  }
}
