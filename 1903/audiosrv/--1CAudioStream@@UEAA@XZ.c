/*
 * XREFs of ??1CAudioStream@@UEAA@XZ @ 0x1800D9E64
 * Callers:
 *     ??_ECAudioStream@@UEAAPEAXI@Z @ 0x1800DA010 (--_ECAudioStream@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DDDC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioStream::~CAudioStream(CAudioStream *this, void *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 39);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 38);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (__int64 *)*((_QWORD *)this + 33);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 34);
    if ( v5 != v6 )
    {
      do
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v5++);
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 33);
    }
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 35) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v7 = *((_QWORD *)this + 26);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 25);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 24);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 23);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 22);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 21);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v9 = (void *)*((_QWORD *)this + 14);
  if ( v9 )
    operator delete(v9);
  v10 = (void *)*((_QWORD *)this + 13);
  if ( v10 )
    operator delete(v10);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_QWORD *)this + 3) = &CUnknown::`vftable';
}
