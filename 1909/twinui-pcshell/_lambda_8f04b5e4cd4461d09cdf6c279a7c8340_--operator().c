/*
 * XREFs of _lambda_8f04b5e4cd4461d09cdf6c279a7c8340_::operator() @ 0x1800A5274
 * Callers:
 *     ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802186B0 (-Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18021714C (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewList.c)
 */

__int64 __fastcall lambda_8f04b5e4cd4461d09cdf6c279a7c8340_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, GUID *, GUID *, __int64); // rbp
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = **(__int64 ***)a1;
  v4 = *(_QWORD *)(v2 + 112);
  v5 = *v3;
  *(_QWORD *)(v2 + 112) = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64))(v5 + 24);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v7 = v6(v3, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab, &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab, v2 + 112);
  if ( v7 < 0 )
  {
    v10 = 56LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *>(
         (unsigned int)*(_QWORD *)(a1 + 8) + 120,
         *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL),
         v8,
         v9,
         *(_QWORD *)(a1 + 8));
  if ( v7 < 0 )
  {
    v10 = 61LL;
    goto LABEL_5;
  }
  return 0LL;
}
