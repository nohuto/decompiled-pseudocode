/*
 * XREFs of ?ForEachOwningProcess@CAudioSession@@UEAAJP6AXPEAUIAudioProcess@@@Z@Z @ 0x18003E270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003E2E8 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180044D64 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::ForEachOwningProcess(CAudioSession *this, void (*a2)(struct IAudioProcess *))
{
  int OwningProcesses; // eax
  unsigned int v4; // ebx
  _QWORD *i; // rbx
  const char *v6; // r9
  __int64 result; // rax
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = 0LL;
  v9 = 0LL;
  OwningProcesses = CAudioSession::GetOwningProcesses(this, &v8);
  try
  {
    v4 = OwningProcesses;
    if ( OwningProcesses < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x783,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)OwningProcesses);
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(&v8);
      result = v4;
    }
    else
    {
      for ( i = (_QWORD *)v8; i != *((_QWORD **)&v8 + 1); ++i )
        ((void (__fastcall *)(_QWORD))a2)(*i);
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy(&v8);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x78C,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v6);
  }
  return result;
}
