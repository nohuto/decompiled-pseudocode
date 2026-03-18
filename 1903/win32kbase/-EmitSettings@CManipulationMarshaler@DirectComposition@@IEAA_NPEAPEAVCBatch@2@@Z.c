/*
 * XREFs of ?EmitSettings@CManipulationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A855C
 * Callers:
 *     ?EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A8610 (-EmitUpdateCommands@CManipulationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CManipulationMarshaler::EmitSettings(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // bl
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) != 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x20uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 32;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *(_QWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 7) = 0;
      *((_DWORD *)v4 + 1) = 273;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *((_DWORD *)this + 22);
      v4[16] = *((_BYTE *)this + 92) & 1;
      v4[17] = (*((_BYTE *)this + 92) & 2) != 0;
      v4[18] = (*((_BYTE *)this + 92) & 4) != 0;
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 24);
      *((_DWORD *)v4 + 6) = *((_DWORD *)this + 25);
      *((_DWORD *)v4 + 7) = *((_DWORD *)this + 26);
      *((_DWORD *)this + 4) &= ~0x40u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
