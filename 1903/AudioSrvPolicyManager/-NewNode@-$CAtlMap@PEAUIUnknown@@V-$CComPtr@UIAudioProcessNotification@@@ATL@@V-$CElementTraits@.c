/*
 * XREFs of ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180016488
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x180015684 (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PE.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXI@Z @ 0x1800162BC (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@P.c)
 *     ?PickSize@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAI_K@Z @ 0x1800163FC (-PickSize@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::NewNode(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // edx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = *(unsigned int *)(a1 + 52);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x20 )
        goto LABEL_8;
      v8 *= 32LL;
    }
    if ( ~v8 >= 8 )
    {
      v9 = malloc(v8 + 8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_18;
      *v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v9;
LABEL_9:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 52);
        for ( i = &v10[4 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 4 )
        {
          i[2] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = i;
        }
        goto LABEL_13;
      }
LABEL_18:
      ATL::AtlThrowImpl(-2147024882);
    }
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 16);
  *(_QWORD *)v13 = *a2;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_DWORD *)(v13 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::PickSize(
            a1,
            v14);
    ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::Rehash(
      a1,
      v15);
  }
  return v13;
}
