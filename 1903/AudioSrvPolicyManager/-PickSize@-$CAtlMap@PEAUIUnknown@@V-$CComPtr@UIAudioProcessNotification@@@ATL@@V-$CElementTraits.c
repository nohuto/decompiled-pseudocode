/*
 * XREFs of ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAI_K@Z @ 0x1800163FC
 * Callers:
 *     ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x1800157A0 (--1-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PEAUIU.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1800162BC (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@P.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180016488 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800165CC (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize(
        __int64 a1,
        __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // edx
  unsigned int *v7; // rax
  __int64 result; // rax

  v2 = (double)(int)a2;
  if ( a2 < 0 )
    v2 = v2 + 1.844674407370955e19;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  if ( v5 > 0xFFFFFFFF )
    LODWORD(v5) = -1;
  v6 = 0;
  if ( (unsigned int)v5 > 0x11 )
  {
    v7 = `ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize'::`2'::s_anPrimes;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = `ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize'::`2'::s_anPrimes[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
