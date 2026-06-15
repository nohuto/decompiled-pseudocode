/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18003E610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800626D0 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ??$copy_to@UIVolumeStrip@@@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVolumeStrip@@@Z @ 0x1800627AC (--$copy_to@UIVolumeStrip@@@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180066D78 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BB7A0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ??I?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ @ 0x1800C5400 (--I-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  _QWORD *i; // rsi
  const WCHAR *v10; // rax
  __int64 v11; // rcx
  char v12; // al
  struct IVolumeStrip **v13; // rax
  int DeviceVolumeStrip; // eax
  unsigned int v15; // ebx
  const char *v16; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknown *v19; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+88h] [rbp+10h] BYREF
  PCNZWCH lpString2; // [rsp+98h] [rbp+20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v20 = v6;
  v19 = 0LL;
  v7 = (_QWORD *)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v19);
  lpString2 = a2;
  *v7 = 0LL;
  EnterCriticalSection(v6);
  try
  {
    v8 = (_QWORD *)*((_QWORD *)this + 7);
    for ( i = (_QWORD *)*((_QWORD *)this + 8); v8 != i; ++v8 )
    {
      v10 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      if ( CompareStringW(0x7Fu, 1u, v10, -1, lpString2, -1) == 2 )
        break;
    }
    if ( v8 == *((_QWORD **)this + 8) )
    {
      if ( v6 )
        LeaveCriticalSection(v6);
      v12 = 0;
    }
    else
    {
      v11 = *v8;
      if ( *v8 )
      {
        *v7 = v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      else
      {
        *v7 = 0LL;
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v12 = 1;
    }
    if ( v12
      || (v13 = (struct IVolumeStrip **)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v19),
          DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, v13),
          v15 = DeviceVolumeStrip,
          DeviceVolumeStrip >= 0) )
    {
      if ( HasTooManyReferences(v19) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
        result = 2147942414LL;
      }
      else
      {
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::copy_to<IVolumeStrip>(&v19, a3);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)DeviceVolumeStrip);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v20);
      result = v15;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA7,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
                           v16);
  }
  return result;
}
