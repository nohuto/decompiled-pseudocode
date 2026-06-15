/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800D0F80
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800D1120 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x1800206BC (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800D1D2C (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  __int64 v6; // rdi
  int v9; // ebx
  float *v10; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // esi
  float *v15; // rax
  __int64 v16; // rcx
  char *v17; // r14
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-28h] BYREF
  char v21; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25,
      (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      a2,
      *((_QWORD *)this + 91));
  }
  v9 = 0;
  if ( (_DWORD)v6 )
  {
    v10 = a3;
    while ( ValidateAudioLevel(*v10) )
    {
      v10 = (float *)(v11 + 4);
      if ( v12 + 1 >= (unsigned int)v6 )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
LABEL_9:
  v21 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( (_DWORD)v6 != *((_DWORD *)this + 240) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4FA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    if ( v21 )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942487LL;
  }
  if ( (_DWORD)v6 )
  {
    v15 = (float *)*((_QWORD *)this + 121);
    v16 = v6;
    v17 = (char *)((char *)a3 - (char *)v15);
    do
    {
      v18 = *(float *)((char *)v15 + (_QWORD)v17);
      if ( *v15 != v18 )
      {
        *v15 = v18;
        ++v13;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  LOBYTE(v19) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v19,
    0LL);
  if ( a5 )
  {
    LOBYTE(v9) = v13 == 0;
    *a5 = v9;
  }
  return 0LL;
}
