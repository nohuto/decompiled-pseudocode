/*
 * XREFs of ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18037CD8C
 * Callers:
 *     ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x18037BCF0 (-Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z.c)
 *     ?NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z @ 0x18037BF20 (-NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180379D84 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

__int64 __fastcall CMultitaskingViewFrame::_SetFocusToControl(_QWORD *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 *v4; // rbx
  __int64 v5; // r10
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD *); // rcx
  int v11; // edx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v19)(_QWORD, __int64, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = a1 + 313;
  v5 = a1[313];
  if ( v5 )
  {
    v10 = 0LL;
    v19 = 0LL;
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 || v12 == 2 )
        {
          v9 = -2147467263;
          v13 = 789LL;
          v14 = 2147500033LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
            (const char *)v14);
          goto LABEL_16;
        }
        goto LABEL_12;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 288LL))(v5, a1[314]);
      v15 = Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(a1 + 315, (__int64 *)&v19);
      v9 = v15;
      if ( v15 < 0 )
      {
        v13 = 783LL;
LABEL_14:
        v14 = (unsigned int)v15;
        goto LABEL_15;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v19, v4);
      LOBYTE(v16) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v4 + 296LL))(*v4, v16);
    }
    v10 = v19;
LABEL_12:
    v15 = (**v10)(v10, a3, a4);
    v9 = v15;
    if ( v15 >= 0 )
    {
LABEL_16:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      return v9;
    }
    v13 = 793LL;
    goto LABEL_14;
  }
  v9 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2FE,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x8007139FLL);
  return v9;
}
