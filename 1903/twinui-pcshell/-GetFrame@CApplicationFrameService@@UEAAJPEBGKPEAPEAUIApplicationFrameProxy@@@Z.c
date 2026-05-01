/*
 * XREFs of ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013320
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18001360C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180029A60 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$?0VCApplicationFrameWrapper@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV?$ComPtr@VCApplicationFrameWrapper@@@12@PEAPEAX@Z @ 0x18013AC70 (--$-0VCApplicationFrameWrapper@@@-$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEAA@AEBV-$Co.c)
 *     ?_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z @ 0x18013F370 (-_TransferFromPoolToActive@CApplicationFrameService@@AEAAJ_K@Z.c)
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
  __int64 **v9; // r15
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  char *v17; // rcx
  signed __int64 v18; // r14
  __int16 v19; // ax
  char *v20; // rax
  __int64 v21; // rbx
  struct IApplicationFrameProxy *v22; // rbx
  struct IApplicationFrameProxy *v23; // rax
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  struct IApplicationFrameProxy **v30; // rcx
  unsigned __int64 v32; // rsi
  struct IApplicationFrameProxy *v33; // rcx
  __int64 v34; // rbx
  struct IApplicationFrameProxy *v35; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v36[3]; // [rsp+38h] [rbp-40h] BYREF

  v36[1] = -2LL;
  v5 = a3;
  *a4 = 0LL;
  v8 = -2147023728;
  if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
  {
    v32 = 0LL;
    if ( !*((_QWORD *)this + 9) )
      return (unsigned int)v8;
    while ( CompareStringOrdinal(*(LPCWCH *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v32) + 152LL), -1, a2, -1, 1) != 2
         || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 8 * v32) + 176LL) != (_DWORD)v5 )
    {
      if ( ++v32 >= *((_QWORD *)this + 9) )
        return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<IApplicationFrameProxy>::ComPtr<IApplicationFrameProxy>(v36);
    v8 = CApplicationFrameService::_TransferFromPoolToActive((CApplicationFrameService *)((char *)this - 40), v32);
    if ( v8 >= 0 )
    {
      v33 = (struct IApplicationFrameProxy *)v36[0];
      v36[0] = 0LL;
      *a4 = v33;
    }
    v30 = (struct IApplicationFrameProxy **)v36;
    goto LABEL_33;
  }
  if ( *((_QWORD *)this + 9) )
  {
    v9 = (__int64 **)((char *)this + 64);
    v10 = (__int64 *)*((_QWORD *)this + 8);
    v11 = *v10;
    v12 = *v10 + 152;
    v8 = 0;
    if ( a2 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a2[v13] );
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
             *v10 + 152,
             v13);
      if ( v8 < 0 )
      {
LABEL_17:
        if ( v8 >= 0 )
        {
          v21 = **v9;
          if ( v21 )
          {
            v22 = (struct IApplicationFrameProxy *)(v21 + 8);
            v23 = v22;
          }
          else
          {
            v22 = 0LL;
            v23 = 0LL;
          }
          v35 = v22;
          if ( v23 )
            (*(void (__fastcall **)(struct IApplicationFrameProxy *, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 8LL))(
              v22,
              v14,
              v15,
              0LL);
          v24 = *v9;
          v8 = 0;
          v25 = *((_QWORD *)this + 13);
          if ( v25 != *((_QWORD *)this + 15)
            || (v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (char *)this + 96,
                       v25 + 1,
                       v15,
                       0LL),
                v8 >= 0) )
          {
            v26 = (__int64 *)(*((_QWORD *)this + 12) + 8 * (*((_QWORD *)this + 13))++);
            if ( v26 )
            {
              v27 = *v24;
              *v26 = *v24;
              if ( v27 )
              {
                v28 = *(_QWORD *)(v27 + 72);
                while ( v28 >= 0 )
                {
                  v29 = v28;
                  v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v27 + 72), v28 + 1, v28);
                  if ( v29 == v28 )
                    goto LABEL_28;
                }
                _InterlockedIncrement((volatile signed __int32 *)(2 * v28 + 16));
LABEL_28:
                v22 = v35;
              }
            }
            CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
              (char *)this + 64,
              0LL,
              v26,
              0LL);
          }
          if ( v8 < 0 )
          {
            v34 = **v9;
            Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v34 + 152);
            *(_DWORD *)(v34 + 176) = 0;
            RemovePropW(*(HWND *)(v34 + 88), L"LastSetGlomIdForReconstitution");
          }
          else
          {
            v35 = 0LL;
            *a4 = v22;
          }
          v30 = &v35;
LABEL_33:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
          return (unsigned int)v8;
        }
        return (unsigned int)v8;
      }
      v16 = v13 + 1;
      v17 = *(char **)v12;
      if ( v13 > 0x7FFFFFFE )
      {
        if ( v13 != -1LL )
          *(_WORD *)v17 = 0;
      }
      else
      {
        v18 = (char *)a2 - v17;
        do
        {
          if ( v16 == 1 )
            break;
          v19 = *(_WORD *)&v17[v18];
          if ( !v19 )
            break;
          *(_WORD *)v17 = v19;
          v17 += 2;
          --v16;
        }
        while ( v16 );
        v20 = v17 - 2;
        if ( v16 )
          v20 = v17;
        *(_WORD *)v20 = 0;
      }
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(*v10 + 152);
    }
    *(_DWORD *)(v11 + 176) = v5;
    SetPropW(*(HWND *)(v11 + 88), L"LastSetGlomIdForReconstitution", (HANDLE)v5);
    goto LABEL_17;
  }
  return (unsigned int)v8;
}
