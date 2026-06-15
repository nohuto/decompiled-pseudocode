/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18001E300
 * Callers:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18001E2B4 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800C7FD0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180020320 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x180020360 (-MakeUpper@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002B7E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        __int64 a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *Upper; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  __int64 i; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( (int)CAudioSessionInstanceId::ToString(a2, v17) < 0 )
  {
    v10 = 0;
  }
  else
  {
    Upper = (_QWORD *)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(v17);
    v10 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*Upper);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v17[0] - 24LL));
  *a4 = v10;
  *a3 = v10 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v11 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_DWORD *)(i + 96) == *a4 && !(unsigned int)_o__wcsicmp(*(_QWORD *)i, *(_QWORD *)a2) )
      {
        v13 = *(_DWORD *)(i + 64);
        if ( v13 == *(_DWORD *)(a2 + 64) && (v13 || *(_DWORD *)(i + 56) == *(_DWORD *)(a2 + 56)) )
        {
          v14 = *(_DWORD *)(i + 48);
          if ( v14 == *(_DWORD *)(a2 + 48)
            && (v14 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(i + 8), *(_QWORD *)(a2 + 8))) )
          {
            v15 = *(_QWORD *)(i + 24) - *(_QWORD *)(a2 + 24);
            if ( !v15 )
              v15 = *(_QWORD *)(i + 32) - *(_QWORD *)(a2 + 32);
            if ( !v15 )
            {
              *a5 = v11;
              return i;
            }
          }
        }
      }
      v11 = i;
    }
  }
  return 0LL;
}
