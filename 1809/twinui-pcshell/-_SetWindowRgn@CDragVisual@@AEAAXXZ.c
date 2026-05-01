/*
 * XREFs of ?_SetWindowRgn@CDragVisual@@AEAAXXZ @ 0x180374AE0
 * Callers:
 *     ?SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z @ 0x180373300 (-SetSite@CDragVisual@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x18003373C (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180186F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YA.c)
 */

void __fastcall CDragVisual::_SetWindowRgn(CDragVisual *this)
{
  HRGN hRgn; // [rsp+40h] [rbp+8h] BYREF
  HRGN RectRgn; // [rsp+48h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 280) )
  {
    RectRgn = CreateRectRgn(
                _mm_cvtsi128_si32(*((__m128i *)this + 13)) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_QWORD *)this + 26)),
                (unsigned int)*((_QWORD *)this + 27) - *((_DWORD *)this + 48),
                *((_DWORD *)this + 49) + HIDWORD(*((_OWORD *)this + 13)));
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
      &hRgn,
      &RectRgn);
    if ( hRgn )
    {
      if ( SetWindowRgn(*((HWND *)this + 19), hRgn, 1) )
      {
        hRgn = 0LL;
        *((_BYTE *)this + 280) = 1;
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>((void **)&hRgn);
  }
}
