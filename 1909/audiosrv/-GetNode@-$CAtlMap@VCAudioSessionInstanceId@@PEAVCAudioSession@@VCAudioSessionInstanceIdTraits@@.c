/*
 * XREFs of ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x1800D6FB0
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800D64E0 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800D7AA0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 * Callees:
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18002EE70 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180048474 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x1800DC488 (-MakeUpper@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ.c)
 */

__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
        __int64 a1,
        __int64 a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned __int16 **Upper; // rax
  unsigned int v10; // ebx
  _QWORD *v11; // r14
  __int64 v12; // rbp
  __int64 i; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v18, (__int64)&ATL::g_strmgr);
  if ( (int)CAudioSessionInstanceId::ToString(a2, &v18) < 0 )
  {
    v10 = 0;
  }
  else
  {
    Upper = (unsigned __int16 **)ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(&v18);
    v10 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*Upper);
  }
  ATL::CStringData::Release((ATL::CStringData *)(v18 - 24));
  *a4 = v10;
  *a3 = v10 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v11 = a5;
    v12 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = *(_QWORD *)(i + 88) )
    {
      if ( *(_DWORD *)(i + 96) == *a4 && !(unsigned int)_o__wcsicmp(*(_QWORD *)i, *(_QWORD *)a2) )
      {
        v14 = *(_DWORD *)(i + 64);
        if ( v14 == *(_DWORD *)(a2 + 64) && (v14 || *(_DWORD *)(i + 56) == *(_DWORD *)(a2 + 56)) )
        {
          v15 = *(_DWORD *)(i + 48);
          if ( v15 == *(_DWORD *)(a2 + 48)
            && (v15 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(i + 8), *(_QWORD *)(a2 + 8))) )
          {
            v16 = *(_QWORD *)(i + 24) - *(_QWORD *)(a2 + 24);
            if ( !v16 )
              v16 = *(_QWORD *)(i + 32) - *(_QWORD *)(a2 + 32);
            if ( !v16 )
            {
              *v11 = v12;
              return i;
            }
          }
        }
      }
      v12 = i;
    }
  }
  return 0LL;
}
