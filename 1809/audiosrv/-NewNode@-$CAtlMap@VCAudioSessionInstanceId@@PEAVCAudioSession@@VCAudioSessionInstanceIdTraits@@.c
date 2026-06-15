/*
 * XREFs of ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x18001EA90
 * Callers:
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001E8E0 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800C7D00 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 * Callees:
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800C8D58 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800C9044 (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rax
  int v9; // r8d
  _QWORD *v10; // rax
  int i; // r8d
  __int64 v12; // rdi
  const void *v13; // r14
  volatile signed __int32 *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rax
  char *v16; // r13
  char *v17; // rsi
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rax
  char *v19; // r13
  char *v20; // rsi
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  char *v22; // r13
  char *v23; // rsi
  __int64 (__fastcall ***v24)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v25; // r14
  char *v26; // r15
  char *v27; // rsi
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, __int64); // rax
  __int64 v29; // rdx
  _DWORD *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rcx
  _DWORD *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  _DWORD *v45; // [rsp+20h] [rbp-68h]
  _DWORD *v46; // [rsp+20h] [rbp-68h]
  __int64 v47; // [rsp+28h] [rbp-60h]

  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_11;
  v6 = *(unsigned int *)(a1 + 52);
  if ( v6 )
  {
    if ( v6 == 10 )
      v7 = 0x1999999999999999LL;
    else
      v7 = 0xFFFFFFFFFFFFFFFFuLL / v6;
    if ( v7 < 0x68 )
LABEL_31:
      ATL::AtlThrowImpl(-2147024882);
    v6 *= 104LL;
  }
  if ( ~v6 < 8 )
    goto LABEL_31;
  v8 = malloc(v6 + 8);
  if ( !v8 )
    goto LABEL_31;
  *v8 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v8;
  v9 = *(_DWORD *)(a1 + 52);
  v10 = &v8[13 * (unsigned int)(v9 - 1) + 1];
  for ( i = v9 - 1; i >= 0; --i )
  {
    v10[11] = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v10;
    v10 -= 13;
  }
LABEL_11:
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 )
    ATL::AtlThrowImpl(-2147467259);
  try
  {
    v47 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v12 + 88);
    v13 = *(const void **)a2;
    v14 = (volatile signed __int32 *)(*(_QWORD *)a2 - 24LL);
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v14 + 32LL))(*(_QWORD *)v14);
    if ( *((int *)v14 + 4) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v14 )
    {
      _InterlockedIncrement(v14 + 4);
    }
    else
    {
      v31 = v14 + 2;
      v32 = (**v15)(v15, *((unsigned int *)v14 + 2), 2LL);
      v14 = (volatile signed __int32 *)v32;
      if ( !v32 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v33);
      *(_DWORD *)(v32 + 8) = *v31;
      memcpy_s((void *const)(v32 + 24), 2LL * (*v31 + 1), v13, 2LL * (*v31 + 1));
    }
    *(_QWORD *)v12 = v14 + 6;
    v16 = *(char **)(a2 + 8);
    v17 = v16 - 24;
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 - 3)
                                                                                               + 32LL))(*((_QWORD *)v16 - 3));
    if ( *((int *)v16 - 2) >= 0 && v18 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
    }
    else
    {
      v34 = v17 + 8;
      v35 = (**v18)(v18, *((unsigned int *)v17 + 2), 2LL);
      v17 = (char *)v35;
      if ( !v35 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v36);
      *(_DWORD *)(v35 + 8) = *v34;
      memcpy_s((void *const)(v35 + 24), 2LL * (*v34 + 1), v16, 2LL * (*v34 + 1));
    }
    *(_QWORD *)(v12 + 8) = v17 + 24;
    v19 = *(char **)(a2 + 16);
    v20 = v19 - 24;
    v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 - 3)
                                                                                               + 32LL))(*((_QWORD *)v19 - 3));
    if ( *((int *)v19 - 2) >= 0 && v21 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
    }
    else
    {
      v45 = v20 + 8;
      v37 = (**v21)(v21, *((unsigned int *)v20 + 2), 2LL);
      v20 = (char *)v37;
      if ( !v37 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v38);
      *(_DWORD *)(v37 + 8) = *v45;
      memcpy_s((void *const)(v37 + 24), 2LL * (*v45 + 1), v19, 2LL * (*v45 + 1));
    }
    *(_QWORD *)(v12 + 16) = v20 + 24;
    *(_OWORD *)(v12 + 24) = *(_OWORD *)(a2 + 24);
    v22 = *(char **)(a2 + 40);
    v23 = v22 - 24;
    v24 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v22 - 3)
                                                                                               + 32LL))(*((_QWORD *)v22 - 3));
    if ( *((int *)v22 - 2) >= 0 && v24 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v23 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v23 + 4);
    }
    else
    {
      v46 = v23 + 8;
      v39 = (**v24)(v24, *((unsigned int *)v23 + 2), 2LL);
      v23 = (char *)v39;
      if ( !v39 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v40);
      *(_DWORD *)(v39 + 8) = *v46;
      memcpy_s((void *const)(v39 + 24), 2LL * (*v46 + 1), v22, 2LL * (*v46 + 1));
    }
    *(_QWORD *)(v12 + 40) = v23 + 24;
    *(_DWORD *)(v12 + 48) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v12 + 56) = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a2 + 64);
    v25 = (_QWORD *)(v12 + 72);
    v26 = *(char **)(a2 + 72);
    v27 = v26 - 24;
    v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v26 - 3)
                                                                                               + 32LL))(*((_QWORD *)v26 - 3));
    if ( *((int *)v26 - 2) >= 0 && v28 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v27 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v27 + 4);
    }
    else
    {
      v41 = v27 + 8;
      v42 = (**v28)(v28, *((unsigned int *)v27 + 2), 2LL);
      v27 = (char *)v42;
      if ( !v42 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v43);
      *(_DWORD *)(v42 + 8) = *v41;
      memcpy_s((void *const)(v42 + 24), 2LL * (*v41 + 1), v26, 2LL * (*v41 + 1));
    }
  }
  catch ( ... )
  {
    *(_QWORD *)(v47 + 88) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v47;
    throw;
  }
  *v25 = v27 + 24;
  *(_DWORD *)(v12 + 96) = a4;
  ++*(_QWORD *)(a1 + 8);
  v29 = 8LL * a3;
  *(_QWORD *)(v12 + 88) = *(_QWORD *)(v29 + *(_QWORD *)a1);
  *(_QWORD *)(v29 + *(_QWORD *)a1) = v12;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v44 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
      a1,
      v44);
  }
  return v12;
}
