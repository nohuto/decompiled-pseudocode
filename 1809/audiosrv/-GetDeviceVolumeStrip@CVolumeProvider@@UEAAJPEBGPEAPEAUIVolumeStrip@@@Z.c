/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18000F660
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18005E960 (-CreateDeviceVolumeStrip@CVolumeProvider@@AEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ??$copy_to@UIVolumeStrip@@@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIVolumeStrip@@@Z @ 0x18005EA3C (--$copy_to@UIVolumeStrip@@@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEA.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x1800641EC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ @ 0x1800BA8A4 (--I-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIVolumeStrip@@XZ.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800BBCA8 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
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
  int lpString2; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IUnknown *v20; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+88h] [rbp+10h] BYREF
  PCNZWCH v22; // [rsp+98h] [rbp+20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v21 = v6;
  v20 = 0LL;
  v7 = (_QWORD *)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v20);
  v22 = a2;
  *v7 = 0LL;
  EnterCriticalSection(v6);
  try
  {
    v8 = (_QWORD *)*((_QWORD *)this + 7);
    for ( i = (_QWORD *)*((_QWORD *)this + 8); v8 != i; ++v8 )
    {
      v10 = (const WCHAR *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      if ( CompareStringW(0x7Fu, 1u, v10, -1, v22, -1) == 2 )
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
      || (v13 = (struct IVolumeStrip **)wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::operator&(&v20),
          DeviceVolumeStrip = CVolumeProvider::CreateDeviceVolumeStrip(this, a2, v13),
          v15 = DeviceVolumeStrip,
          DeviceVolumeStrip >= 0) )
    {
      if ( HasTooManyReferences(v20) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v21);
        result = 2147942414LL;
      }
      else
      {
        wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::copy_to<IVolumeStrip>(&v20, a3);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v21);
        result = 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)DeviceVolumeStrip,
        lpString2);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v21);
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
