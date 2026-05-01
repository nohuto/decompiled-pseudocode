/*
 * XREFs of ?GetOEMLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x1801E66E4
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x1801E62A0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801E6DA8 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??$?0V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x18016284C (--$-0V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HStringReference.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1801E68B8 (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 *     ?LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ @ 0x1801E69E8 (-LoadOEMLayoutFilePath@PWSLayoutPolicyManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::GetOEMLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  int OEMLayoutFilePath; // eax
  unsigned int v5; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  OEMLayoutFilePath = PWSLayoutPolicyManager::LoadOEMLayoutFilePath((PWSLayoutPolicyManager *)this);
  v5 = OEMLayoutFilePath;
  if ( OEMLayoutFilePath >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, this + 7);
    return PWSLayoutPolicyManager::LoadLayoutXMLFromFilePath(
             (struct Microsoft::WRL::Wrappers::HStringReference *)&hstringHeader,
             a2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)OEMLayoutFilePath);
    return v5;
  }
}
