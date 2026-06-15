/*
 * XREFs of ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18001F000 (AudioSessionManagerGetCurrentSession.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002E490 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180034B80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180035480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800CE380 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800D6D50 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800D6FB0 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180036D88 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C15D8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 */

__int64 __fastcall CAudioSessionInstanceId::ToString(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r14d
  char *v4; // r15
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, __int64); // rax
  int *v9; // rbx
  _DWORD *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  ATL::CAtlException *v13; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = *(char **)(a1 + 72);
  v5 = (volatile signed __int32 *)(v4 - 24);
  v6 = (volatile signed __int32 *)(*a2 - 24LL);
  if ( v4 - 24 != (char *)v6 )
  {
    try
    {
      if ( *((int *)v6 + 4) >= 0 && *(_QWORD *)v5 == *(_QWORD *)v6 )
      {
        v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v5
                                                                                                  + 32LL))(*(_QWORD *)v5);
        if ( *((int *)v5 + 4) >= 0 && v7 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v5 )
        {
          _InterlockedIncrement(v5 + 4);
        }
        else
        {
          v10 = v5 + 2;
          v11 = (**v7)(v7, *((unsigned int *)v5 + 2), 2LL);
          v5 = (volatile signed __int32 *)v11;
          if ( !v11 )
            ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v12);
          *(_DWORD *)(v11 + 8) = *v10;
          memcpy_s((void *const)(v11 + 24), 2LL * (*v10 + 1), v4, 2LL * (*v10 + 1));
        }
        if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD, volatile signed __int32 *))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6, v6);
        *a2 = v5 + 6;
      }
      else
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(a2, v4, *((unsigned int *)v4 - 4));
      }
    }
    catch ( ATL::CAtlException *v13 )
    {
      v9 = (int *)v13;
      if ( *(_DWORD *)v13 == -1073741571 )
        _o__resetstkoflw();
      v14 = *v9;
      v3 = *v9;
      if ( v14 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::ToString", 0x423u, v14);
    }
  }
  return v3;
}
