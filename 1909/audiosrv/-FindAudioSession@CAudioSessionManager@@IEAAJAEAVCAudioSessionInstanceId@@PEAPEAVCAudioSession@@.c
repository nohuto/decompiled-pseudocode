/*
 * XREFs of ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800D64E0
 * Callers:
 *     AudioSessionManagerGetExistingSession @ 0x1800D8220 (AudioSessionManagerGetExistingSession.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_SS @ 0x1800D4CE8 (WPP_SF_SS.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800D6208 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800D6FB0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 */

__int64 __fastcall CAudioSessionManager::FindAudioSession(
        CAudioSessionManager *this,
        struct CAudioSessionInstanceId *a2,
        struct CAudioSession **a3)
{
  struct CAudioSession *v4; // rdi
  char *v7; // rbx
  __int64 Node; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-10h] BYREF
  char v11; // [rsp+38h] [rbp-8h]
  int v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+40h] BYREF
  char v14; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = (char *)this + 56;
  if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
         (_DWORD)v7,
         (_DWORD)a2,
         (unsigned int)&v13,
         (unsigned int)&v12,
         (__int64)&v14) )
  {
    Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
             (_DWORD)v7,
             (_DWORD)a2,
             (unsigned int)&v13,
             (unsigned int)&v12,
             (__int64)&v14);
    if ( !Node )
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               (__int64)v7,
               (__int64)a2,
               v13,
               v12);
    v4 = *(struct CAudioSession **)(Node + 80);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        0LL,
        *((_QWORD *)a2 + 9));
    }
    if ( v4 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  *a3 = v4;
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4 == 0LL ? 0x80070002 : 0;
}
