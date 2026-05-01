/*
 * XREFs of ?_AddAnimationOnlyOperationItem@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B7FCC
 * Callers:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x1803B92BC (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1PEBUtagRECT@@222HHW4APP_LAYOUT_ANIMATION_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BE60C (-s_CreateInstance@CAppLayoutOperationItem@@SAJPEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@1.c)
 */

__int64 __fastcall CAppLayoutOperation::_AddAnimationOnlyOperationItem(_QWORD *a1, __int64 a2, int a3)
{
  int Instance; // esi
  __int64 v7; // rbx
  void *v8; // r8
  __int64 v9; // rdx
  __int64 *v10; // rdx
  __int64 v12; // [rsp+68h] [rbp-59h] BYREF
  __int64 v13; // [rsp+70h] [rbp-51h] BYREF
  _QWORD v14[2]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD v16[3]; // [rsp+98h] [rbp-29h] BYREF
  __m128i v17; // [rsp+B0h] [rbp-11h]
  int v18; // [rsp+C0h] [rbp-1h]
  _QWORD v19[3]; // [rsp+C8h] [rbp+7h] BYREF
  __m128i si128; // [rsp+E0h] [rbp+1Fh]
  int v21; // [rsp+F0h] [rbp+2Fh]

  memset(v19, 0, sizeof(v19));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = 0;
  memset(v16, 0, sizeof(v16));
  v17 = si128;
  v18 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v14[0] = 0LL;
  v14[1] = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  Instance = CAppLayoutOperationItem::s_CreateInstance(a2, v19, v16, v15, v15, v14, v14, 0, 0, a3);
  if ( Instance >= 0 )
  {
    v7 = v13;
    v12 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v9 = a1[16];
    Instance = 0;
    if ( v9 != a1[18]
      || (Instance = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                       (__int64)(a1 + 15),
                       v9 + 1,
                       v8),
          Instance >= 0) )
    {
      v10 = (__int64 *)(a1[15] + 8 * a1[16]++);
      if ( v10 )
      {
        *v10 = 0LL;
        if ( v10 != &v12 )
        {
          *v10 = v7;
          v12 = 0LL;
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)Instance;
}
