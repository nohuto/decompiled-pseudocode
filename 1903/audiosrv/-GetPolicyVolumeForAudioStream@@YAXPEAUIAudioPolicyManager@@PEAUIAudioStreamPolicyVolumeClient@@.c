/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18001AE20
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18001FED0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800297F8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800CEC34 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetPolicyVolumeForAudioStream(__int64 a1, __int64 a2, __int64 a3, float *a4, __int64 *a5)
{
  struct IAudioPolicyManager *v8; // r15
  int v9; // eax
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  __int64 *v14; // rdi
  __int64 v15; // rbx
  unsigned int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // eax
  __int64 *v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rax
  float v27; // xmm0_4
  __int64 v28; // rbx
  unsigned int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm6_4
  __int64 v32; // rax
  float v33; // xmm6_4
  float v34; // xmm0_4
  __int64 result; // rax
  __int64 v36; // rax
  void *v37; // rbx
  void *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rax
  float v45; // xmm0_4
  int v46; // [rsp+28h] [rbp-E0h]
  __int64 *v47; // [rsp+38h] [rbp-D0h] BYREF
  int v48; // [rsp+40h] [rbp-C8h] BYREF
  float v49; // [rsp+44h] [rbp-C4h] BYREF
  int v50; // [rsp+48h] [rbp-C0h] BYREF
  int v51; // [rsp+4Ch] [rbp-BCh] BYREF
  int v52; // [rsp+50h] [rbp-B8h] BYREF
  int v53; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  int v56; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v57[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v58[4]; // [rsp+88h] [rbp-80h] BYREF
  float v59; // [rsp+8Ch] [rbp-7Ch]
  char v60; // [rsp+90h] [rbp-78h]
  float v61; // [rsp+94h] [rbp-74h]
  __int64 v62; // [rsp+98h] [rbp-70h]
  unsigned __int16 *v63; // [rsp+A8h] [rbp-60h] BYREF
  int v64; // [rsp+B0h] [rbp-58h]
  int v65; // [rsp+B4h] [rbp-54h]
  void *v66; // [rsp+B8h] [rbp-50h]
  int v67; // [rsp+C0h] [rbp-48h]
  int v68; // [rsp+C4h] [rbp-44h]
  void *v69; // [rsp+C8h] [rbp-40h]
  int v70; // [rsp+D0h] [rbp-38h]
  int v71; // [rsp+D4h] [rbp-34h]
  void *v72; // [rsp+D8h] [rbp-30h]
  int v73; // [rsp+E0h] [rbp-28h]
  int v74; // [rsp+E4h] [rbp-24h]
  int *v75; // [rsp+E8h] [rbp-20h]
  __int64 v76; // [rsp+F0h] [rbp-18h]
  int *v77; // [rsp+F8h] [rbp-10h]
  __int64 v78; // [rsp+100h] [rbp-8h]
  float *v79; // [rsp+108h] [rbp+0h]
  __int64 v80; // [rsp+110h] [rbp+8h]
  __int64 *v81; // [rsp+118h] [rbp+10h]
  __int64 v82; // [rsp+120h] [rbp+18h]
  int *v83; // [rsp+128h] [rbp+20h]
  __int64 v84; // [rsp+130h] [rbp+28h]
  int *v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+140h] [rbp+38h]
  int *v87; // [rsp+148h] [rbp+40h]
  __int64 v88; // [rsp+150h] [rbp+48h]
  int *v89; // [rsp+158h] [rbp+50h]
  __int64 v90; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v57[2] = -2LL;
  v8 = g_PolicyManager;
  *(float *)&v48 = 1.0;
  LODWORD(v54) = 1065353216;
  *(float *)&v50 = 1.0;
  *(float *)&v51 = 1.0;
  *(float *)&v52 = 1.0;
  v49 = 1.0;
  *a4 = 1.0;
  v47 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v47);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v9,
      v46);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v47 + 120))(v47) )
  {
    v53 = 0;
    v10 = 0.0;
  }
  else
  {
    v53 = 1065353216;
    v10 = FLOAT_1_0;
  }
  v11 = v10 * *a4;
  *a4 = v11;
  if ( v11 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
    {
      v12 = *(float *)&v48;
    }
    else
    {
      v12 = (*(float (__fastcall **)(__int64 *))(*v47 + 200))(v47);
      *(float *)&v48 = v12;
    }
    *a4 = v12 * *a4;
    v55 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v55);
    if ( v55
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v55 + 88LL))(v55, &v49, a5);
      *a4 = v49 * *a4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v47 + 464))(v47)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v47 + 472))(v47) )
    {
      *a4 = *a4 * 0.0;
    }
    if ( v55 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v8 + 280LL))(v8)
      && dword_180184400[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)] )
    {
      LODWORD(v54) = 0;
      v13 = 0.0;
    }
    else
    {
      v13 = FLOAT_1_0;
    }
    *a4 = v13 * *a4;
    v14 = v47;
    v15 = *(_QWORD *)v8;
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, __int64 *, _QWORD))(v15 + 72))(v8, v14, v16) )
    {
      v17 = (*(float (__fastcall **)(__int64 *))(*v47 + 208))(v47);
      *(float *)&v50 = v17;
    }
    else
    {
      v17 = *(float *)&v50;
    }
    *a4 = v17 * *a4;
    v18 = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)v8 + 288LL))(v8, a2) * *a4;
    *a4 = v18;
    if ( v18 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v19 = *(_QWORD *)v8;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        *a4 = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD))(v19 + 360))(v8, v21, v20) * *a4;
        v22 = *(_QWORD *)v8;
        v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v22 + 80))(v8, v23) )
        {
          v27 = *(float *)&v51;
        }
        else
        {
          v24 = v47;
          v25 = *v47;
          v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v27 = (*(float (__fastcall **)(__int64 *, __int64))(v25 + 216))(v24, v26);
          *(float *)&v51 = v27;
        }
        *a4 = v27 * *a4;
        v28 = *(_QWORD *)v8;
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v28 + 96))(v8, v29) )
        {
          v42 = v47;
          v43 = *v47;
          v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          v30 = (*(float (__fastcall **)(__int64 *, __int64))(v43 + 224))(v42, v44);
          *(float *)&v52 = v30;
        }
        else
        {
          v30 = *(float *)&v52;
        }
        *a4 = v30 * *a4;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, _BYTE *))(*(_QWORD *)v8 + 64LL))(v8, a2, v58);
        v31 = FLOAT_1_0;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*v47 + 184))(v47) )
        {
          v31 = v58[0] ? 0.0 : v59;
          if ( a5 )
          {
            v32 = *a5;
            if ( *a5 <= v62 )
              v32 = v62;
            *a5 = v32;
          }
        }
        v33 = v31 * *a4;
        if ( v60 )
          v34 = 0.0;
        else
          v34 = v61;
        *a4 = v33 * v34;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v45 = *a4;
    if ( *a4 != 0.0 )
      v45 = FLOAT_1_0;
    *a4 = v45;
  }
  if ( a3 && *(_DWORD *)a3 > 4u )
  {
    v36 = (*(__int64 (__fastcall **)(__int64 *))(*v47 + 72))(v47);
    v37 = &unk_180162EC4;
    v38 = &unk_180162EC4;
    LODWORD(v39) = 0;
    if ( v36 )
    {
      v38 = (void *)v36;
      v39 = -1LL;
      do
        ++v39;
      while ( *(_WORD *)(v36 + 2 * v39) );
    }
    v69 = v38;
    v70 = 2 * v39 + 2;
    v71 = 0;
    v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    LODWORD(v41) = 0;
    if ( v40 )
    {
      v37 = (void *)v40;
      v41 = -1LL;
      do
        ++v41;
      while ( *(_WORD *)(v40 + 2 * v41) );
    }
    v72 = v37;
    v73 = 2 * v41 + 2;
    v74 = 0;
    v75 = &v53;
    v76 = 4LL;
    v77 = &v48;
    v78 = 4LL;
    v79 = &v49;
    v80 = 4LL;
    v81 = &v54;
    v82 = 4LL;
    v83 = &v50;
    v84 = 4LL;
    v85 = &v51;
    v86 = 4LL;
    v87 = &v52;
    v88 = 4LL;
    v56 = (*(__int64 (__fastcall **)(__int64 *))(*v47 + 40))(v47);
    v89 = &v56;
    v90 = 4LL;
    v57[0] = 0x40B000000LL;
    v57[1] = 0LL;
    v63 = *(unsigned __int16 **)(a3 + 8);
    v64 = *v63;
    v65 = 2;
    v66 = &unk_18017AD83;
    v67 = 207;
    v68 = 1;
    LODWORD(v55) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    result = EtwEventWriteTransfer(*(_QWORD *)(a3 + 32), v57, 0LL, 0LL, 12, &v63);
  }
  if ( v47 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v47 + 16))(v47);
  return result;
}
