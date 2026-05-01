/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x180313040
 * Callers:
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180311F50 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005CA1C (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18031332C (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803134A0 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v4; // edx
  void **v5; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rdi

  v4 = 0;
  v5 = a1 + 2;
  if ( !a1[2] )
  {
    v9 = *((unsigned int *)a1 + 1);
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v11, 0x18uLL) )
      v4 = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, v5);
    else
      v4 = -2147024362;
  }
  if ( v4 >= 0 )
  {
    v12 = *((_DWORD *)a1 + 1);
    if ( *(_DWORD *)a1 <= v12 >> 1 )
    {
      if ( *((_DWORD *)a1 + 2) <= v12 >> 2 )
        goto LABEL_11;
      v13 = v12;
    }
    else
    {
      v13 = 2 * v12 - 1;
    }
    v4 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           a1,
           v13);
LABEL_11:
    if ( v4 >= 0 )
    {
      v14 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *v5,
              *((unsigned int *)a1 + 1),
              a3);
      v15 = (_DWORD *)v14;
      if ( *(_DWORD *)v14 == 1 )
      {
        return (unsigned int)-2147024809;
      }
      else
      {
        if ( *(_DWORD *)v14 == 2 )
          --*((_DWORD *)a1 + 2);
        *(_QWORD *)(v14 + 8) = *a3;
        *(_QWORD *)(v14 + 16) = *a4;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v14 + 16));
        *v15 = 1;
        ++*(_DWORD *)a1;
        return 0;
      }
    }
  }
  return (unsigned int)v4;
}
