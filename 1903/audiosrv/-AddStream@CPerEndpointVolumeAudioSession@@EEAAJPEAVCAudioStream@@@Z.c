/*
 * XREFs of ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800CD160
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180026E00 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x18004D49C (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800CEC34 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddStream(
        CPerEndpointVolumeAudioSession *this,
        struct CAudioStream *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  float v8; // [rsp+30h] [rbp+8h] BYREF
  struct CAudioStream *v9; // [rsp+38h] [rbp+10h]
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v9 = a2;
  *((_QWORD *)a2 + 8) = this;
  v10 = 0LL;
  v8 = FLOAT_1_0;
  CAudioSession::GetPolicyVolumeForStream(this, v9, &v8, &v10);
  v3 = CAudioStream::SetPolicyVolume(v9, v8, v10, 1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = CAudioSession::AddStream(this, v9);
    v4 = v3;
    if ( v3 >= 0 )
      return 0;
    v5 = 2956LL;
  }
  else
  {
    v5 = 2954LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)(unsigned int)v3);
  *((_QWORD *)v9 + 8) = 0LL;
  return v4;
}
