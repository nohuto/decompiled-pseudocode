/*
 * XREFs of ?RegisterStreamVolumeNotifications@CAudioStream@@UEAAJPEAUIAudioStreamVolumeCallback@@@Z @ 0x1800DA4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9710 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioStream::RegisterStreamVolumeNotifications(
        CAudioStream *this,
        struct IAudioStreamVolumeCallback *a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  char *v6; // rdx
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioStreamVolumeCallback *v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h]

  if ( a2 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 216);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
    v10 = v5;
    v9 = a2;
    try
    {
      (*(void (__fastcall **)(struct IAudioStreamVolumeCallback *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (char *)*((_QWORD *)this + 33);
      if ( *((char **)this + 34) == v6 )
      {
        std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
          (char **)this + 32,
          v6,
          (__int64 *)&v9);
      }
      else
      {
        v9 = 0LL;
        *(_QWORD *)v6 = a2;
        *((_QWORD *)this + 33) += 8LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
      if ( v5 )
        LeaveCriticalSection(v5);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x302,
                             (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                             v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FD,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  return result;
}
