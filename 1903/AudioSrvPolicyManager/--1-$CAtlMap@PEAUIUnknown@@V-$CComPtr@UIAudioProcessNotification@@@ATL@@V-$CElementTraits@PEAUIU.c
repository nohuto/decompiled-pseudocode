/*
 * XREFs of ??1?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA@XZ @ 0x1800157A0
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x18001264C (--1CProcess@@MEAA@XZ.c)
 * Callees:
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA_NI_N@Z @ 0x1800161E8 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementT.c)
 *     ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAI_K@Z @ 0x1800163FC (-PickSize@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800165CC (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 */

void __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::~CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rbx
  __int64 i; // rsi
  __int64 v5; // rbp
  __int64 v6; // rdx
  HANDLE ProcessHeap; // rax
  unsigned int v8; // eax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx

  ++*(_DWORD *)(a1 + 48);
  v2 = *(void **)a1;
  v3 = v2;
  if ( v2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v5 = *((_QWORD *)v2 + i);
      v3 = v2;
      if ( v5 )
      {
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 16);
          ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::FreeNode(
            a1,
            v6);
        }
        while ( v5 );
        v2 = *(void **)a1;
        v3 = *(void **)a1;
      }
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v8 = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize(
           a1,
           0LL);
    ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::InitHashTable(
      a1,
      v8,
      0LL);
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  v9 = *(_QWORD **)(a1 + 56);
  if ( v9 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      free(v9);
      v9 = v10;
    }
    while ( v10 );
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  --*(_DWORD *)(a1 + 48);
}
