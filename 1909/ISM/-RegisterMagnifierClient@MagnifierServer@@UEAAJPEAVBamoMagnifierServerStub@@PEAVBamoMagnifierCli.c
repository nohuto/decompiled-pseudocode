/*
 * XREFs of ?RegisterMagnifierClient@MagnifierServer@@UEAAJPEAVBamoMagnifierServerStub@@PEAVBamoMagnifierClientProxy@@@Z @ 0x180070250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierServer::RegisterMagnifierClient(
        MagnifierServer *this,
        struct BamoMagnifierServerStub *a2,
        struct BamoMagnifierClientProxy *a3)
{
  void (__fastcall ***v3)(_QWORD, struct BamoMagnifierClientProxy *); // rcx

  v3 = (void (__fastcall ***)(_QWORD, struct BamoMagnifierClientProxy *))*((_QWORD *)this + 7);
  if ( v3 )
    (**v3)(v3, a3);
  return 0LL;
}
