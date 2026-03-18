/*
 * XREFs of ?EmitDisableMITConfigure@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009A72C
 * Callers:
 *     ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009A450 (-EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitDisableMITConfigure(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // rcx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    return 1;
  if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v5) )
  {
    v4 = (char *)v5;
    *(_DWORD *)v5 = 16;
    *(_QWORD *)(v4 + 4) = 0LL;
    *((_DWORD *)v4 + 3) = 0;
    *((_DWORD *)v4 + 1) = 144;
    *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
    v4[12] = *((_BYTE *)this + 54);
    *((_DWORD *)this + 4) &= ~0x1000u;
    return 1;
  }
  return 0;
}
