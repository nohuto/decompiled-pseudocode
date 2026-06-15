/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18003077C
 * Callers:
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18003034C (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001051C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 *a1, __int64 a2, __int64 a3, float *a4)
{
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  __int64 *v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // eax
  float v16; // xmm0_4
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 *v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // rax
  float v32; // xmm8_4
  __int64 result; // rax
  float v34; // xmm0_4
  __int64 *v35; // [rsp+28h] [rbp-69h] BYREF
  float v36; // [rsp+30h] [rbp-61h] BYREF
  __int64 v37; // [rsp+38h] [rbp-59h] BYREF
  int v38; // [rsp+40h] [rbp-51h]
  int v39; // [rsp+44h] [rbp-4Dh]
  int v40; // [rsp+48h] [rbp-49h]
  int v41; // [rsp+4Ch] [rbp-45h]
  int v42; // [rsp+50h] [rbp-41h]
  float v43; // [rsp+54h] [rbp-3Dh]
  __int64 v44; // [rsp+58h] [rbp-39h]
  _BYTE v45[4]; // [rsp+60h] [rbp-31h] BYREF
  float v46; // [rsp+64h] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]

  v44 = -2LL;
  v38 = 1065353216;
  v39 = 1065353216;
  v40 = 1065353216;
  v41 = 1065353216;
  v42 = 1065353216;
  v36 = 1.0;
  *a4 = 1.0;
  v35 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v35);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v7);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 120))(v35) )
    v8 = 0.0;
  else
    v8 = FLOAT_1_0;
  v43 = v8;
  v9 = v8 * *a4;
  *a4 = v9;
  if ( v9 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v10 = FLOAT_1_0;
    else
      v10 = (*(float (__fastcall **)(__int64 *))(*v35 + 200))(v35);
    v38 = LODWORD(v10);
    *a4 = v10 * *a4;
    v37 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v37);
    if ( v37
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v37 + 88LL))(v37, &v36, 0LL);
      *a4 = v36 * *a4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 464))(v35)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 472))(v35) )
    {
      *a4 = *a4 * 0.0;
    }
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v11 = (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 280))(a1)
       && dword_180041A60[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v39 = LODWORD(v11);
    v12 = v11 * *a4;
    *a4 = v12;
    v13 = v35;
    v14 = *a1;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v14 + 72))(a1, v13, v15) )
      (*(void (__fastcall **)(__int64 *))(*v35 + 208))(v35);
    else
      v12 = FLOAT_1_0;
    v40 = LODWORD(v12);
    *a4 = v12 * *a4;
    v16 = (*(float (__fastcall **)(__int64 *, __int64))(*a1 + 288))(a1, a2) * *a4;
    *a4 = v16;
    if ( v16 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v17 = *a1;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        v20 = (*(float (__fastcall **)(__int64 *, __int64, _QWORD))(v17 + 360))(a1, v19, v18) * *a4;
        *a4 = v20;
        v21 = *a1;
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v21 + 80))(a1, v22) )
        {
          v20 = FLOAT_1_0;
        }
        else
        {
          v23 = v35;
          v24 = *v35;
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v24 + 216))(v23, v25);
        }
        v41 = LODWORD(v20);
        v26 = v20 * *a4;
        *a4 = v26;
        v27 = *a1;
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v27 + 96))(a1, v28) )
        {
          v29 = v35;
          v30 = *v35;
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v30 + 224))(v29, v31);
        }
        else
        {
          v26 = FLOAT_1_0;
        }
        v42 = LODWORD(v26);
        *a4 = v26 * *a4;
        (*(void (__fastcall **)(__int64 *, __int64, _BYTE *))(*a1 + 64))(a1, a2, v45);
        v32 = FLOAT_1_0;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 184))(v35) )
        {
          if ( v45[0] )
            v32 = 0.0;
          else
            v32 = v46;
        }
        *a4 = v32 * *a4;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v34 = *a4;
    if ( *a4 != 0.0 )
      v34 = FLOAT_1_0;
    *a4 = v34;
  }
  if ( v35 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v35 + 16))(v35);
  return result;
}
