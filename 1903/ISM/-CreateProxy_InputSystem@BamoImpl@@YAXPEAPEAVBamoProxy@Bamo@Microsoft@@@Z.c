/*
 * XREFs of ?CreateProxy_InputSystem@BamoImpl@@YAXPEAPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18005C0B0
 * Callers:
 *     ?Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18005EBCC (-Materialize_BamoInputSystemProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateProxy_InputSystem(BamoImpl *this, struct Microsoft::Bamo::BamoProxy **a2)
{
  _QWORD *v3; // rbx

  v3 = operator new(0x98uLL);
  memset_0(v3, 0, 0x98uLL);
  *(_QWORD *)this = v3;
  *v3 = &BamoInputSystemProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &BamoInputSystemProxy::`vftable'{for `IInputSystemProxy'};
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  *((_DWORD *)v3 + 10) = 0;
  *((_WORD *)v3 + 22) = 0;
  v3[2] = &BamoImpl::BamoInputSystemProxyImpl::`vftable';
  v3[6] = 0LL;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  v3[11] = 0LL;
  v3[12] = 0LL;
  v3[13] = 0LL;
  v3[14] = 0LL;
  v3[15] = 0LL;
  v3[16] = 0LL;
  v3[17] = 0LL;
  v3[18] = 0LL;
}
