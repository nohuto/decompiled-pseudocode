/*
 * XREFs of ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180057940
 * Callers:
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18004BAD0 (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x18004BD0C (-AddItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSi.c)
 *     ?_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180073BAC (-_GetApplicationData@CApplicationManager@@AEAAJPEBGAEAV-$ComPtr@V-$CRefCountedObject@UPER_APPLIC.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1800F6840 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1800F6938 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1800F9ED8 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
        __int64 a1,
        unsigned int a2,
        LPCWCH *a3)
{
  LPCWCH v3; // r11
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r10
  int v11; // r8d
  int v12; // edi
  unsigned int i; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax

  v3 = *a3;
  v7 = 314159269;
  v8 = -1LL;
  do
    ++v8;
  while ( v3[v8] );
  v9 = 0LL;
  v10 = 2 * v8;
  if ( v10 )
  {
    do
    {
      v11 = *((unsigned __int8 *)v3 + v9++);
      v7 ^= (v7 >> 2) + 2080 * v7 + v11;
    }
    while ( v9 < v10 );
  }
  v12 = -1;
  for ( i = v7 & 0x7FFFFFFF; ; i = v14 + 1 )
  {
    v14 = i % a2;
    v15 = 3LL * (i % a2);
    v16 = *(_DWORD *)(a1 + 24LL * (i % a2));
    if ( v16 == 2 )
    {
      if ( v12 == -1 )
        v12 = v14;
      continue;
    }
    if ( !v16 )
      break;
    if ( v16 == 1 && CompareStringOrdinal(*(LPCWCH *)(a1 + 8 * v15 + 8), -1, *a3, -1, 0) == 2 )
      return a1 + 24LL * v14;
  }
  if ( v12 != -1 )
    v14 = v12;
  return a1 + 24LL * v14;
}
