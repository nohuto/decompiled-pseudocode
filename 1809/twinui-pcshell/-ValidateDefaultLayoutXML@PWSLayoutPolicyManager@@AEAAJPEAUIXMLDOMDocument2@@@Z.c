/*
 * XREFs of ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A01B0
 * Callers:
 *     ?CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z @ 0x18019F2B0 (-CanApplyPenWorkspaceLayout@PWSLayoutPolicyManager@@UEAAJW4PenWorkspaceLayoutType@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x18013C60C (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@PEBGPEBG@std@@@1@AEBV?$allocator@U?$pair@PEBGPEBG@std@@@1@@Z @ 0x18019F140 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@V-$initialize.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PWSLayoutPolicyManager::ValidateDefaultLayoutXML(
        PWSLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  int v7[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v8; // [rsp+30h] [rbp-78h]
  int v9[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v10; // [rsp+50h] [rbp-58h]
  __int64 v11; // [rsp+58h] [rbp-50h]
  _QWORD v12[6]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+90h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v11 = -2LL;
  v12[0] = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  v12[1] = StartLayout::Schemas::StartLayoutSchema;
  v12[2] = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
  v12[3] = StartLayout::Schemas::TaskbarLayoutSchema;
  v12[4] = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
  v12[5] = StartLayout::Schemas::FullDefaultLayoutSchema;
  *(_QWORD *)v7 = v12;
  *(_QWORD *)&v7[2] = &v13;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
      v9,
      (_OWORD **)v7);
    *(_OWORD *)v7 = *(_OWORD *)v9;
    v8 = v10;
    *(_OWORD *)v9 = 0LL;
    v10 = 0LL;
    v3 = StartLayout::ValidateLayoutFile(v7, a2);
    v4 = v3;
    if ( v3 >= 0 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v9);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
        (const char *)(unsigned int)v3);
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy((__int64)v9);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12A,
                           (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
                           v5);
  }
  return result;
}
