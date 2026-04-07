/*
 * XREFs of ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800270D4
 * Callers:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x180043FDC (-InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z.c)
 *     ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800AFCAC (-RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037508 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlobalLightSet::ValidateUdwmDCompVisual(CGlobalLightSet *this, struct UdwmDcompVisual *a2)
{
  char v2; // di
  char v3; // al
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v6) = HIDWORD(this);
  v2 = 0;
  v3 = 0;
  LODWORD(v6) = 0;
  if ( *((_QWORD *)a2 + 2) && *((_QWORD *)a2 + 7) )
  {
    v4 = *((_QWORD *)a2 + 3);
    v6 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = 1;
    if ( v4 )
      v2 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return v2;
}
