/*
 * XREFs of ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000FD00
 * Callers:
 *     ?StopStream@CSubmixImpl@@UEAAJ_K@Z @ 0x1400116F0 (-StopStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?StartStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011790 (-StartStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140011850 (-OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400118F0 (-OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::UpdateActiveStreamCount(CSubmixImpl *this, int a2)
{
  int v3; // edi
  _QWORD *v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 42) = v3 + a2;
  v4 = (_QWORD *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD *, GUID *, _QWORD **))*v4)(v4, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v10);
    v4 = v10;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v4 )
    goto LABEL_9;
  if ( v3 )
  {
    if ( v3 != 1 || *((_DWORD *)this + 42) )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, CSubmixImpl *))(*v4 + 104LL))(v4, this);
    v6 = v5;
    if ( v5 >= 0 )
      goto LABEL_8;
    v8 = 757LL;
  }
  else
  {
    if ( *((_DWORD *)this + 42) != 1 )
      goto LABEL_9;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, CSubmixImpl *))(*v4 + 96LL))(v4, this);
    v6 = v5;
    if ( v5 >= 0 )
    {
LABEL_8:
      v4 = v10;
LABEL_9:
      v6 = 0;
      goto LABEL_10;
    }
    v8 = 752LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v5,
    -2);
  v4 = v10;
LABEL_10:
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v4 + 16LL))(v4, *v4);
  return v6;
}
