/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBUThumbnailData@MultitaskingViewAnimationCoordinatorBase@@PEAU34@@Z @ 0x18037353C
 * Callers:
 *     ?AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@@PEAUIDCompBatchAnimationCallback@@_N@Z @ 0x1803721D8 (-AnimateVisibleSwitchItem@MultitaskingViewAnimationCoordinatorBase@@IEAAJPEAUISwitchItemElement@.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180069F34 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18037386C (-_RehashTable@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinator.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinatorBase@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803739F0 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@UThumbnailData@MultitaskingViewAnimationCoordinato.c)
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        unsigned int *a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v4; // edx
  _QWORD *v5; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rsi

  v4 = 0;
  v5 = a1 + 4;
  if ( !*((_QWORD *)a1 + 2) )
  {
    v9 = a1[1];
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x20uLL;
    if ( is_mul_ok(v11, 0x20uLL) )
      v4 = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, (void **)a1 + 2);
    else
      v4 = -2147024362;
  }
  if ( v4 >= 0 )
  {
    v12 = a1[1];
    if ( *a1 <= v12 >> 1 )
    {
      if ( a1[2] <= v12 >> 2 )
        goto LABEL_11;
      v13 = v12;
    }
    else
    {
      v13 = 2 * v12 - 1;
    }
    v4 = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           a1,
           v13);
LABEL_11:
    if ( v4 >= 0 )
    {
      v14 = CSimpleHashTable<HWND__ *,MultitaskingViewAnimationCoordinatorBase::ThumbnailData,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *v5,
              a1[1],
              a3);
      v15 = v14;
      if ( *(_DWORD *)v14 == 1 )
      {
        return (unsigned int)-2147024809;
      }
      else
      {
        if ( *(_DWORD *)v14 == 2 )
          --a1[2];
        *(_QWORD *)(v14 + 8) = *a3;
        *(_QWORD *)(v14 + 16) = *a4;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v14 + 16));
        *(_QWORD *)(v15 + 24) = a4[1];
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v15 + 24));
        *(_DWORD *)v15 = 1;
        ++*a1;
        return 0;
      }
    }
  }
  return (unsigned int)v4;
}
