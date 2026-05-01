/*
 * XREFs of ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1803E5C44
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803E52B0 (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1803E6C5C (-UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDrop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x1803E59DC (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 */

__int64 __fastcall AppResizeView::QueryResizeApps(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  HRESULT Service; // eax
  unsigned int v9; // ebx
  void *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *(IUnknown **)(a1 + 16),
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
              ppvOut);
  v9 = Service;
  if ( Service >= 0 )
  {
    v18 = 0LL;
    v10 = ppvOut[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v11 = (*(__int64 (__fastcall **)(void *, GUID *, GUID *, __int64 *))(*(_QWORD *)v10 + 80LL))(
            v10,
            &CLSID_AppResizeOperation,
            &GUID_83266822_9e63_4b62_a1b4_75b389df3388,
            &v18);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = AppResizeView::MapResizeDropLocationToResizeAction(v12, a2, &v17);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 40LL))(v18, v17, a3);
        v9 = v11;
        if ( v11 >= 0 )
        {
          v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v18)(
                  v18,
                  &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                  a4);
          v9 = v11;
          if ( v11 >= 0 )
          {
LABEL_12:
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
            goto LABEL_13;
          }
          v13 = 571LL;
        }
        else
        {
          v13 = 570LL;
        }
      }
      else
      {
        v13 = 569LL;
      }
    }
    else
    {
      v13 = 566LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x233,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)Service);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v9;
}
