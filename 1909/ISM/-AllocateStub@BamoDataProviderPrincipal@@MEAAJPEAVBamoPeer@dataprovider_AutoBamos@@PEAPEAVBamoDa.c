/*
 * XREFs of ?AllocateStub@BamoDataProviderPrincipal@@MEAAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataProviderStub@@@Z @ 0x18002A0C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoDataProviderPrincipal::AllocateStub(
        BamoDataProviderPrincipal *this,
        struct dataprovider_AutoBamos::BamoPeer *a2,
        struct BamoDataProviderStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x58uLL);
  memset_0(v4, 0, 0x58uLL);
  *v4 = &BamoDataProviderStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoDataProviderStub::`vftable'{for `IDataProviderStub'};
  *((_DWORD *)v4 + 6) = 1;
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  v4[7] = 0LL;
  v4[2] = &BamoImpl::BamoDataProviderStubImpl::`vftable';
  result = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  *((_DWORD *)v4 + 20) = 0;
  *a3 = (struct BamoDataProviderStub *)v4;
  return result;
}
