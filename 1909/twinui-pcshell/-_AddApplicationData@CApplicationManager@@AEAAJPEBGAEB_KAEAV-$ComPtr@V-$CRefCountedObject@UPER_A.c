/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18000B6CC
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000B9C8 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18000B320 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18000B3C4 (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@XZ @ 0x18000B95C (--$CreateRefCountedObj@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@_K@@@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180059880 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006643C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18006E544 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007B648 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18013EEA0 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_AddApplicationData(__int64 a1, const WCHAR *a2, _QWORD *a3, __int64 *a4)
{
  unsigned int *v8; // rbx
  int v9; // edi
  __int64 *v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rax
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  LPWSTR v19; // rcx
  __int64 v20; // rsi
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int128 v29; // rax
  unsigned __int64 v30; // kr00_8
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  _QWORD v33[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  LPWSTR ppwsz; // [rsp+70h] [rbp+40h] BYREF
  const WCHAR *v36; // [rsp+78h] [rbp+48h] BYREF

  v36 = a2;
  v33[1] = -2LL;
  v8 = (unsigned int *)(a1 + 1000);
  v9 = 0;
  v10 = (__int64 *)(a1 + 1016);
  if ( !*(_QWORD *)(a1 + 1016) )
  {
    v28 = *(unsigned int *)(a1 + 1004);
    *v10 = 0LL;
    v30 = v28;
    v29 = v28 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v30, 0x18uLL) )
      v9 = CTLocalAllocPolicy::Alloc((void *)a1, DWORD2(v29), v29, (void **)(a1 + 1016));
    else
      v9 = -2147024362;
  }
  if ( v9 < 0 )
    goto LABEL_44;
  v11 = v8[1];
  if ( *v8 > v11 >> 1 )
  {
    v11 = 2 * v11 - 1;
  }
  else if ( v8[2] <= v11 >> 2 )
  {
    goto LABEL_5;
  }
  v9 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
         (__int64)v8,
         v11);
LABEL_5:
  if ( v9 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213B,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9,
      v33[0]);
    return (unsigned int)v9;
  }
  v12 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *v10,
          v8[1],
          a3);
  v13 = (_DWORD *)v12;
  if ( *(_DWORD *)v12 == 1 )
  {
    v9 = -2147024809;
    goto LABEL_44;
  }
  if ( *(_DWORD *)v12 == 2 )
    --v8[2];
  *(_QWORD *)(v12 + 8) = *a3;
  v14 = *a4;
  *(_QWORD *)(v12 + 16) = *a4;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  *v13 = 1;
  ++*v8;
  v33[0] = 0LL;
  v15 = *(_QWORD *)(a1 + 1040);
  if ( !v15
    || (v16 = (_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                          v15,
                          *(unsigned int *)(a1 + 1028),
                          &v36),
        *v16 != 1) )
  {
    v17 = (_QWORD *)CreateRefCountedObj<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>,>(&ppwsz);
    v18 = 0LL;
    if ( v33 != v17 )
    {
      v18 = (_QWORD *)*v17;
      *v17 = 0LL;
    }
    v33[0] = v18;
    v19 = ppwsz;
    if ( ppwsz )
    {
      ppwsz = 0LL;
      (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = a1 + 1024;
    ppwsz = 0LL;
    v9 = SHStrDupW(a2, &ppwsz);
    if ( v9 < 0 )
      goto LABEL_52;
    v9 = 0;
    v21 = (_QWORD *)(a1 + 1040);
    if ( !*(_QWORD *)(v20 + 16) )
    {
      v31 = *(unsigned int *)(v20 + 4);
      *v21 = 0LL;
      if ( is_mul_ok(v31, 0x18uLL) )
        v9 = CTLocalAllocPolicy::Alloc(
               (void *)v31,
               (v31 * (unsigned __int128)0x18uLL) >> 64,
               24 * v31,
               (void **)(v20 + 16));
      else
        v9 = -2147024362;
    }
    if ( v9 < 0 )
    {
LABEL_51:
      CoTaskMemFree(ppwsz);
LABEL_52:
      v32 = 8513LL;
      goto LABEL_53;
    }
    v22 = *(unsigned int *)(v20 + 4);
    if ( *(_DWORD *)v20 > *(_DWORD *)(v20 + 4) >> 1 )
    {
      v22 = (unsigned int)(2 * v22 - 1);
    }
    else if ( *(_DWORD *)(v20 + 8) <= (unsigned int)v22 >> 2 )
    {
      goto LABEL_22;
    }
    v9 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           v20,
           v22);
LABEL_22:
    if ( v9 >= 0 )
    {
      v23 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *v21,
              *(unsigned int *)(v20 + 4),
              &ppwsz);
      v24 = (_DWORD *)v23;
      if ( *(_DWORD *)v23 != 1 )
      {
        if ( *(_DWORD *)v23 == 2 )
          --*(_DWORD *)(v20 + 8);
        *(_QWORD *)(v23 + 8) = ppwsz;
        *(_QWORD *)(v23 + 16) = v18;
        if ( v18 )
          (*(void (__fastcall **)(_QWORD *))(*v18 + 8LL))(v18);
        *v24 = 1;
        ++*(_DWORD *)v20;
        goto LABEL_29;
      }
      v9 = -2147024809;
    }
    goto LABEL_51;
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
    v33,
    v16 + 4);
  v18 = (_QWORD *)v33[0];
LABEL_29:
  v25 = v18[2];
  if ( v25 != v18[4]
    || (v9 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               v18 + 1,
               v25 + 1),
        v9 >= 0) )
  {
    v26 = (_QWORD *)(v18[1] + 8 * v18[2]++);
    if ( v26 )
      *v26 = *a3;
    v9 = 0;
    goto LABEL_34;
  }
  v32 = 8516LL;
LABEL_53:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v9,
    v33[0]);
LABEL_34:
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  return (unsigned int)v9;
}
