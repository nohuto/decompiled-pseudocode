/*
 * XREFs of ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18000D610
 * Callers:
 *     ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000D3B0 (-CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAAPEAPEAUIAudioStreamInfo@@QEAPEAU2@AEBQEAU2@@Z @ 0x18000D730 (--$_Emplace_reallocate@AEBQEAUIAudioStreamInfo@@@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEA.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::AddStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM *a3,
        unsigned int a4)
{
  struct IAudioStreamInfo *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct IAudioStreamInfo **v9; // rdx
  int v10; // eax
  const char *v11; // r9
  unsigned int v12; // ebx
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioStreamInfo *v17; // [rsp+68h] [rbp+10h] BYREF

  v17 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  try
  {
    v9 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
    if ( *((struct IAudioStreamInfo ***)this + 24) == v9 )
    {
      std::vector<IAudioStreamInfo *>::_Emplace_reallocate<IAudioStreamInfo * const &>((char *)this + 176, v9, &v17);
      v6 = v17;
    }
    else
    {
      *v9 = v6;
      *((_QWORD *)this + 23) += 8LL;
    }
    (*(void (__fastcall **)(struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM *, _QWORD))(*(_QWORD *)v6 + 112LL))(
      v6,
      a3,
      a4);
    if ( v8 )
      LeaveCriticalSection(v8);
    v16 = 0LL;
    (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 80LL))((char *)this + 8, &v16);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v16 + 208LL))(
            v16,
            0LL,
            a4,
            0xFFFFFFFFLL);
    v12 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
      result = v12;
    }
    else
    {
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB1F,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v11);
  }
  return result;
}
