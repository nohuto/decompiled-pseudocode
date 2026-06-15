/*
 * XREFs of ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140012EC0 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140017C10 (-DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     wil::details::lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___::_lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___ @ 0x14003FC28 (wil--details--lambda_call__lambda_417a45af64215962c13a0b99bcf3407d___--_lambda_call__lambda_417a.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003FCB0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400130E8 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x14001315C (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamInstance::DisconnectFromRightSubmix(CStreamInstance *this, struct ISubmixInternal *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  CPipeInstance *v6; // rbx
  __int64 v7; // rax
  struct IAudioStreamingResourceRegistration *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IAudioStreamingResourceRegistration *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, *(_QWORD *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      -2);
    return v5;
  }
  else
  {
    *((_BYTE *)this + 17) = 0;
    v6 = *(CPipeInstance **)this;
    v7 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 64LL))(a2);
    CPipeInstance::OnDisconnectedFromRightSubmix(v6, v7);
    v11 = 0LL;
    (*(void (__fastcall **)(struct ISubmixInternal *, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)a2 + 120LL))(
      a2,
      &v11);
    v8 = v11;
    if ( v11 )
    {
      CStreamInstance::UnregisterResources(this, v11);
      v8 = v11;
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)v8 + 16LL))(v8);
    return 0LL;
  }
}
