/*
 * XREFs of ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140010388
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3C0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x1400111C0 (-ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C100 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140034A24 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14003EE04 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamInstance::ConnectToRightSubmix(
        CStreamInstance *this,
        struct ISubmixInternal *a2,
        const struct CPipeInstance *a3)
{
  char v6; // r15
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // r9
  int v16; // eax
  int v17; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IAudioStreamingResourceRegistration *v19; // [rsp+88h] [rbp+48h] BYREF

  v17 = -2;
  v19 = 0LL;
  (*(void (__fastcall **)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL))(
    a2,
    &v19);
  v6 = 1;
  if ( v19 )
  {
    if ( *((_QWORD *)this + 11)
      || (unsigned __int64)(*((_QWORD *)this + 5) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL
      || (v7 = (*(__int64 (**)(void))(*(_QWORD *)v19 + 24LL))(), v8 = v7, v7 >= 0) )
    {
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v7,
        -2);
    }
    if ( v8 < 0 )
    {
      v13 = 94LL;
LABEL_22:
      v15 = (unsigned int)v8;
      goto LABEL_23;
    }
  }
  if ( !a3 )
  {
    v9 = *(_QWORD *)a2;
    v10 = *(_QWORD *)this;
    if ( *((_DWORD *)this + 5) == 2 )
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 32))(a2, v10);
    else
      v11 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, __int64))(v9 + 24))(a2, v10);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_11;
    v13 = 109LL;
    goto LABEL_22;
  }
  v14 = CPipeInstance::ConnectToRightPipe(*(CPipeInstance **)this, a3);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v13 = 101LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v15,
      v17);
    goto LABEL_12;
  }
  v16 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)this);
  v8 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v13 = 103LL;
    goto LABEL_23;
  }
LABEL_11:
  v6 = 0;
  *((_BYTE *)this + 17) = 1;
  v8 = 0;
LABEL_12:
  if ( v6 && v19 )
    CStreamInstance::UnregisterResources(this, v19);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v19);
  return (unsigned int)v8;
}
