/*
 * XREFs of ?NewNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x180034D30
 * Callers:
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180034B80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800D6208 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 * Callees:
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C15D8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?PickSize@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@V?$ComPtr@VCEndpointCharacteristics@@@WRL@Microsoft@@@2@@ATL@@AEBAI_K@Z @ 0x1800D73C8 (-PickSize@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$ComPtr@VCE.c)
 *     ?Rehash@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXI@Z @ 0x1800D769C (-Rehash@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // r8d
  _QWORD *v9; // rax
  int i; // r8d
  __int64 v11; // rdi
  const void *v12; // r14
  volatile signed __int32 *v13; // rsi
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, __int64); // rax
  char *v15; // r13
  char *v16; // rsi
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, __int64); // rax
  char *v18; // r13
  char *v19; // rsi
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, __int64); // rax
  char *v21; // r13
  char *v22; // rsi
  __int64 (__fastcall ***v23)(_QWORD, _QWORD, __int64); // rax
  _QWORD *v24; // r14
  char *v25; // r15
  char *v26; // rsi
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, __int64); // rax
  __int64 v28; // rdx
  _DWORD *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  _DWORD *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // r12
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  _DWORD *v44; // [rsp+20h] [rbp-68h]
  _DWORD *v45; // [rsp+20h] [rbp-68h]
  __int64 v46; // [rsp+28h] [rbp-60h]

  if ( *(_QWORD *)(a1 + 64) )
    goto LABEL_9;
  v6 = *(unsigned int *)(a1 + 52);
  if ( v6 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x68 )
      goto LABEL_28;
    v6 *= 104LL;
  }
  if ( ~v6 < 8 || (v7 = malloc(v6 + 8)) == 0LL )
LABEL_28:
    ATL::AtlThrowImpl(-2147024882);
  *v7 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v7;
  v8 = *(_DWORD *)(a1 + 52);
  v9 = &v7[13 * (unsigned int)(v8 - 1) + 1];
  for ( i = v8 - 1; i >= 0; --i )
  {
    v9[11] = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v9;
    v9 -= 13;
  }
LABEL_9:
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  try
  {
    v46 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 88);
    v12 = *(const void **)a2;
    v13 = (volatile signed __int32 *)(*(_QWORD *)a2 - 24LL);
    v14 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 32LL))(*(_QWORD *)v13);
    if ( *((int *)v13 + 4) >= 0 && v14 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v13 )
    {
      _InterlockedIncrement(v13 + 4);
    }
    else
    {
      v30 = v13 + 2;
      v31 = (**v14)(v14, *((unsigned int *)v13 + 2), 2LL);
      v13 = (volatile signed __int32 *)v31;
      if ( !v31 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v32);
      *(_DWORD *)(v31 + 8) = *v30;
      memcpy_s((void *const)(v31 + 24), 2LL * (*v30 + 1), v12, 2LL * (*v30 + 1));
    }
    *(_QWORD *)v11 = v13 + 6;
    v15 = *(char **)(a2 + 8);
    v16 = v15 - 24;
    v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v15 - 3)
                                                                                               + 32LL))(*((_QWORD *)v15 - 3));
    if ( *((int *)v15 - 2) >= 0 && v17 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 4);
    }
    else
    {
      v33 = v16 + 8;
      v34 = (**v17)(v17, *((unsigned int *)v16 + 2), 2LL);
      v16 = (char *)v34;
      if ( !v34 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v35);
      *(_DWORD *)(v34 + 8) = *v33;
      memcpy_s((void *const)(v34 + 24), 2LL * (*v33 + 1), v15, 2LL * (*v33 + 1));
    }
    *(_QWORD *)(v11 + 8) = v16 + 24;
    v18 = *(char **)(a2 + 16);
    v19 = v18 - 24;
    v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v18 - 3)
                                                                                               + 32LL))(*((_QWORD *)v18 - 3));
    if ( *((int *)v18 - 2) >= 0 && v20 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v19 + 4);
    }
    else
    {
      v44 = v19 + 8;
      v36 = (**v20)(v20, *((unsigned int *)v19 + 2), 2LL);
      v19 = (char *)v36;
      if ( !v36 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v37);
      *(_DWORD *)(v36 + 8) = *v44;
      memcpy_s((void *const)(v36 + 24), 2LL * (*v44 + 1), v18, 2LL * (*v44 + 1));
    }
    *(_QWORD *)(v11 + 16) = v19 + 24;
    *(_OWORD *)(v11 + 24) = *(_OWORD *)(a2 + 24);
    v21 = *(char **)(a2 + 40);
    v22 = v21 - 24;
    v23 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v21 - 3)
                                                                                               + 32LL))(*((_QWORD *)v21 - 3));
    if ( *((int *)v21 - 2) >= 0 && v23 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v22 + 4);
    }
    else
    {
      v45 = v22 + 8;
      v38 = (**v23)(v23, *((unsigned int *)v22 + 2), 2LL);
      v22 = (char *)v38;
      if ( !v38 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v39);
      *(_DWORD *)(v38 + 8) = *v45;
      memcpy_s((void *const)(v38 + 24), 2LL * (*v45 + 1), v21, 2LL * (*v45 + 1));
    }
    *(_QWORD *)(v11 + 40) = v22 + 24;
    *(_DWORD *)(v11 + 48) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(v11 + 56) = *(_QWORD *)(a2 + 56);
    *(_DWORD *)(v11 + 64) = *(_DWORD *)(a2 + 64);
    v24 = (_QWORD *)(v11 + 72);
    v25 = *(char **)(a2 + 72);
    v26 = v25 - 24;
    v27 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v25 - 3)
                                                                                               + 32LL))(*((_QWORD *)v25 - 3));
    if ( *((int *)v25 - 2) >= 0 && v27 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v26 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v26 + 4);
    }
    else
    {
      v40 = v26 + 8;
      v41 = (**v27)(v27, *((unsigned int *)v26 + 2), 2LL);
      v26 = (char *)v41;
      if ( !v41 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v42);
      *(_DWORD *)(v41 + 8) = *v40;
      memcpy_s((void *const)(v41 + 24), 2LL * (*v40 + 1), v25, 2LL * (*v40 + 1));
    }
  }
  catch ( ... )
  {
    *(_QWORD *)(v46 + 88) = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v46;
    throw;
  }
  *v24 = v26 + 24;
  *(_DWORD *)(v11 + 96) = a4;
  ++*(_QWORD *)(a1 + 8);
  v28 = 8LL * a3;
  *(_QWORD *)(v11 + 88) = *(_QWORD *)(v28 + *(_QWORD *)a1);
  *(_QWORD *)(v28 + *(_QWORD *)a1) = v11;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v43 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,Microsoft::WRL::ComPtr<CEndpointCharacteristics>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<Microsoft::WRL::ComPtr<CEndpointCharacteristics>>>::PickSize(a1);
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::Rehash(
      a1,
      v43);
  }
  return v11;
}
