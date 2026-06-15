/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000DD48
 * Callers:
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14000F480 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x14000F540 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F840 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F900 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 42) = v3 + a2;
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v10);
    v4 = v10;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v4 )
    goto LABEL_7;
  if ( v3 )
  {
    if ( v3 != 1 )
      goto LABEL_7;
    if ( *((_DWORD *)this + 42) )
      goto LABEL_7;
    v5 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v4 + 104LL))(v4, this);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_7;
    v8 = 762LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v5,
      -2);
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 42) == 1 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, CSubmixImpl *))(*(_QWORD *)v4 + 96LL))(v4, this);
    v6 = v5;
    if ( v5 < 0 )
    {
      v8 = 757LL;
      goto LABEL_15;
    }
  }
LABEL_7:
  v6 = 0;
LABEL_8:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v10);
  return v6;
}
