/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180047FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180032DF0 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800483CC (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x18015A1F8 (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18015E980 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::GetFrame(
        CApplicationFrameService *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct IApplicationFrameProxy **a4)
{
  unsigned __int64 v5; // r12
  int v8; // edi
  unsigned __int64 v9; // rsi
  struct IApplicationFrameProxy *v10; // rcx
  struct IApplicationFrameProxy **v11; // rcx
  __int64 **v12; // r15
  __int64 *v13; // rax
  __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  char *v18; // rcx
  signed __int64 v19; // r14
  __int16 v20; // ax
  char *v21; // rax
  __int64 v22; // rbx
  struct IApplicationFrameProxy *v23; // rbx
  struct IApplicationFrameProxy *v24; // rax
  __int64 *v25; // r14
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 v28; // rdx
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  __int64 v31; // rbx
  struct IApplicationFrameProxy *v33; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v34[3]; // [rsp+38h] [rbp-40h] BYREF

  v34[1] = -2LL;
  v5 = a3;
  *a4 = 0LL;
  v8 = -2147023728;
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v9 = 0LL;
    if ( *((_QWORD *)this + 9) )
    {
      while ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) + 152LL), -1, a2, -1, 1) != 2
           || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) + 176LL) != (_DWORD)v5 )
      {
        if ( ++v9 >= *((_QWORD *)this + 9) )
          return (unsigned int)v8;
      }
      Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(v34);
      v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), v9);
      if ( v8 >= 0 )
      {
        v10 = (struct IApplicationFrameProxy *)v34[0];
        v34[0] = 0LL;
        *a4 = v10;
      }
      v11 = (struct IApplicationFrameProxy **)v34;
LABEL_50:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  if ( !*((_QWORD *)this + 9) )
    return (unsigned int)v8;
  v12 = (__int64 **)((char *)this + 64);
  v13 = (__int64 *)*((_QWORD *)this + 8);
  v14 = *v13;
  v15 = *v13 + 152;
  v8 = 0;
  if ( !a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(*v13 + 152);
LABEL_27:
    *(_DWORD *)(v14 + 176) = v5;
    SetPropW(*(HWND *)(v14 + 88), L"LastSetGlomIdForReconstitution", (HANDLE)v5);
    goto LABEL_28;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( a2[v16] );
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
         *v13 + 152,
         v16);
  if ( v8 >= 0 )
  {
    v17 = v16 + 1;
    v18 = *(char **)v15;
    if ( v16 > 0x7FFFFFFE )
    {
      if ( v16 != -1LL )
        *(_WORD *)v18 = 0;
    }
    else
    {
      v19 = (char *)a2 - v18;
      do
      {
        if ( v17 == 1 )
          break;
        v20 = *(_WORD *)&v18[v19];
        if ( !v20 )
          break;
        *(_WORD *)v18 = v20;
        v18 += 2;
        --v17;
      }
      while ( v17 );
      v21 = v18 - 2;
      if ( v17 )
        v21 = v18;
      *(_WORD *)v21 = 0;
    }
    *(_QWORD *)(v15 + 8) = v16;
    goto LABEL_27;
  }
LABEL_28:
  if ( v8 >= 0 )
  {
    v22 = **v12;
    if ( v22 )
    {
      v23 = (struct IApplicationFrameProxy *)(v22 + 8);
      v24 = v23;
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
    }
    v33 = v23;
    if ( v24 )
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v23 + 8LL))(v23);
    v25 = *v12;
    v8 = 0;
    v26 = *((_QWORD *)this + 13);
    if ( v26 != *((_QWORD *)this + 15)
      || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (char *)this + 96,
                 v26 + 1),
          v8 >= 0) )
    {
      v27 = (__int64 *)(*((_QWORD *)this + 12) + 8 * (*((_QWORD *)this + 13))++);
      if ( v27 )
      {
        v28 = *v25;
        *v27 = *v25;
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 72);
          while ( v29 >= 0 )
          {
            if ( (_DWORD)v29 != 0x7FFFFFFF )
            {
              v30 = v29;
              v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 72), v29 + 1, v29);
              if ( v30 != v29 )
                continue;
            }
            goto LABEL_44;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v29 + 16));
LABEL_44:
          v23 = v33;
        }
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
        (char *)this + 64,
        0LL);
    }
    if ( v8 < 0 )
    {
      v31 = **v12;
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v31 + 152);
      *(_DWORD *)(v31 + 176) = 0;
      RemovePropW(*(HWND *)(v31 + 88), L"LastSetGlomIdForReconstitution");
    }
    else
    {
      v33 = 0LL;
      *a4 = v23;
    }
    v11 = &v33;
    goto LABEL_50;
  }
  return (unsigned int)v8;
}
