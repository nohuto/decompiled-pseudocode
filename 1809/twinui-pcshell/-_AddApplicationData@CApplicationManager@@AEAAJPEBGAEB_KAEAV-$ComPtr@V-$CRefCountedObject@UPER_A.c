/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18004BAD0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B724 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x18004BD0C (-AddItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSi.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@XZ @ 0x18004BE00 (--$CreateRefCountedObj@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@_K@@@.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18004C88C (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18004C950 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180057940 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18005C7C4 (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18005CA1C (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180075D48 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_AddApplicationData(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  signed int v15; // edi
  _DWORD *v16; // rax
  _QWORD *RefCounted; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned __int64 v25; // rdx
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // kr00_8
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  _QWORD v30[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  _QWORD *v32; // [rsp+60h] [rbp+30h] BYREF
  __int64 v33; // [rsp+68h] [rbp+38h] BYREF

  v33 = a2;
  v30[1] = -2LL;
  v7 = (_DWORD *)(a1 + 992);
  v8 = 0;
  v9 = (_QWORD *)(a1 + 1008);
  if ( !*(_QWORD *)(a1 + 1008) )
  {
    v25 = *(unsigned int *)(a1 + 996);
    *v9 = 0LL;
    v27 = v25;
    v26 = v25 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v27, 0x18uLL) )
      v8 = CTLocalAllocPolicy::Alloc((void *)a1, DWORD2(v26), v26, (void **)(a1 + 1008));
    else
      v8 = -2147024362;
  }
  if ( v8 < 0 )
    goto LABEL_36;
  if ( *v7 > v7[1] >> 1 || v7[2] > v7[1] >> 2 )
    v8 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(v7);
  if ( v8 < 0 )
    goto LABEL_36;
  v10 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *v9,
          (unsigned int)v7[1],
          a3);
  v11 = (_DWORD *)v10;
  if ( *(_DWORD *)v10 == 1 )
  {
    v8 = -2147024809;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2073,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)v10 == 2 )
    --v7[2];
  *(_QWORD *)(v10 + 8) = *a3;
  v12 = *a4;
  *(_QWORD *)(v10 + 16) = *a4;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *v11 = 1;
  ++*v7;
  v13 = 0LL;
  v32 = 0LL;
  v14 = *(_QWORD *)(a1 + 1032);
  v15 = v14 == 0 ? 0x8002802B : 0;
  if ( v14 )
  {
    v16 = (_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                      v14,
                      *(unsigned int *)(a1 + 1020),
                      &v33);
    v15 = *v16 != 1 ? 0x8002802B : 0;
    if ( *v16 == 1 )
    {
      Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=(&v32, v16 + 4);
      v13 = v32;
    }
  }
  if ( v15 >= 0 )
    goto LABEL_22;
  RefCounted = (_QWORD *)CreateRefCountedObj<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>(v30);
  v18 = 0LL;
  if ( &v32 != RefCounted )
  {
    v18 = (_QWORD *)*RefCounted;
    *RefCounted = 0LL;
  }
  v19 = v13;
  v13 = v18;
  v32 = v18;
  if ( v19 )
    (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  v20 = v30[0];
  if ( v30[0] )
  {
    v30[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::AddItem(
          a1 + 1016,
          &v33,
          &v32);
  v8 = v21;
  if ( v21 < 0 )
  {
    v28 = (unsigned int)v21;
    v29 = 8313LL;
  }
  else
  {
LABEL_22:
    v22 = v13[2];
    if ( v22 != v13[4]
      || (v8 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                 v13 + 1,
                 v22 + 1),
          v8 >= 0) )
    {
      v23 = (_QWORD *)(v13[1] + 8 * v13[2]++);
      if ( v23 )
        *v23 = *a3;
      v8 = 0;
      goto LABEL_27;
    }
    v28 = (unsigned int)v8;
    v29 = 8316LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v28);
LABEL_27:
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
  return (unsigned int)v8;
}
