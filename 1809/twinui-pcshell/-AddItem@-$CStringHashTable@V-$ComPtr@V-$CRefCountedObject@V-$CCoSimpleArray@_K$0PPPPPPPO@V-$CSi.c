/*
 * XREFs of ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x18004BD0C
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18004BAD0 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180057940 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005CA1C (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800F9ED8 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::AddItem(
        __int64 a1,
        LPCWSTR *a2,
        __int64 *a3)
{
  HRESULT v5; // ebx
  _QWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v12; // rcx
  LPVOID pv; // [rsp+48h] [rbp+20h] BYREF

  pv = 0LL;
  v5 = SHStrDupW(*a2, (LPWSTR *)&pv);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v12 = *(unsigned int *)(a1 + 4);
    *v6 = 0LL;
    if ( is_mul_ok(v12, 0x18uLL) )
      v5 = CTLocalAllocPolicy::Alloc(
             (void *)v12,
             (v12 * (unsigned __int128)0x18uLL) >> 64,
             24 * v12,
             (void **)(a1 + 16));
    else
      v5 = -2147024362;
  }
  if ( v5 < 0 )
  {
LABEL_14:
    CoTaskMemFree(pv);
    return (unsigned int)v5;
  }
  v7 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 > *(_DWORD *)(a1 + 4) >> 1 )
  {
    v7 = (unsigned int)(2 * v7 - 1);
  }
  else if ( *(_DWORD *)(a1 + 8) <= (unsigned int)v7 >> 2 )
  {
    goto LABEL_6;
  }
  v5 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
         a1,
         v7);
LABEL_6:
  if ( v5 < 0 )
    goto LABEL_14;
  v8 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
         *v6,
         *(unsigned int *)(a1 + 4),
         &pv);
  v9 = (_DWORD *)v8;
  if ( *(_DWORD *)v8 == 1 )
  {
    v5 = -2147024809;
    goto LABEL_14;
  }
  if ( *(_DWORD *)v8 == 2 )
    --*(_DWORD *)(a1 + 8);
  *(_QWORD *)(v8 + 8) = pv;
  v10 = *a3;
  *(_QWORD *)(v8 + 16) = *a3;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *v9 = 1;
  v5 = 0;
  ++*(_DWORD *)a1;
  return (unsigned int)v5;
}
