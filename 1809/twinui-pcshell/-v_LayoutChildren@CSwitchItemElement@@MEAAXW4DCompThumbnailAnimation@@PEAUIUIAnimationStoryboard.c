/*
 * XREFs of ?v_LayoutChildren@CSwitchItemElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803032A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802EED50 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1802EEDD4 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z @ 0x180302BF0 (-_CreateLabel@CSwitchItemElement@@IEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z @ 0x180302CB8 (-_GetLayoutRects@CSwitchItemElement@@IEAAXPEAUCRect@Geometry@@00@Z.c)
 */

void __fastcall CSwitchItemElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+40h] [rbp-9h] BYREF
  int v15; // [rsp+48h] [rbp-1h]
  int v16; // [rsp+4Ch] [rbp+3h]
  __int128 v17; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp+17h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp+27h] BYREF

  v14 = *(_QWORD *)(a1 + 568);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v13, &v14, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v6 = *(_DWORD *)(a1 + 60);
  v7 = *(_QWORD *)(a1 + 88);
  LODWORD(v14) = *(_DWORD *)(a1 + 56);
  v15 = v14 + 1;
  HIDWORD(v14) = v6;
  v16 = v6 + 1;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v7 + 24LL))(v7, &v14, a2, a3);
  v8 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v9 = *(_QWORD *)(a1 + 624);
  v15 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v16 = v8;
  v14 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, &v14, 0LL, 0LL);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v17 = 0LL;
  CSwitchItemElement::_GetLayoutRects(
    (CSwitchItemElement *)a1,
    (struct Geometry::CRect *)v18,
    (struct Geometry::CRect *)&v17,
    (struct Geometry::CRect *)v19);
  v10 = *(_QWORD *)(a1 + 600);
  if ( v10 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 104LL))(v10, v18);
  if ( *(_QWORD *)(a1 + 632) != __PAIR64__(HIDWORD(v17) - DWORD1(v17), DWORD2(v17) - (int)v17) )
  {
    LODWORD(v14) = DWORD2(v17) - v17;
    HIDWORD(v14) = HIDWORD(v17) - DWORD1(v17);
    CSwitchItemElement::_CreateLabel((CSwitchItemElement *)a1, (const struct Geometry::CSize *)&v14);
  }
  v11 = *(_QWORD *)(a1 + 616);
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, &v17, 0LL, 0LL);
  v12 = *(_QWORD *)(a1 + 608);
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 104LL))(v12, v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v13);
}
