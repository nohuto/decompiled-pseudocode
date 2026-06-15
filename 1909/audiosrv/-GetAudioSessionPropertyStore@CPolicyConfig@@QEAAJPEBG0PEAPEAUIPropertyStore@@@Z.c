/*
 * XREFs of ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG0PEAPEAUIPropertyStore@@@Z @ 0x18003DA24
 * Callers:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003D848 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18003DBC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?Initialize@CAudioSessionStore@@QEAAJPEBG0@Z @ 0x18003DDF4 (-Initialize@CAudioSessionStore@@QEAAJPEBG0@Z.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18004E030 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCAudioSessionStore@@PEAV312@1@Z @ 0x18004E540 (-NewNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct IPropertyStore **a4)
{
  struct IPropertyStore **v4; // r12
  __int64 v7; // r14
  __int64 *v8; // r15
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  volatile signed __int32 *v12; // rsi
  int v13; // eax
  __int64 v14; // r8
  int v15; // r14d
  __int64 v17; // rax
  volatile signed __int32 *v18; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v19; // [rsp+28h] [rbp-50h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  ATL::CAtlException *v21; // [rsp+38h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-38h] BYREF
  char v23; // [rsp+48h] [rbp-30h]

  v20 = -2LL;
  v4 = a4;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v7 = *((_QWORD *)this + 10);
  v8 = (__int64 *)((char *)this + 64);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( !v9 )
        ATL::AtlThrowImpl(-2147467259);
      v12 = (volatile signed __int32 *)v9[2];
      v9 = (_QWORD *)*v9;
      v18 = v12;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v12, a2) )
        break;
      if ( !--v7 )
        goto LABEL_2;
    }
    v15 = 0;
  }
  else
  {
LABEL_2:
    v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      *v10 = &CAudioSessionStore::`vftable';
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_57d37c8ff9313a19082f121b66211c14_Traceguids, v10);
      }
      *((_DWORD *)v11 + 2) = 1;
      *((_DWORD *)v11 + 10) = 0;
      v11[2] = 0LL;
      v11[3] = 0LL;
      v11[4] = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    v19 = v11;
    v12 = (volatile signed __int32 *)v11;
    v18 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      v13 = CAudioSessionStore::Initialize((CAudioSessionStore *)v11, a2, a3);
      v15 = v13;
      if ( v13 >= 0 )
      {
        try
        {
          v17 = ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::NewNode(
                  v8,
                  &v18,
                  v14,
                  *v8);
        }
        catch ( ATL::CAtlException *v21 )
        {
          v4 = a4;
          v15 = *(_DWORD *)v21;
          v12 = v18;
          v11 = v19;
          goto LABEL_19;
        }
        if ( *v8 )
          *(_QWORD *)(*v8 + 8) = v17;
        else
          v8[1] = v17;
        *v8 = v17;
LABEL_19:
        if ( v15 >= 0 )
          goto LABEL_20;
      }
      CAudioSessionStore::Release((CAudioSessionStore *)v11);
      v12 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v15 = -2147024882;
    }
    if ( v15 < 0 )
    {
LABEL_10:
      *v4 = 0LL;
      goto LABEL_11;
    }
  }
LABEL_20:
  if ( !v12 )
    goto LABEL_10;
  *v4 = (struct IPropertyStore *)v12;
  _InterlockedIncrement(v12 + 2);
  _InterlockedIncrement(v18 + 10);
LABEL_11:
  if ( v15 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetAudioSessionPropertyStore", 3081, v15);
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v15;
}
