/*
 * XREFs of ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@_N@Z @ 0x14000FFAC
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000C8B0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140003A68 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::InitializePump(
        CAudioDeviceGraph *this,
        struct CPipeInstance *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        unsigned __int8 a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v12; // rdx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF

  v14[1] = -2LL;
  v7 = **(_QWORD **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((__int64)a2 + 16)
                   + 32LL);
  v14[0] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  v17 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_1b8969bf_17f7_48d1_89bc_fccafb532af5,
         &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 1294LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v8,
      v13);
    goto LABEL_9;
  }
  v10 = 8;
  if ( (unsigned int)(*((_DWORD *)a3 + 25) - 2) > 1 )
    v10 = 0;
  v13 = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 19) + 24LL))(
         *((_QWORD *)this + 19),
         v10 | (4 * a4) | ((unsigned int)(*((_DWORD *)this + 35) == 0) + 1),
         *((unsigned int *)this + 32),
         v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 1307LL;
    goto LABEL_13;
  }
  v15 = *((_OWORD *)this + 22);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)this + 19) + 80LL))(
         *((_QWORD *)this + 19),
         &v15,
         *((_QWORD *)this + 49));
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 1310LL;
    goto LABEL_13;
  }
  v9 = 0;
LABEL_9:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v14);
  return v9;
}
