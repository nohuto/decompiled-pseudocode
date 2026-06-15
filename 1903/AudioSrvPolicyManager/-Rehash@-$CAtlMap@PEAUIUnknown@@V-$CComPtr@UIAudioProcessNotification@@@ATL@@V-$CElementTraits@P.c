/*
 * XREFs of ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1800162BC
 * Callers:
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180016488 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800165CC (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA_NI_N@Z @ 0x1800161E8 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementT.c)
 *     ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAI_K@Z @ 0x1800163FC (-PickSize@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXXZ @ 0x18001667C (-UpdateRehashThresholds@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::Rehash(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // esi
  SIZE_T v4; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 i; // r9
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // rdx
  void *v12; // rbx
  HANDLE v13; // rax

  v2 = a2;
  if ( !a2 )
    v2 = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize(
           a1,
           *(_QWORD *)(a1 + 8));
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = 8LL * v2;
      if ( !is_mul_ok(v2, 8uLL) )
        v4 = -1LL;
      ProcessHeap = GetProcessHeap();
      v6 = HeapAlloc(ProcessHeap, 0, v4);
      v7 = v6;
      if ( !v6 )
        ATL::AtlThrowImpl(-2147024882);
      memset_0(v6, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v9 )
        {
          do
          {
            v10 = *(_QWORD *)(v9 + 16);
            v11 = *(_DWORD *)(v9 + 24) % v2;
            *(_QWORD *)(v9 + 16) = v7[v11];
            v7[(unsigned int)v11] = v9;
            v9 = v10;
          }
          while ( v10 );
        }
      }
      v12 = *(void **)a1;
      v13 = GetProcessHeap();
      HeapFree(v13, 0, v12);
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 16) = v2;
      ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::UpdateRehashThresholds(a1);
    }
    else
    {
      ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::InitHashTable(
        a1,
        v2,
        0);
    }
  }
}
