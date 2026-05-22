/*
 * XREFs of ?CreateControllerNavigationClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180070ED8
 * Callers:
 *     ?CreateControllerNavigationClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18005B524 (-CreateControllerNavigationClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVB.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C41C (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreateControllerNavigationClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoControllerNavigationClientProxy **a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  v3 = operator new(0x58uLL);
  memset_0(v3, 0, 0x50uLL);
  *((_DWORD *)v3 + 6) = 0;
  v3[4] = 0LL;
  v3[2] = &BamoImpl::BamoControllerNavigationClientProxyImpl::`vftable';
  *((_DWORD *)v3 + 10) = 0;
  *((_WORD *)v3 + 22) = 0;
  *((_BYTE *)v3 + 48) = 0;
  *((_DWORD *)v3 + 13) = 0;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  *v3 = &ControllerNavigationClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v3[1] = &ControllerNavigationClientProxy::`vftable'{for `IControllerNavigationClientProxy'};
  result = 0LL;
  *((_BYTE *)v3 + 80) = 0;
  *a2 = (struct BamoControllerNavigationClientProxy *)v3;
  return result;
}
