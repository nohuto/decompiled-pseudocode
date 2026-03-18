/*
 * XREFs of ?EmitUpdateCommands@CDesktopTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009B8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitScreenCursor@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009B974 (-EmitScreenCursor@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDisableStereoRendering@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009B9EC (-EmitDisableStereoRendering@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitEnableClear@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009BA58 (-EmitEnableClear@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDcompTargetGroup@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009BAC4 (-EmitDcompTargetGroup@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitRoot@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009BB38 (-EmitRoot@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitDisableMITConfigure@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009BBAC (-EmitDisableMITConfigure@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009BC18 (-EmitCreate@CDesktopTargetMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CDesktopTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CDesktopTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CDesktopTargetMarshaler::EmitCreate(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitDisableMITConfigure(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitRoot(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitDcompTargetGroup(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitEnableClear(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitDisableStereoRendering(this, a2)
    && DirectComposition::CDesktopTargetMarshaler::EmitScreenCursor(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x800) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v7) )
        return v4;
      v6 = (char *)v7;
      *(_DWORD *)v7 = 28;
      *(_QWORD *)(v6 + 4) = 0LL;
      *(_QWORD *)(v6 + 12) = 0LL;
      *(_QWORD *)(v6 + 20) = 0LL;
      *((_DWORD *)v6 + 1) = 148;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      *(_OWORD *)(v6 + 12) = *((_OWORD *)this + 5);
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    return 1;
  }
  return v4;
}
