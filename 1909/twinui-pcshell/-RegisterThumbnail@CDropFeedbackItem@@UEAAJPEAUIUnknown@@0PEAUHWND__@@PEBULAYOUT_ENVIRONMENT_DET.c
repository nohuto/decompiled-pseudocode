/*
 * XREFs of ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1803FCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18002B650 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803821E0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::RegisterThumbnail(
        CDropFeedbackItem *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        HWND a4,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a5)
{
  __int64 *v5; // r14
  struct IApplicationView *v9; // rdx
  int v10; // ebx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rdx
  unsigned int Color; // esi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 WindowForView; // rsi
  __int64 v21; // rbx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v23; // [rsp+80h] [rbp+28h]

  v5 = (__int64 *)((char *)this + 48);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)a5;
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a5 + 1);
  *((_QWORD *)this + 29) = *((_QWORD *)a5 + 4);
  *((_QWORD *)this + 24) = a4;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_3bb2b41c_a03f_4e91_87af_46a21b23a806,
          v5);
  if ( v10 >= 0 )
  {
    if ( a3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
              a3,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              (char *)this + 56);
    }
    if ( v10 >= 0 )
    {
      v11 = *((_DWORD *)this + 17);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              v14 = *v5;
              v15 = (_QWORD *)((char *)this + 184);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
              v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v14 + 104LL))(
                      v14,
                      *((_QWORD *)this + 7),
                      0LL,
                      0x100000001LL,
                      &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                      (char *)this + 184);
              if ( v10 >= 0 )
              {
                (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v15 + 56LL))(*v15, 1LL);
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v15 + 32LL))(*v15, v16, 0LL, 0LL);
              }
            }
            else
            {
              return (unsigned int)-2147467259;
            }
          }
          else
          {
            Color = CImmersiveColor::GetColor(0x498u);
            v18 = *v5;
            LODWORD(v23) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
            HIDWORD(v23) = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
            v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *, GUID *, char *))(*(_QWORD *)v18 + 104LL))(
                    v18,
                    *((_QWORD *)this + 7),
                    Color,
                    v23,
                    &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                    (char *)this + 184);
            if ( v10 >= 0 )
              return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 23)
                                                                                              + 32LL))(
                                     *((_QWORD *)this + 23),
                                     v19,
                                     0LL,
                                     0LL);
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        v10 = -2147467259;
        WindowForView = ApplicationViewHelpers::GetWindowForView(
                          *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 5),
                          v9);
        if ( WindowForView )
        {
          v21 = *v5;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
          v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v21 + 64LL))(
                  v21,
                  *((_QWORD *)this + 7),
                  WindowForView,
                  0LL,
                  0LL,
                  0LL,
                  &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                  (char *)this + 184);
          if ( v10 >= 0 )
          {
            if ( *((_BYTE *)this + 156) )
              (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 1LL);
          }
        }
      }
    }
  }
  return (unsigned int)v10;
}
