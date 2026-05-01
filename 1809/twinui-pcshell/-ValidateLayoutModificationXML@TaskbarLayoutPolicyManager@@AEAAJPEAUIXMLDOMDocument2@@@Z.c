/*
 * XREFs of ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013C0EC
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18013878C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180138B80 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180137F5C (--$_Emplace_reallocate@U-$pair@PEBGPEBG@std@@@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pai.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801381D8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x18013C60C (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4 (-ValidateLayoutFile@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 *a2)
{
  const char *v3; // r9
  char *v4; // rcx
  __int64 v5; // rdx
  char *v6; // rdx
  char *v7; // rdx
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-40h] BYREF
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  char *v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v15; // [rsp+70h] [rbp+8h]

  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/StartLayout";
  *((_QWORD *)&v11 + 1) = StartLayout::Schemas::StartLayoutSchema;
  try
  {
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
      (char **)&v12,
      0LL,
      &v11);
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/TaskbarLayout";
    *((_QWORD *)&v11 + 1) = StartLayout::Schemas::TaskbarLayoutSchema;
    v4 = v13;
    v5 = *((_QWORD *)&v12 + 1);
    if ( v13 == *((char **)&v12 + 1) )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (char **)&v12,
        *((char **)&v12 + 1),
        &v11);
      v4 = v13;
      v6 = (char *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      **((_OWORD **)&v12 + 1) = v11;
      v6 = (char *)(v5 + 16);
      *((_QWORD *)&v12 + 1) = v6;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/FullDefaultLayout";
    *((_QWORD *)&v11 + 1) = StartLayout::Schemas::FullDefaultLayoutSchema;
    if ( v4 == v6 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (char **)&v12,
        v6,
        &v11);
      v4 = v13;
      v7 = (char *)*((_QWORD *)&v12 + 1);
    }
    else
    {
      *(_OWORD *)v6 = v11;
      v7 = v6 + 16;
      *((_QWORD *)&v12 + 1) = v7;
    }
    *(_QWORD *)&v11 = L"http://schemas.microsoft.com/Start/2014/LayoutModification";
    *((_QWORD *)&v11 + 1) = StartLayout::Schemas::LayoutModificationSchema;
    if ( v4 == v7 )
    {
      std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        (char **)&v12,
        v7,
        &v11);
    }
    else
    {
      *(_OWORD *)v7 = v11;
      *((_QWORD *)&v12 + 1) = v7 + 16;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x2B2,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            v3);
    std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v12);
    return v15;
  }
  v8 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v11,
         (__int64)&v12);
  v9 = StartLayout::ValidateLayoutFile(v8, a2);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(&v12);
  return v9;
}
