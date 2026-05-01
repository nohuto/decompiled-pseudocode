/*
 * XREFs of ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBG@Z @ 0x1800F6840
 * Callers:
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x1800EDCE0 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1800EDE80 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180057940 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180075D48 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1800F6938 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 */

__int64 __fastcall CApplicationManager::_DeleteApplicationData(CApplicationManager *this, const unsigned __int16 *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rcx
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  LPCWCH v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = 0LL;
  v4 = *((_QWORD *)this + 129);
  v11 = 0LL;
  v6 = v4 == 0 ? 0x8002802B : 0;
  if ( v4 )
  {
    v7 = CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
           v4,
           *((_DWORD *)this + 255),
           &v12);
    v6 = *(_DWORD *)v7 != 1 ? 0x8002802B : 0;
    if ( *(_DWORD *)v7 == 1 )
    {
      Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=((__int64 *)&v11, (__int64 *)(v7 + 16));
      v2 = v11;
    }
  }
  if ( (v6 & 0x80000000) == 0 )
  {
    if ( *(_QWORD *)(v2 + 16) != 1LL )
    {
      v6 = -2147024809;
      goto LABEL_12;
    }
    if ( *(_QWORD *)(v2 + 16) )
    {
      v11 = **(_QWORD **)(v2 + 8);
      v6 = CApplicationManager::_DeleteApplicationData(this, a2, &v11);
      goto LABEL_12;
    }
    v6 = -2147316575;
    v8 = 8346LL;
  }
  else
  {
    v8 = 8338LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v6);
LABEL_12:
  if ( v2 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v6;
}
