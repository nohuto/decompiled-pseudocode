/*
 * XREFs of ?RemoveDuckingManagerGainStage@CAudioSession@@UEAAJ_NPEA_J@Z @ 0x1800D0E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D0CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 */

__int64 __fastcall CAudioSession::RemoveDuckingManagerGainStage(CAudioSession *this, char a2, __int64 *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a3 )
    *a3 = 0LL;
  v11 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = *((_QWORD *)this + 56);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 36), 0xFFFFFFFF) == 1 || a2 )
    {
      if ( a3 )
        *a3 = *(_QWORD *)(*((_QWORD *)this + 56) + 40LL);
      v8 = *((_QWORD *)this + 56);
      *((_QWORD *)this + 56) = 0LL;
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v8);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x80070490LL);
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
