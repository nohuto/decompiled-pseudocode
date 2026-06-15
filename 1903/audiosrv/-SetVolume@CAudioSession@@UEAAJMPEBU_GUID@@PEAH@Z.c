/*
 * XREFs of ?SetVolume@CAudioSession@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1800267E0
 * Callers:
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800289C0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x18001DA6C (-ValidateAudioLevel@@YA_NM@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sg @ 0x1800D2084 (WPP_SF_Sg.c)
 */

__int64 __fastcall CAudioSession::SetVolume(CAudioSession *this, float a2, const struct _GUID *a3, int *a4)
{
  const struct _GUID *v5; // r14
  int v7; // xmm7_4
  char v8; // r12
  int v9; // esi
  ULONGLONG TickCount64; // r15
  float v11; // xmm7_4
  __int64 v12; // rax
  __int64 v14; // r14
  int v15; // [rsp+20h] [rbp-60h]
  double v16; // [rsp+20h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-40h] BYREF
  char v18; // [rsp+48h] [rbp-38h]
  LPCRITICAL_SECTION v19; // [rsp+50h] [rbp-30h] BYREF
  char v20; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v5 = a3;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v16 = a2;
    WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), 17, (_DWORD)a3, *((_QWORD *)this + 91), SLOBYTE(v16));
  }
  if ( ValidateAudioLevel(a2) )
  {
    v20 = 0;
    v19 = (LPCRITICAL_SECTION)((char *)this + 808);
    ATL::CCritSecLock::Lock(&v19);
    v7 = *((_DWORD *)this + 212);
    v18 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 896);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v8 = 0;
    v9 = 1;
    TickCount64 = GetTickCount64();
    if ( *((_QWORD *)this + 109) )
    {
      v14 = *((_QWORD *)this + 109);
      if ( GetTickCount64() - v14 > 0x3E8 )
      {
        (**((void (__fastcall ***)(char *, __int64, _QWORD))this + 108))(
          (char *)this + 864,
          v14 - *((_QWORD *)this + 110),
          *((unsigned int *)this + 222));
        v8 = 1;
      }
      v5 = a3;
    }
    if ( v8 )
    {
      *((_DWORD *)this + 222) = 0;
      *((_QWORD *)this + 110) = TickCount64;
    }
    else
    {
      ++*((_DWORD *)this + 222);
    }
    *((_QWORD *)this + 109) = TickCount64;
    if ( v18 )
      LeaveCriticalSection(lpCriticalSection);
    *((_DWORD *)this + 237) = v7;
    *((float *)this + 238) = a2;
    v11 = *((float *)this + 212);
    *((float *)this + 212) = a2;
    if ( v20 )
      LeaveCriticalSection(v19);
    v20 = 0;
    v19 = (LPCRITICAL_SECTION)((char *)this + 432);
    ATL::CCritSecLock::Lock(&v19);
    v12 = *((_QWORD *)this + 59);
    if ( v12 && !*(_BYTE *)(v12 + 32) )
      *(_DWORD *)(v12 + 56) = 1065353216;
    if ( v20 )
      LeaveCriticalSection(v19);
    LOBYTE(v15) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      v5,
      0xFFFFFFFFLL,
      v15,
      0LL);
    if ( a4 )
    {
      if ( v11 != a2 )
        v9 = 0;
      *a4 = v9;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x366,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
