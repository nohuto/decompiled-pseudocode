/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D6E8
 * Callers:
 *     ?GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAW4AUDIO_DIRECTION@@PEAKPEBG@Z @ 0x18002D288 (-GetSoundLevelForExtendedAudioCategory@AudioStateMonitorManager@@AEAA-AW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000D240 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 *a1, __int64 a2, __int64 a3, float *a4)
{
  int v7; // eax
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  __int64 *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  __int64 v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rax
  float v25; // xmm0_4
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int64 *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rax
  float v31; // xmm0_4
  float v32; // xmm8_4
  __int64 result; // rax
  float v34; // xmm0_4
  __int64 *v35; // [rsp+28h] [rbp-69h] BYREF
  float v36; // [rsp+30h] [rbp-61h]
  float v37; // [rsp+34h] [rbp-5Dh] BYREF
  int v38; // [rsp+38h] [rbp-59h]
  float v39; // [rsp+3Ch] [rbp-55h]
  float v40; // [rsp+40h] [rbp-51h]
  float v41; // [rsp+44h] [rbp-4Dh]
  __int64 v42; // [rsp+48h] [rbp-49h] BYREF
  int v43; // [rsp+50h] [rbp-41h]
  __int64 v44; // [rsp+58h] [rbp-39h]
  _BYTE v45[4]; // [rsp+60h] [rbp-31h] BYREF
  float v46; // [rsp+64h] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+4Fh]

  v44 = -2LL;
  v36 = 1.0;
  v38 = 1065353216;
  v39 = 1.0;
  v40 = 1.0;
  v41 = 1.0;
  v37 = 1.0;
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
  {
    v43 = 0;
    v8 = 0.0;
  }
  else
  {
    v43 = 1065353216;
    v8 = FLOAT_1_0;
  }
  v9 = v8 * *a4;
  *a4 = v9;
  if ( v9 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
    {
      v10 = FLOAT_1_0;
      v36 = FLOAT_1_0;
    }
    else
    {
      v10 = (*(float (__fastcall **)(__int64 *))(*v35 + 200))(v35);
      v36 = v10;
    }
    *a4 = v10 * *a4;
    v42 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v42);
    if ( v42
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, _QWORD))(*(_QWORD *)v42 + 88LL))(v42, &v37, 0LL);
      *a4 = v37 * *a4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 464))(v35)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v35 + 472))(v35) )
    {
      *a4 = *a4 * 0.0;
    }
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 280))(a1)
      && dword_18003FF40[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)] )
    {
      v38 = 0;
      v11 = 0.0;
    }
    else
    {
      v38 = 1065353216;
      v11 = FLOAT_1_0;
    }
    *a4 = v11 * *a4;
    v12 = v35;
    v13 = *a1;
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int64 *, _QWORD))(v13 + 72))(a1, v12, v14) )
    {
      v15 = (*(float (__fastcall **)(__int64 *))(*v35 + 208))(v35);
      v39 = v15;
    }
    else
    {
      v15 = FLOAT_1_0;
      v39 = FLOAT_1_0;
    }
    *a4 = v15 * *a4;
    v16 = (*(float (__fastcall **)(__int64 *, __int64))(*a1 + 288))(a1, a2) * *a4;
    *a4 = v16;
    if ( v16 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v17 = *a1;
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        *a4 = (*(float (__fastcall **)(__int64 *, __int64, _QWORD))(v17 + 360))(a1, v19, v18) * *a4;
        v20 = *a1;
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v20 + 80))(a1, v21) )
        {
          v25 = FLOAT_1_0;
          v40 = FLOAT_1_0;
        }
        else
        {
          v22 = v35;
          v23 = *v35;
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v25 = (*(float (__fastcall **)(__int64 *, __int64))(v23 + 216))(v22, v24);
          v40 = v25;
        }
        *a4 = v25 * *a4;
        v26 = *a1;
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(__int64 *, _QWORD))(v26 + 96))(a1, v27) )
        {
          v28 = v35;
          v29 = *v35;
          v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v31 = (*(float (__fastcall **)(__int64 *, __int64))(v29 + 224))(v28, v30);
          v41 = v31;
        }
        else
        {
          v31 = FLOAT_1_0;
          v41 = FLOAT_1_0;
        }
        *a4 = v31 * *a4;
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
