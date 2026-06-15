/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180006B84
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180006A28 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180006D20 (-Initialize@CAudioSessionStore@@QEAAJPEBG@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180006DF0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x180045E8C (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAudioSessionStore@@PEAV312@1@Z @ 0x1800464C0 (-NewNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct IPropertyStore **a3)
{
  struct IPolicyConfig *v5; // rbx
  __int64 v6; // rsi
  __int64 *v7; // r15
  _QWORD *v8; // r14
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // esi
  __int64 v12; // r8
  __int64 v13; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-40h] BYREF
  char v16; // [rsp+40h] [rbp-38h]
  volatile signed __int32 *v17; // [rsp+98h] [rbp+20h] BYREF

  v5 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 32);
  v16 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = *((_QWORD *)v5 + 11);
  v7 = (__int64 *)((char *)v5 + 72);
  v8 = (_QWORD *)*((_QWORD *)v5 + 9);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( !v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (volatile signed __int32 *)v8[2];
      v8 = (_QWORD *)*v8;
      v17 = v10;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v10, a2) )
        break;
      if ( !--v6 )
        goto LABEL_2;
    }
    v11 = 0;
  }
  else
  {
LABEL_2:
    v9 = (volatile signed __int32 *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CAudioSessionStore::`vftable';
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids, v9);
      }
      *((_DWORD *)v10 + 2) = 1;
      *((_DWORD *)v10 + 10) = 0;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
      *((_QWORD *)v10 + 4) = 0LL;
    }
    else
    {
      v10 = 0LL;
    }
    v17 = v10;
    if ( !v10 )
    {
      v11 = -2147024882;
      goto LABEL_19;
    }
    v11 = CAudioSessionStore::Initialize((CAudioSessionStore *)v10, a2);
    if ( v11 < 0 )
    {
      v17 = 0LL;
      CAudioSessionStore::Release((CAudioSessionStore *)v10);
      goto LABEL_19;
    }
    v13 = ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::NewNode(
            v7,
            &v17,
            v12,
            *v7,
            v10,
            -2LL);
    if ( *v7 )
      *(_QWORD *)(*v7 + 8) = v13;
    else
      v7[1] = v13;
    *v7 = v13;
  }
  if ( v10 )
  {
    *a3 = (struct IPropertyStore *)v10;
    _InterlockedIncrement(v10 + 2);
    _InterlockedIncrement(v17 + 10);
    goto LABEL_13;
  }
LABEL_19:
  *a3 = 0LL;
LABEL_13:
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetAudioSessionPropertyStore", 0x13B4u, v11);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
