/*
 * XREFs of ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x1800271E0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002A180 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800C0414 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  float v14; // xmm0_4
  __int64 *v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rdi
  unsigned int v20; // ebx
  __int64 v21; // rax
  float v22; // xmm0_4
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 *v25; // rbx
  __int64 v26; // rdi
  __int64 v27; // rax
  float v28; // xmm0_4
  __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rax
  float v34; // xmm6_4
  __int64 v35; // rcx
  float v36; // xmm6_4
  float v37; // xmm0_4
  __int64 result; // rax
  float v39; // xmm0_4
  __int64 v40; // rax
  const WCHAR *v41; // rbx
  const WCHAR *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 *v46; // [rsp+38h] [rbp-D0h] BYREF
  float v47; // [rsp+40h] [rbp-C8h] BYREF
  int v48; // [rsp+44h] [rbp-C4h] BYREF
  int v49; // [rsp+48h] [rbp-C0h] BYREF
  int v50; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  float v53; // [rsp+60h] [rbp-A8h] BYREF
  int v54; // [rsp+64h] [rbp-A4h] BYREF
  _DWORD v55[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  char v58[4]; // [rsp+80h] [rbp-88h] BYREF
  float v59; // [rsp+84h] [rbp-84h]
  char v60; // [rsp+88h] [rbp-80h]
  float v61; // [rsp+8Ch] [rbp-7Ch]
  __int64 v62; // [rsp+90h] [rbp-78h]
  unsigned __int16 *v63; // [rsp+98h] [rbp-70h] BYREF
  int v64; // [rsp+A0h] [rbp-68h]
  int v65; // [rsp+A4h] [rbp-64h]
  void *v66; // [rsp+A8h] [rbp-60h]
  int v67; // [rsp+B0h] [rbp-58h]
  int v68; // [rsp+B4h] [rbp-54h]
  const WCHAR *v69; // [rsp+B8h] [rbp-50h]
  int v70; // [rsp+C0h] [rbp-48h]
  int v71; // [rsp+C4h] [rbp-44h]
  const WCHAR *v72; // [rsp+C8h] [rbp-40h]
  int v73; // [rsp+D0h] [rbp-38h]
  int v74; // [rsp+D4h] [rbp-34h]
  float *v75; // [rsp+D8h] [rbp-30h]
  __int64 v76; // [rsp+E0h] [rbp-28h]
  int *v77; // [rsp+E8h] [rbp-20h]
  __int64 v78; // [rsp+F0h] [rbp-18h]
  float *v79; // [rsp+F8h] [rbp-10h]
  __int64 v80; // [rsp+100h] [rbp-8h]
  int *v81; // [rsp+108h] [rbp+0h]
  __int64 v82; // [rsp+110h] [rbp+8h]
  int *v83; // [rsp+118h] [rbp+10h]
  __int64 v84; // [rsp+120h] [rbp+18h]
  __int64 *v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  char *v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  int *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v57 = -2LL;
  v8 = g_PolicyManager;
  v48 = 1065353216;
  v49 = 1065353216;
  v50 = 1065353216;
  v51 = 0x3F8000003F800000LL;
  v47 = 1.0;
  *a4 = 1.0;
  v46 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)a2 + 24LL))(a2, &v46);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\policyvolumehelpers\\policyvolumehelpers.cpp",
      (const char *)(unsigned int)v9);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v46 + 120))(v46) )
    v10 = 0.0;
  else
    v10 = FLOAT_1_0;
  v53 = v10;
  v11 = v10 * *a4;
  *a4 = v11;
  if ( v11 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2) != 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2) )
      v12 = FLOAT_1_0;
    else
      v12 = (*(float (__fastcall **)(__int64 *))(*v46 + 200))(v46);
    v48 = LODWORD(v12);
    *a4 = v12 * *a4;
    v52 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v52);
    if ( v52
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
    {
      (*(void (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v52 + 88LL))(v52, &v47, a5);
      *a4 = v47 * *a4;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v46 + 464))(v46)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2)
      && (*(unsigned int (__fastcall **)(__int64 *))(*v46 + 472))(v46) )
    {
      *a4 = *a4 * 0.0;
    }
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
  }
  if ( *a4 > 0.0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != 21 )
  {
    v13 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v8 + 280LL))(v8)
       && dword_18017F300[(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2)]
        ? 0.0
        : FLOAT_1_0;
    v49 = LODWORD(v13);
    v14 = v13 * *a4;
    *a4 = v14;
    v15 = v46;
    v16 = *(_QWORD *)v8;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, __int64 *, _QWORD))(v16 + 72))(v8, v15, v17) )
      (*(void (__fastcall **)(__int64 *))(*v46 + 208))(v46);
    else
      v14 = FLOAT_1_0;
    v50 = LODWORD(v14);
    *a4 = v14 * *a4;
    v18 = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)v8 + 288LL))(v8, a2) * *a4;
    *a4 = v18;
    if ( v18 > 0.0 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
      {
        v19 = *(_QWORD *)v8;
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
        v22 = (*(float (__fastcall **)(struct IAudioPolicyManager *, __int64, _QWORD))(v19 + 360))(v8, v21, v20) * *a4;
        *a4 = v22;
        v23 = *(_QWORD *)v8;
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v23 + 80))(v8, v24) )
        {
          v22 = FLOAT_1_0;
        }
        else
        {
          v25 = v46;
          v26 = *v46;
          v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v26 + 216))(v25, v27);
        }
        *(float *)&v51 = v22;
        v28 = v22 * *a4;
        *a4 = v28;
        v29 = *(_QWORD *)v8;
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
        if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(v29 + 96))(v8, v30) )
        {
          v31 = v46;
          v32 = *v46;
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
          (*(void (__fastcall **)(__int64 *, __int64))(v32 + 224))(v31, v33);
        }
        else
        {
          v28 = FLOAT_1_0;
        }
        *((float *)&v51 + 1) = v28;
        *a4 = v28 * *a4;
        (*(void (__fastcall **)(struct IAudioPolicyManager *, __int64, char *))(*(_QWORD *)v8 + 64LL))(v8, a2, v58);
        v34 = FLOAT_1_0;
        if ( (*(unsigned int (__fastcall **)(__int64 *))(*v46 + 184))(v46) )
        {
          v34 = v58[0] ? 0.0 : v59;
          if ( a5 )
          {
            v35 = v62;
            if ( *a5 > v62 )
              v35 = *a5;
            *a5 = v35;
          }
        }
        v36 = v34 * *a4;
        *a4 = v36;
        if ( v60 )
          v37 = 0.0;
        else
          v37 = v61;
        *a4 = v36 * v37;
      }
    }
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( (_BYTE)result )
  {
    v39 = *a4;
    if ( *a4 != 0.0 )
      v39 = FLOAT_1_0;
    *a4 = v39;
  }
  if ( a3 && *(_DWORD *)a3 > 4u )
  {
    v40 = (*(__int64 (__fastcall **)(__int64 *))(*v46 + 72))(v46);
    v41 = &word_18015F720;
    v42 = &word_18015F720;
    LODWORD(v43) = 0;
    if ( v40 )
    {
      v42 = (const WCHAR *)v40;
      v43 = -1LL;
      do
        ++v43;
      while ( *(_WORD *)(v40 + 2 * v43) );
    }
    v69 = v42;
    v70 = 2 * v43 + 2;
    v71 = 0;
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    LODWORD(v45) = 0;
    if ( v44 )
    {
      v41 = (const WCHAR *)v44;
      v45 = -1LL;
      do
        ++v45;
      while ( *(_WORD *)(v44 + 2 * v45) );
    }
    v72 = v41;
    v73 = 2 * v45 + 2;
    v74 = 0;
    v75 = &v53;
    v76 = 4LL;
    v77 = &v48;
    v78 = 4LL;
    v79 = &v47;
    v80 = 4LL;
    v81 = &v49;
    v82 = 4LL;
    v83 = &v50;
    v84 = 4LL;
    v85 = &v51;
    v86 = 4LL;
    v87 = (char *)&v51 + 4;
    v88 = 4LL;
    v54 = (*(__int64 (__fastcall **)(__int64 *))(*v46 + 40))(v46);
    v89 = &v54;
    v90 = 4LL;
    v55[0] = ((unsigned int)&unk_180175B5E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v55[1] = 4;
    v56 = 0LL;
    v63 = *(unsigned __int16 **)(a3 + 8);
    v64 = *v63;
    v65 = 2;
    v66 = &unk_180175B69;
    v67 = 207;
    v68 = 1;
    result = EtwEventWriteTransfer(*(_QWORD *)(a3 + 32), v55, 0LL, 0LL, 12, &v63);
  }
  if ( v46 )
    return (*(__int64 (__fastcall **)(__int64 *))(*v46 + 16))(v46);
  return result;
}
