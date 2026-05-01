/*
 * XREFs of ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803DB5B8
 * Callers:
 *     ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803DB060 (-EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180439E88 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z @ 0x18043A494 (-_ConsolidateBuffers@CAppLayoutOperation@@IEAAJPEAUIAppLayoutItem@@@Z.c)
 */

__int64 __fastcall AppSwitchOperation::QueryEvictApp(__int64 a1, __int64 a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct IAppLayoutItem *v14; // [rsp+68h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, unsigned int *))(**(_QWORD **)(a1 + 64) + 152LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         0LL,
         &v13);
  if ( v6 < 0 )
  {
    v7 = 449LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 248LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         0LL,
         1LL);
  if ( v6 < 0 )
  {
    v7 = 452LL;
    goto LABEL_3;
  }
  CAppLayoutOperation::_AddAnimationData(a1 + 24, a2, 8 * (a3 & 1u) + 2);
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), 4LL) > 1 )
  {
    v14 = 0LL;
    v9 = *(_QWORD *)(a1 + 64);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutItem **))(*(_QWORD *)v9 + 96LL))(
            v9,
            v13,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            &v14);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 459LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      return (unsigned int)v6;
    }
    v10 = CAppLayoutOperation::_ConsolidateBuffers((CAppLayoutOperation *)(a1 + 24), v14);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 460LL;
      goto LABEL_12;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  }
  return 0LL;
}
