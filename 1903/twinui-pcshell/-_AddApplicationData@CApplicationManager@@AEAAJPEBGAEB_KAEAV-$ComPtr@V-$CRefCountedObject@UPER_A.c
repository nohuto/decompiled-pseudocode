/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180017CB0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180017298 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@XZ @ 0x180017F40 (--$CreateRefCountedObj@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@_K@@@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x18005A870 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180063264 (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x180063328 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18006428C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180069F34 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180079088 (--4-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHe.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x18011FA00 (-_RehashTable@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_AddApplicationData(__int64 a1, const WCHAR *a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v8; // rbx
  HRESULT v9; // edi
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  LPWSTR v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *v25; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // kr00_8
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD v32[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  LPWSTR ppwsz; // [rsp+70h] [rbp+40h] BYREF
  const WCHAR *v35; // [rsp+78h] [rbp+48h] BYREF

  v35 = a2;
  v32[1] = -2LL;
  v8 = (_DWORD *)(a1 + 1000);
  v9 = 0;
  v10 = (_QWORD *)(a1 + 1016);
  if ( !*(_QWORD *)(a1 + 1016) )
  {
    v27 = *(unsigned int *)(a1 + 1004);
    *v10 = 0LL;
    v29 = v27;
    v28 = v27 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v29, 0x18uLL) )
      v9 = CTLocalAllocPolicy::Alloc((void *)a1, DWORD2(v28), v28, (void **)(a1 + 1016));
    else
      v9 = -2147024362;
  }
  if ( v9 < 0 )
    goto LABEL_44;
  if ( *v8 > v8[1] >> 1 || v8[2] > v8[1] >> 2 )
    v9 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(v8);
  if ( v9 < 0 )
    goto LABEL_44;
  v11 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *v10,
          (unsigned int)v8[1],
          a3);
  v12 = (_DWORD *)v11;
  if ( *(_DWORD *)v11 == 1 )
  {
    v9 = -2147024809;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214A,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v9,
      v32[0]);
    return (unsigned int)v9;
  }
  if ( *(_DWORD *)v11 == 2 )
    --v8[2];
  *(_QWORD *)(v11 + 8) = *a3;
  v13 = *a4;
  *(_QWORD *)(v11 + 16) = *a4;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  *v12 = 1;
  ++*v8;
  v32[0] = 0LL;
  v14 = *(_QWORD *)(a1 + 1040);
  if ( !v14
    || (v15 = (_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                          v14,
                          *(unsigned int *)(a1 + 1028),
                          &v35),
        *v15 != 1) )
  {
    v16 = (_QWORD *)CreateRefCountedObj<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>,>(&ppwsz);
    v17 = 0LL;
    if ( v32 != v16 )
    {
      v17 = (_QWORD *)*v16;
      *v16 = 0LL;
    }
    v32[0] = v17;
    v18 = ppwsz;
    if ( ppwsz )
    {
      ppwsz = 0LL;
      (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = a1 + 1024;
    ppwsz = 0LL;
    v9 = SHStrDupW(a2, &ppwsz);
    if ( v9 < 0 )
      goto LABEL_52;
    v9 = 0;
    v20 = (_QWORD *)(a1 + 1040);
    if ( !*(_QWORD *)(v19 + 16) )
    {
      v30 = *(unsigned int *)(v19 + 4);
      *v20 = 0LL;
      if ( is_mul_ok(v30, 0x18uLL) )
        v9 = CTLocalAllocPolicy::Alloc(
               (void *)v30,
               (v30 * (unsigned __int128)0x18uLL) >> 64,
               24 * v30,
               (void **)(v19 + 16));
      else
        v9 = -2147024362;
    }
    if ( v9 < 0 )
    {
LABEL_51:
      CoTaskMemFree(ppwsz);
LABEL_52:
      v31 = 8528LL;
      goto LABEL_53;
    }
    v21 = *(unsigned int *)(v19 + 4);
    if ( *(_DWORD *)v19 > *(_DWORD *)(v19 + 4) >> 1 )
    {
      v21 = (unsigned int)(2 * v21 - 1);
    }
    else if ( *(_DWORD *)(v19 + 8) <= (unsigned int)v21 >> 2 )
    {
      goto LABEL_22;
    }
    v9 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           v19,
           v21);
LABEL_22:
    if ( v9 >= 0 )
    {
      v22 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              *v20,
              *(unsigned int *)(v19 + 4),
              &ppwsz);
      v23 = (_DWORD *)v22;
      if ( *(_DWORD *)v22 != 1 )
      {
        if ( *(_DWORD *)v22 == 2 )
          --*(_DWORD *)(v19 + 8);
        *(_QWORD *)(v22 + 8) = ppwsz;
        *(_QWORD *)(v22 + 16) = v17;
        if ( v17 )
          (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
        *v23 = 1;
        ++*(_DWORD *)v19;
        goto LABEL_29;
      }
      v9 = -2147024809;
    }
    goto LABEL_51;
  }
  Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>::operator=(
    v32,
    v15 + 4);
  v17 = (_QWORD *)v32[0];
LABEL_29:
  v24 = v17[2];
  if ( v24 != v17[4]
    || (v9 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
               v17 + 1,
               v24 + 1),
        v9 >= 0) )
  {
    v25 = (_QWORD *)(v17[1] + 8 * v17[2]++);
    if ( v25 )
      *v25 = *a3;
    v9 = 0;
    goto LABEL_34;
  }
  v31 = 8531LL;
LABEL_53:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v9,
    v32[0]);
LABEL_34:
  if ( v17 )
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  return (unsigned int)v9;
}
