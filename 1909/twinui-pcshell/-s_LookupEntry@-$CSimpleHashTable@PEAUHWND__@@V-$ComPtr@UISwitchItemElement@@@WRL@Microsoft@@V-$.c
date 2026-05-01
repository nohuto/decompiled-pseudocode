/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x180393390
 * Callers:
 *     _lambda_e2c0853faeb8110aeaae9508528948ac_::operator() @ 0x180391874 (_lambda_e2c0853faeb8110aeaae9508528948ac_--operator().c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUHWND__@@AEBV?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@PEAV345@@Z @ 0x180392F30 (-_AddUpdateItem@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18039321C (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x1803EB740 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1803EB884 (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  unsigned __int64 i; // r11
  int v7; // r10d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // eax

  v5 = 314159269;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 ^= (v5 >> 2) + 2080 * v5 + v7;
  }
  v8 = (v5 & 0x7FFFFFFF) % a2;
  v9 = -1;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 24 * v8);
    if ( v10 != 2 )
      break;
    if ( v9 == -1 )
    {
      v9 = v8;
      goto LABEL_10;
    }
LABEL_8:
    if ( v10 == 1 && *(_QWORD *)(a1 + 24 * v8 + 8) == *a3 )
      return a1 + 24 * v8;
LABEL_10:
    v8 = ((int)v8 + 1) % a2;
  }
  if ( v10 )
    goto LABEL_8;
  if ( v9 != -1 )
    v8 = v9;
  return a1 + 24 * v8;
}
