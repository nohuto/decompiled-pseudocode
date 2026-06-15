/*
 * XREFs of ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180034B80
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002E490 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180034D30 (-NewNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?InitHashTable@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NI_N@Z @ 0x180036F50 (-InitHashTable@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTr.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r8
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned __int16 *v11; // rcx
  unsigned __int16 i; // ax
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  volatile signed __int32 *v18; // rdx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  volatile signed __int32 *v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = (volatile signed __int32 *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
  if ( (int)CAudioSessionInstanceId::ToString(a2, &v23) < 0 )
  {
    v18 = v23 - 6;
    if ( _InterlockedExchangeAdd(v23 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 8LL))(*(_QWORD *)v18);
    v10 = 0;
  }
  else
  {
    v7 = v23;
    v8 = *((int *)v23 - 4);
    if ( ((1 - *((_DWORD *)v23 - 2)) | (*((_DWORD *)v23 - 3) - (int)v8)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v23, v8);
      v7 = v23;
    }
    _o__wcsupr_s(v7, (int)v8 + 1);
    if ( (int)v8 < 0 || (int)v8 > *((_DWORD *)v7 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v7 - 4) = v8;
    v9 = v8;
    v10 = 0;
    *((_WORD *)v7 + v9) = 0;
    v11 = (unsigned __int16 *)v7;
    for ( i = *(_WORD *)v7; *v11; i = *v11 )
    {
      v10 = i + 33 * v10;
      ++v11;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v7 - 6));
  }
  if ( *((_DWORD *)a1 + 4) == 17 )
    v13 = v10 % 0x11;
  else
    v13 = v10 % *((_DWORD *)a1 + 4);
  v14 = *a1;
  if ( !*a1 )
    goto LABEL_19;
  v15 = *(_QWORD *)(v14 + 8LL * v13);
  if ( v15 )
  {
    do
    {
      if ( *(_DWORD *)(v15 + 96) == v10 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v15, *(_QWORD *)a2) )
      {
        v19 = *(_DWORD *)(v15 + 64);
        if ( v19 == *(_DWORD *)(a2 + 64) && (v19 || *(_DWORD *)(v15 + 56) == *(_DWORD *)(a2 + 56)) )
        {
          v20 = *(_DWORD *)(v15 + 48);
          if ( v20 == *(_DWORD *)(a2 + 48)
            && (v20 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(v15 + 8), *(_QWORD *)(a2 + 8))) )
          {
            v21 = *(_QWORD *)(v15 + 24) - *(_QWORD *)(a2 + 24);
            if ( !v21 )
              v21 = *(_QWORD *)(v15 + 32) - *(_QWORD *)(a2 + 32);
            if ( !v21 )
            {
              *(_QWORD *)(v15 + 80) = *a3;
              return v15;
            }
          }
        }
      }
      v15 = *(_QWORD *)(v15 + 88);
    }
    while ( v15 );
    v14 = *a1;
  }
  if ( !v14 )
  {
LABEL_19:
    LOBYTE(v6) = 1;
    if ( !(unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::InitHashTable(
                             a1,
                             *((unsigned int *)a1 + 4),
                             v6) )
      ATL::AtlThrowImpl(-2147024882);
  }
  v16 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
          a1,
          a2,
          v13,
          v10,
          -2LL);
  v15 = v16;
  v23 = (volatile signed __int32 *)v16;
  try
  {
    *(_QWORD *)(v16 + 80) = *a3;
  }
  catch ( ... )
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
      a1,
      v23);
    throw;
  }
  return v15;
}
