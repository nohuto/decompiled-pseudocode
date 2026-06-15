/*
 * XREFs of ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800CF554
 * Callers:
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800CF004 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180028AE0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x18006B870 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dg @ 0x1800C88E4 (WPP_SF_dg.c)
 *     WPP_SF_g @ 0x1800C8930 (WPP_SF_g.c)
 *     _freea @ 0x1800D2524 (_freea.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::LoadEndpointVolumeInformation(
        CPerEndpointVolumeAudioSession *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip *a3)
{
  __int64 v3; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  unsigned int *v13; // rbx
  unsigned int *v14; // rax
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r14
  int v19; // eax
  float v20; // xmm0_4
  unsigned __int64 v21; // rcx
  SIZE_T v22; // rax
  float *v23; // rax
  void *v24; // rcx
  float *v25; // rdx
  __int64 v26; // rcx
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  unsigned int v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rax
  float v33; // xmm0_4
  __int64 v34; // rcx
  double v35[6]; // [rsp+0h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+30h] [rbp+0h] BYREF
  int v37; // [rsp+34h] [rbp+4h] BYREF
  float v38; // [rsp+38h] [rbp+8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+10h] BYREF
  char v40; // [rsp+48h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+58h]

  v3 = *(_QWORD *)a3;
  v36 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, unsigned int *))(v3 + 48))(a3, &v36);
  if ( v6 < 0 )
  {
    v7 = 1846LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_QWORD *)a3;
  v37 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, int *))(v9 + 152))(a3, &v37);
  if ( v6 < 0 )
  {
    v7 = 1850LL;
    goto LABEL_3;
  }
  v6 = CAudioSession::SetMute(this, v37, &EVENTCONTEXT_AUDIOSUBSYSTEM, 1, 0LL);
  if ( v6 < 0 )
  {
    v7 = 1852LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, float *))(*(_QWORD *)a3 + 80LL))(a3, &v38);
  if ( v6 < 0 )
  {
    v7 = 1856LL;
    goto LABEL_3;
  }
  v10 = (4LL * v36 + 16) & -(__int64)(4 * (unsigned __int64)v36 < 4 * (unsigned __int64)v36 + 16);
  if ( v10 )
  {
    if ( v10 > 0x400 )
    {
      v14 = (unsigned int *)malloc(v10);
      v13 = v14;
      if ( !v14 )
        goto LABEL_20;
      *v14 = 56797;
    }
    else
    {
      v11 = v10 + 15;
      if ( v10 + 15 < v10 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      v13 = &v36;
      if ( v35 == (double *)-48LL )
        goto LABEL_21;
      v36 = 52428;
    }
    v13 += 4;
  }
  else
  {
    v13 = 0LL;
  }
LABEL_20:
  if ( !v13 )
  {
LABEL_21:
    v15 = -2147024882;
    v16 = 1859LL;
    v17 = 2147942414LL;
    goto LABEL_37;
  }
  v18 = 0LL;
  if ( !v36 )
  {
LABEL_25:
    v40 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v20 = v38;
    *((float *)this + 212) = v38;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_g(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x26u,
        (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        v20);
    }
    v21 = v36;
    *((_DWORD *)this + 240) = v36;
    v22 = 4 * v21;
    if ( !is_mul_ok(v21, 4uLL) )
      v22 = -1LL;
    v23 = (float *)operator new[](v22, (const struct std::nothrow_t *)&std::nothrow);
    v24 = (void *)*((_QWORD *)this + 121);
    v25 = v23;
    *((_QWORD *)this + 121) = v23;
    if ( v24 )
    {
      operator delete(v24);
      v25 = (float *)*((_QWORD *)this + 121);
    }
    if ( v25 )
    {
      v26 = 0LL;
      v27 = 0.0;
      if ( *((_DWORD *)this + 240) )
      {
        do
        {
          v28 = *(float *)&v13[v26];
          v25[v26] = v28;
          v29 = fmaxf(v28, v27);
          v30 = *((_DWORD *)this + 240);
          v26 = (unsigned int)(v26 + 1);
          v27 = v29;
        }
        while ( (unsigned int)v26 < v30 );
        if ( v29 > 0.0 )
        {
          v31 = 0LL;
          if ( v30 )
          {
            do
            {
              v32 = *((_QWORD *)this + 121);
              v33 = *(float *)(v32 + 4 * v31) / v27;
              *(float *)(v32 + 4 * v31) = v33;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v34 = *((_QWORD *)WPP_GLOBAL_Control + 2);
                v35[4] = v33;
                WPP_SF_dg(v34, 0x27u, (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v31);
              }
              v31 = (unsigned int)(v31 + 1);
            }
            while ( (unsigned int)v31 < *((_DWORD *)this + 240) );
          }
        }
      }
      if ( v40 )
        LeaveCriticalSection(lpCriticalSection);
      v15 = 0;
    }
    else
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x754,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)0x8007000ELL);
      if ( v40 )
        LeaveCriticalSection(lpCriticalSection);
    }
    goto LABEL_50;
  }
  while ( 1 )
  {
    v19 = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, unsigned int *))(*(_QWORD *)a3 + 112LL))(
            a3,
            (unsigned int)v18,
            &v13[v18]);
    v15 = v19;
    if ( v19 < 0 )
      break;
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= v36 )
      goto LABEL_25;
  }
  v17 = (unsigned int)v19;
  v16 = 1863LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)v17);
LABEL_50:
  if ( v13 )
    freea(v13);
  return v15;
}
