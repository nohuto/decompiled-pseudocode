/*
 * XREFs of ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180364B78
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1803645A0 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1803646E0 (-FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180365180 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     MakeMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___ @ 0x180363D40 (MakeMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___.c)
 *     _lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_ @ 0x180364014 (_lambda_e6f893affb6bf575c6b684d40d6f796c_--__lambda_e6f893affb6bf575c6b684d40d6f796c_.c)
 *     ?DetermineGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180364660 (-DetermineGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4GestureDi.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x1803648AC (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::ProcessGestureInput(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // r14d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r15d
  __int64 v19; // rdi
  int MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c; // eax
  __int64 v21; // rdx
  int v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h] BYREF
  int v25[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h] BYREF
  __int64 v30; // [rsp+68h] [rbp-18h] BYREF
  int v31; // [rsp+70h] [rbp-10h]
  int v32; // [rsp+74h] [rbp-Ch]
  __int64 v33; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v35; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)v25 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v25);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v4 + 72LL))(
         v4,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         v25);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v27 = v11;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
    v12 = *(_DWORD *)(a1 + 76);
    v13 = 0;
    v24 = 0LL;
    if ( (int)abs32(*(_DWORD *)(a1 + 72)) <= (int)abs32(v12) )
    {
      if ( v12 )
      {
        LOBYTE(v13) = v12 > 0;
        ++v13;
      }
    }
    else
    {
      LOBYTE(v13) = *(_DWORD *)(a1 + 72) > 0;
      v13 += 3;
    }
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a1 + 64) + 24LL))(
            *(_QWORD *)(a1 + 64),
            *(unsigned int *)(a1 + 108),
            &v23);
    v10 = v14;
    if ( v14 < 0 )
    {
      v15 = 323LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v14);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      goto LABEL_39;
    }
    if ( v23 == 0xFFFF )
    {
      v16 = *(_QWORD *)(a1 + 64);
      LODWORD(v35) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v16 + 48LL))(
              v16,
              *(unsigned int *)(a1 + 108),
              *(unsigned int *)(a1 + 112),
              &v35);
      v10 = v14;
      if ( v14 < 0 )
      {
        v15 = 328LL;
        goto LABEL_12;
      }
      switch ( (_DWORD)v35 )
      {
        case 1:
          v13 = 3;
          break;
        case 2:
          v13 = 1;
          break;
        case 3:
          v13 = 2;
          break;
      }
    }
    v17 = *(_DWORD *)(a3 + 4);
    if ( a2 == 3 )
      v18 = (v17 & 1) != 0 ? 7 : 0;
    else
      v18 = MultitaskingViewGestureHandlerHelpers::DetermineGestureAction(v13, *(_BYTE *)a3, v17);
    if ( v18 == 6 )
    {
      if ( (unsigned __int64)(MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                                (MultitaskingViewGestureHandler *)a1,
                                a4)
                            - *(_QWORD *)(a1 + 120)) < *(_QWORD *)(a1 + 136) )
        goto LABEL_37;
      goto LABEL_31;
    }
    if ( v18 != 3 || *(_DWORD *)(a1 + 104) != 2 )
    {
      if ( v18 != 1 )
        goto LABEL_30;
      if ( *(_DWORD *)(a1 + 104) != 4 )
      {
LABEL_31:
        v35 = 0LL;
        v19 = *(_QWORD *)(a1 + 40);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 72LL))(v19, &v35);
        v26 = *(_QWORD *)(a1 + 72);
        v28 = v26;
        v29 = v11;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
        v30 = *(_QWORD *)v25;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v30);
        v33 = v35;
        v31 = v18;
        v32 = v13;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c = MakeMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c_(
                                                                                  &v24,
                                                                                  (__int64)&v28);
        v10 = MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c;
        if ( MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c < 0 )
        {
          v21 = 431LL;
LABEL_35:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
            (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c);
          lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_(&v28);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
          goto LABEL_38;
        }
        MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 24) + 24LL))(
                                                                                  *(_QWORD *)(a1 + 24),
                                                                                  v24,
                                                                                  1LL);
        v10 = MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c;
        if ( MultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c < 0 )
        {
          v21 = 432LL;
          goto LABEL_35;
        }
        *(_DWORD *)(a1 + 104) = v18;
        lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_(&v28);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
LABEL_37:
        v35 = 0LL;
        v10 = 0;
        *(_QWORD *)(a1 + 72) = 0LL;
        goto LABEL_38;
      }
    }
    v18 = 0;
LABEL_30:
    if ( !v18 )
      goto LABEL_37;
    goto LABEL_31;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x136,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v9);
LABEL_39:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v25);
  return v10;
}
