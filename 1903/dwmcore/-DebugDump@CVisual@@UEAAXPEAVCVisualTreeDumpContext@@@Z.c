/*
 * XREFs of ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801C2BA0
 * Callers:
 *     ?DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801FB9E0 (-DebugDump@CSpriteVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x180214110 (-DebugDump@CCursorVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1802193E0 (-DebugDump@CWindowNode@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18007E9BC (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x180087C60 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x1800D3798 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18016BB78 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18016BBB4 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z @ 0x180176858 (--$AddProperty@M@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ??$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z @ 0x1801C1EA0 (--$AddChildLink@VCVisual@@@CVisualTreeDumpContext@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCContent@@_N@Z @ 0x1801C1EFC (--$AddLinkInternal@VCContent@@@CVisualTreeDumpContext@@AEAAXAEBV-$basic_string@DU-$char_traits@D.c)
 *     ??$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x1801C2008 (--$AddProperty@_N@CVisualTreeDumpContext@@QEAAXAEBV-$basic_string@DU-$char_traits@D@std@@V-$allo.c)
 */

void __fastcall CVisual::DebugDump(CVisual *this, struct CVisualTreeDumpContext *a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  _BYTE v10[4]; // [rsp+30h] [rbp-69h] BYREF
  float v11; // [rsp+34h] [rbp-65h] BYREF
  float v12; // [rsp+38h] [rbp-61h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v14; // [rsp+80h] [rbp-19h]
  _QWORD v15[4]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v16; // [rsp+B0h] [rbp+17h] BYREF

  std::string::string(&v16, (__int64)"CVisual");
  std::string::operator=(a2, &v16);
  std::string::_Tidy_deallocate((__int64)&v16);
  std::string::string(&v16, (__int64)"content");
  CVisualTreeDumpContext::AddLinkInternal<CContent>((__int64 *)a2, (__int64)&v16, *((_QWORD *)this + 32));
  std::string::_Tidy_deallocate((__int64)&v16);
  std::string::string(&v16, (__int64)"opacity");
  CVisual::GetOpacityInternal(this);
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, &v16);
  std::string::_Tidy_deallocate((__int64)&v16);
  std::string::string(&v16, (__int64)"visible");
  CVisualTreeDumpContext::AddProperty<bool>((__int64)a2, &v16, (*((_BYTE *)this + 95) & 4) != 0);
  std::string::_Tidy_deallocate((__int64)&v16);
  v4 = 0LL;
  v5 = *((_QWORD *)a2 + 15);
  v13[0] = _xmm;
  v13[1] = _xmm;
  v13[2] = _xmm;
  v13[3] = _xmm;
  v14 = 32085;
  CVisual::GetWorldTransform((struct _LIST_ENTRY *)this, v5, 0, (__int64)v13, v10, 0LL);
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v13, (__int64)this + 164, (float *)&v16);
  std::string::string(v15, (__int64)"boundsLeft");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  std::string::string(v15, (__int64)"boundsRight");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  std::string::string(v15, (__int64)"boundsTop");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  std::string::string(v15, (__int64)"boundsBottom");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v13, &v11, &v12);
  std::string::string(v15, (__int64)"scaleX");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  std::string::string(v15, (__int64)"scaleY");
  CVisualTreeDumpContext::AddProperty<float>((__int64)a2, v15);
  std::string::_Tidy_deallocate((__int64)v15);
  v6 = (__int64 *)((char *)this + 72);
  v7 = *((_QWORD *)this + 9);
  if ( (v7 & 2) != 0 )
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v8 = v7 & 1;
  if ( v8 )
  {
    do
    {
      v9 = CPtrArrayBase::operator[](v6, v4);
      CVisualTreeDumpContext::AddChildLink<CVisual>((__int64)a2, v9);
      ++v4;
    }
    while ( v4 < v8 );
  }
}
