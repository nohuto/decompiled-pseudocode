/*
 * XREFs of ??_GCPerStreamVolumeAudioStream@@UEAAPEAXI@Z @ 0x18004A470
 * Callers:
 *     ??_ECPerStreamVolumeAudioStream@@WBI@EAAPEAXI@Z @ 0x18006BB90 (--_ECPerStreamVolumeAudioStream@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DDDC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

CPerStreamVolumeAudioStream *__fastcall CPerStreamVolumeAudioStream::`scalar deleting destructor'(
        CPerStreamVolumeAudioStream *this,
        void *a2)
{
  char v2; // si
  std::_Ref_count_base *v4; // rcx
  void *v5; // rdi
  HANDLE ProcessHeap; // rax
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  char *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx
  char *v16; // rbp

  v2 = (char)a2;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 57);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (void *)*((_QWORD *)this + 53);
  if ( v5 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
  }
  v7 = (wil::details *)*((_QWORD *)this + 39);
  if ( v7 )
    wil::details::CloseHandle(v7, a2);
  v8 = (wil::details *)*((_QWORD *)this + 38);
  if ( v8 )
    wil::details::CloseHandle(v8, a2);
  v9 = (char *)*((_QWORD *)this + 33);
  if ( v9 )
  {
    v16 = (char *)*((_QWORD *)this + 34);
    if ( v9 != v16 )
    {
      do
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v9);
        v9 += 8;
      }
      while ( v9 != v16 );
      v9 = (char *)*((_QWORD *)this + 33);
    }
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 35) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 25);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 192);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 184);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 176);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 168);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v12 = (void *)*((_QWORD *)this + 14);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_QWORD *)this + 13);
  if ( v13 )
    operator delete(v13);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((char *)this + 72);
  v14 = *((_QWORD *)this + 7);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_QWORD *)this + 3) = &CUnknown::`vftable';
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x1D0);
  return this;
}
