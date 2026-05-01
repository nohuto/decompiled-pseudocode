/*
 * XREFs of ?UpdateDropFeedback@AppResizeView@@AEAAJW4ResizeDropLocation@@0AEBUCPoint@Geometry@@W4UpdateDropFeedbackFlags@@@Z @ 0x1803616C0
 * Callers:
 *     ?InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x180360140 (-InitAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     ?UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z @ 0x1803614D8 (-UpdateAppResizeData@AppResizeView@@AEAAJAEBUCPoint@Geometry@@W4UpdateAppResizeDataFlags@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIObjectArray@@@?$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@@Details@12@@Z @ 0x18035A20C (--$As@UIObjectArray@@@-$ComPtr@UIAppLayoutOperation@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x1803604A8 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction@@@Z @ 0x18036050C (-MapResizeDropLocationToResizeAction@AppResizeView@@AEAAJW4ResizeDropLocation@@PEAW4ResizeAction.c)
 *     ?QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayoutOperation@@@Z @ 0x180360774 (-QueryResizeApps@AppResizeView@@AEAAJW4ResizeDropLocation@@AEBUCPoint@Geometry@@PEAPEAUIAppLayou.c)
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x180361A28 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18036DF24 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AppResizeView::UpdateDropFeedback(__int64 a1, int a2, int a3, int *a4, char a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  const struct _GUID *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  char v14; // r14
  unsigned int v15; // edi
  int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // r12d
  int v20; // ebx
  bool v21; // zf
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 *v28; // [rsp+30h] [rbp-50h] BYREF
  void *v29; // [rsp+38h] [rbp-48h] BYREF
  __int64 v30; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h] BYREF
  __int64 v33; // [rsp+58h] [rbp-28h] BYREF
  struct tagRECT v34; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  LODWORD(v28) = a2;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  v8 = AppResizeView::QueryResizeApps(a1, a3, (__int64)a4, &v30);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v33 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IAppLayoutOperation>::As<IObjectArray>(&v30, &v33);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x164,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
        (const char *)(unsigned int)v10);
LABEL_38:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
      goto LABEL_39;
    }
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v12 = CDropFeedbackList_CreateInstance(v11, &v29);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v14 = a5;
      if ( (a5 & 1) != 0 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v31);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 365LL;
          goto LABEL_32;
        }
        v15 = 0;
        if ( v31 )
        {
          v16 = (int)v28;
          do
          {
            v17 = v33;
            v28 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
            if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 **))(*(_QWORD *)v17 + 32LL))(
                   v17,
                   v15,
                   &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
                   &v28) >= 0 )
            {
              v18 = (__int64)v28;
              v32 = 0LL;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
              if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v18 + 32LL))(
                     v18,
                     &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                     &v32) >= 0 )
              {
                v19 = v32;
                v34 = 0LL;
                v20 = 16;
                if ( a3 == v16 )
                  v20 = 256;
                v21 = (*(unsigned int (**)(void))(*v28 + 88))() == 0;
                v22 = *v28;
                if ( v21 )
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v22 + 56))(v28, 0LL, &v34);
                  v23 = v34.left - v34.right;
                  if ( a3 )
                    v23 = v34.right - v34.left;
                  v34.left += v23;
                  v20 |= 0x200u;
                  v34.right += v23;
                }
                else
                {
                  (*(void (__fastcall **)(__int64 *, _QWORD, struct tagRECT *))(v22 + 72))(v28, 0LL, &v34);
                }
                (*(void (__fastcall **)(void *, _QWORD, _QWORD, struct tagRECT *, int))(*(_QWORD *)v29 + 88LL))(
                  v29,
                  v19,
                  0LL,
                  &v34,
                  v20);
              }
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
            ++v15;
          }
          while ( v15 < v31 );
          v14 = a5;
        }
      }
      if ( (v14 & 2) != 0
        && (v24 = *a4,
            *(_QWORD *)&v34.left = 0LL,
            *(_QWORD *)&v34.right = 0LL,
            AppResizeView::MakeDragGutterRect((AppResizeView *)a1, v24, &v34),
            v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, _DWORD))(*(_QWORD *)v29 + 88LL))(
                    v29,
                    100LL,
                    2LL,
                    &v34,
                    0),
            v9 = v12,
            v12 < 0) )
      {
        v13 = 420LL;
      }
      else
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 56) + 32LL))(
                *(_QWORD *)(a1 + 56),
                v29,
                0LL);
        v9 = v12;
        if ( v12 >= 0 )
        {
          v25 = v30;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 72));
          v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 48LL))(v25, a1 + 72);
          v9 = v12;
          if ( v12 >= 0 )
          {
            if ( (v14 & 4) != 0 && (int)AppResizeView::MapResizeDropLocationToResizeAction(v26, a3, &v28) >= 0 )
              AppResizeView::UpdateUIADropEffect(a1, v30, (unsigned int)v28);
            v9 = 0;
            goto LABEL_37;
          }
          v13 = 424LL;
        }
        else
        {
          v13 = 423LL;
        }
      }
    }
    else
    {
      v13 = 359LL;
    }
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v12);
LABEL_37:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x161,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v8);
LABEL_39:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  return v9;
}
