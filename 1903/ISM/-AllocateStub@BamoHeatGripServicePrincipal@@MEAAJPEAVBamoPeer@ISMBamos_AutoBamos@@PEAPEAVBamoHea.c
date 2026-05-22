/*
 * XREFs of ?AllocateStub@BamoHeatGripServicePrincipal@@MEAAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoHeatGripServiceStub@@@Z @ 0x180008FC0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoHeatGripServicePrincipal::AllocateStub(
        BamoHeatGripServicePrincipal *this,
        struct ISMBamos_AutoBamos::BamoPeer *a2,
        struct BamoHeatGripServiceStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoHeatGripServiceStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoHeatGripServiceStub::`vftable'{for `IHeatGripServiceStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  *((_DWORD *)v4 + 6) = 1;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoAsyncResult_string_StubImpl::`vftable';
  result = 0LL;
  *a3 = (struct BamoHeatGripServiceStub *)v4;
  return result;
}
