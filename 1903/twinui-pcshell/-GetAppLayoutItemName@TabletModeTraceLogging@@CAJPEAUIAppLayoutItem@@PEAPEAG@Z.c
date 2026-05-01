/*
 * XREFs of ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1803AC588
 * Callers:
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x1803AC500 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 * Callees:
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x18000F0E0 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803AD354 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 */

__int64 __fastcall TabletModeTraceLogging::GetAppLayoutItemName(struct IAppLayoutItem *a1, unsigned __int16 **a2)
{
  int ViewName; // eax
  unsigned __int16 **v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rsi
  char *v9; // r14
  _WORD *v10; // rax
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int16 v13; // r8
  _WORD *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  _WORD *v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  ApplicationViewTraceLoggingHelpers *v23; // [rsp+60h] [rbp+20h] BYREF

  if ( (*(unsigned int (__fastcall **)(struct IAppLayoutItem *))(*(_QWORD *)a1 + 24LL))(a1) != 1 )
  {
    v8 = 7LL;
    v19 = 0LL;
    v9 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( is_mul_ok(7uLL, 2uLL) )
    {
      v6 = 0;
      v10 = CoTaskMemAlloc(0xEuLL);
      v11 = v10;
      if ( v10 )
      {
        v21 = 7LL;
        v9 = (char *)v10;
        v19 = v10;
        *v10 = 0;
      }
      else
      {
        v6 = -2147024882;
        v11 = 0LL;
      }
      if ( (v6 & 0x80000000) == 0 )
      {
        do
        {
          v12 = v8 - 1;
          if ( v8 == 1 )
            break;
          v13 = *(_WORD *)((char *)v11 + (char *)L"Buffer" - v9);
          if ( !v13 )
            break;
          *v11 = v13;
          --v8;
          ++v11;
        }
        while ( v12 );
        v14 = v11 - 1;
        v20 = 6LL;
        if ( v8 )
          v14 = v11;
        *v14 = 0;
        v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
                (__int64 *)&v19,
                a2);
        v6 = v15;
        if ( v15 >= 0 )
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
          return 0LL;
        }
        v16 = (unsigned int)v15;
        v17 = 493LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
          (const char *)v16);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v19);
        return v6;
      }
    }
    else
    {
      v6 = -2147024362;
    }
    v16 = v6;
    v17 = 492LL;
    goto LABEL_24;
  }
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  ViewName = (*(__int64 (__fastcall **)(struct IAppLayoutItem *, GUID *, ApplicationViewTraceLoggingHelpers **))(*(_QWORD *)a1 + 48LL))(
               a1,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v23);
  v6 = ViewName;
  if ( ViewName >= 0 )
  {
    ViewName = ApplicationViewTraceLoggingHelpers::GetViewName(v23, (struct IApplicationView *)a2, v5);
    v6 = ViewName;
    if ( ViewName < 0 )
    {
      v7 = 485LL;
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    return 0LL;
  }
  v7 = 484LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)ViewName);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  return v6;
}
