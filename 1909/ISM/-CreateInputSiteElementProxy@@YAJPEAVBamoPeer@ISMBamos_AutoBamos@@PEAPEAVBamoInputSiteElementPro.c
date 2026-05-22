/*
 * XREFs of ?CreateInputSiteElementProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoInputSiteElementProxy@@@Z @ 0x180005A60
 * Callers:
 *     ?Thunk_Materialize_BamoInputSiteElementProxy_0@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800055A0 (-Thunk_Materialize_BamoInputSiteElementProxy_0@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateInputSiteElementProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoInputSiteElementProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0xA8uLL);
  memset_0(v3, 0, 0xA8uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoInputSiteElementProxyImpl::`vftable';
  *((_DWORD *)v3 + 10) = 0;
  *((_WORD *)v3 + 22) = 0;
  *((_DWORD *)v3 + 12) = 0;
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
  v3[19] = 0LL;
  *v3 = &InputSiteElementProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &InputSiteElementProxy::`vftable'{for `IInputSiteElementProxy'};
  result = 0LL;
  v3[20] = 0LL;
  *a2 = (struct BamoInputSiteElementProxy *)v3;
  return result;
}
