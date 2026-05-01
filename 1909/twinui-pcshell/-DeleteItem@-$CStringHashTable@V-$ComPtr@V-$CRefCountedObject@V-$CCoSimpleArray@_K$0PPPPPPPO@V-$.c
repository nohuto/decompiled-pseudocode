/*
 * XREFs of ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x18012FC18
 * Callers:
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18013B0A4 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 * Callees:
 *     ?CompareKey@CStringCompare@@SAHQEBG0@Z @ 0x18012F384 (-CompareKey@CStringCompare@@SAHQEBG0@Z.c)
 *     ?_FreeBucket@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x18013B984 (-_FreeBucket@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPP.c)
 */

__int64 __fastcall CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::DeleteItem(
        __int64 a1,
        const WCHAR **a2)
{
  const WCHAR *v2; // r12
  unsigned int v3; // ebx
  char v5; // r14
  unsigned int v6; // esi
  __int64 v7; // r15

  v2 = *a2;
  v3 = 0;
  v5 = 0;
  if ( !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-2147319765;
  v6 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return (unsigned int)-2147319765;
  do
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v7 + 24LL * v6) == 1 && CStringCompare::CompareKey(*(const WCHAR **)(v7 + 24LL * v6 + 8), v2) )
    {
      CoTaskMemFree(*(LPVOID *)(v7 + 24LL * v6 + 8));
      v5 = 1;
      CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
        a1,
        *(_QWORD *)(a1 + 16) + 24LL * v6);
    }
    ++v6;
  }
  while ( v6 < *(_DWORD *)(a1 + 4) );
  if ( !v5 )
    return (unsigned int)-2147319765;
  return v3;
}
