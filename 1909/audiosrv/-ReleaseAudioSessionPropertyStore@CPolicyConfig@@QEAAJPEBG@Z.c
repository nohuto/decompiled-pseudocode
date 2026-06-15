/*
 * XREFs of ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18004DEA0
 * Callers:
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DDBC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18003DBC0 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCAudioSessionStore@@V?$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18004DF9C (-FreeNode@-$CAtlList@PEAVCAudioSessionStore@@V-$CElementTraits@PEAVCAudioSessionStore@@@ATL@@@AT.c)
 *     ?IsEqual@CAudioSessionStore@@QEAAHPEBG@Z @ 0x18004E030 (-IsEqual@CAudioSessionStore@@QEAAHPEBG@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CPolicyConfig::ReleaseAudioSessionPropertyStore(CPolicyConfig *this, const unsigned __int16 *a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 **v6; // rdi
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  volatile signed __int32 *v9; // r14
  __int64 *v10; // rax
  __int64 *v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v14 = 0;
  v4 = -2147023728;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v5 = *((_QWORD *)this + 10);
  v6 = (__int64 **)((char *)this + 64);
  v7 = (__int64 *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    while ( 1 )
    {
      v8 = v7;
      if ( !v7 )
        goto LABEL_18;
      v9 = (volatile signed __int32 *)v7[2];
      v7 = (__int64 *)*v7;
      if ( CAudioSessionStore::IsEqual((CAudioSessionStore *)v9, a2) )
        break;
      if ( !--v5 )
        goto LABEL_17;
    }
    v4 = 0;
    if ( _InterlockedExchangeAdd(v9 + 10, 0xFFFFFFFF) == 1 )
    {
      if ( !v8 )
LABEL_18:
        ATL::AtlThrowImpl(-2147467259);
      v10 = (__int64 *)*v8;
      if ( v8 == *v6 )
        *v6 = v10;
      else
        *(_QWORD *)v8[1] = v10;
      v11 = (__int64 *)v8[1];
      if ( v8 == v6[1] )
        v6[1] = v11;
      else
        *(_QWORD *)(*v8 + 8) = v11;
      ATL::CAtlList<CAudioSessionStore *,ATL::CElementTraits<CAudioSessionStore *>>::FreeNode(v6, v8);
      CAudioSessionStore::Release((CAudioSessionStore *)v9);
    }
  }
  else
  {
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ReleaseAudioSessionPropertyStore", 3149, -2147023728);
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
