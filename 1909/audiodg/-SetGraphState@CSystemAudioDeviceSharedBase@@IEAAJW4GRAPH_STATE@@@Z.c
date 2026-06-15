/*
 * XREFs of ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140012D88
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010700 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012B70 (-OnLeftSubmixStarted@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x140012C80 (-OnLeftSubmixStopped@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x1400317A0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z @ 0x1400325F0 (-OnLeftSubmixDisconnected@CSystemAudioDeviceSharedBase@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x1400329F4 (WPP_SF_DDD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceSharedBase::SetGraphState(unsigned __int64 a1, int a2)
{
  int v4; // edi
  int v5; // eax
  __int64 (*v7)(void); // rax
  __int128 v8; // [rsp+38h] [rbp-30h]
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF

  v8 = *(_OWORD *)(a1 + 248);
  v9 = v8;
  EtwEventActivityIdControl(4LL, &v9);
  v4 = -2147418113;
  switch ( a2 )
  {
    case 0:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 120LL);
      goto LABEL_13;
    case 1:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 128LL);
LABEL_13:
      v5 = v7();
      goto LABEL_6;
    case 2:
      v7 = *(__int64 (**)(void))(**(_QWORD **)(a1 + 328) + 136LL);
      goto LABEL_13;
    case 3:
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 112LL))(
             *(_QWORD *)(a1 + 328),
             (a1 + 296) & ((unsigned __int128)-(__int128)a1 >> 64));
LABEL_6:
      v4 = v5;
      break;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((unsigned __int8 *)WPP_GLOBAL_Control + 25) >= (int)(((v4 >> 31) & 0xFFFFFFFE) + 4) )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids,
      *(unsigned int *)(a1 + 336),
      a2,
      v4,
      -2LL,
      v8,
      *((_QWORD *)&v8 + 1));
  }
  if ( v4 < 0 )
    a2 = *(_DWORD *)(a1 + 336);
  *(_DWORD *)(a1 + 336) = a2;
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v4;
}
