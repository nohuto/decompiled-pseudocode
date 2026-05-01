/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1800F6938
 * Callers:
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1800EDDB0 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1800F6840 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1800F6E9C (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x18004C950 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180057940 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180075D48 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?DeleteItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBG@Z @ 0x1800ED608 (-DeleteItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$.c)
 *     ?_EnsureSet@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJXZ @ 0x1800F6DE8 (-_EnsureSet@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Mi.c)
 *     ?_FreeBucket@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAHPEAVHashBucket@1@@Z @ 0x1800F7194 (-_FreeBucket@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@M.c)
 */

__int64 __fastcall CApplicationManager::_DeleteApplicationData(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  char *v3; // rbx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // r9
  unsigned __int64 v16; // r9
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v20; // [rsp+50h] [rbp+8h] BYREF
  const WCHAR *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v3 = (char *)this + 992;
  v6 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_EnsureSet((char *)this + 992);
  if ( v6 < 0
    || (v7 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               *((_QWORD *)v3 + 2),
               *((_DWORD *)v3 + 1),
               a3),
        v6 = -2147319765,
        !(unsigned int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_FreeBucket(
                         v3,
                         v7)) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2083,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v8 = *((_QWORD *)this + 129);
  v9 = 0LL;
  v20 = 0LL;
  v10 = v8 == 0 ? 0x8002802B : 0;
  if ( v8 )
  {
    v11 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
            v8,
            *((_DWORD *)this + 255),
            &v21);
    v10 = *(_DWORD *)v11 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v11 == 1 )
    {
      Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=((__int64 *)&v20, (__int64 *)(v11 + 16));
      v9 = v20;
    }
  }
  if ( (v10 & 0x80000000) != 0 )
  {
    v12 = 8325LL;
LABEL_13:
    v16 = v10;
    goto LABEL_14;
  }
  v13 = v9[2];
  v14 = 0LL;
  if ( !v13 )
  {
LABEL_11:
    v10 = -2147319765;
LABEL_12:
    v12 = 8326LL;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v15 = (_QWORD *)(v9[1] + 8 * v14);
    if ( *v15 == *a3 )
      break;
    if ( ++v14 >= v13 )
      goto LABEL_11;
  }
  if ( v14 >= v13 )
  {
    v10 = -2147316575;
    goto LABEL_12;
  }
  if ( v14 != v13 - 1 )
  {
    memmove_0(v15, v15 + 1, 8 * (v13 - v14) - 8);
    v13 = v9[2];
  }
  v9[2] = v13 - 1;
  if ( v13 != 1
    || (v18 = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::DeleteItem(
                (__int64)this + 1016,
                &v21),
        v10 = v18,
        v18 >= 0) )
  {
    v10 = 0;
    goto LABEL_15;
  }
  v16 = (unsigned int)v18;
  v12 = 8329LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v16);
LABEL_15:
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  return v10;
}
