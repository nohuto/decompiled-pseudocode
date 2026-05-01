/*
 * XREFs of ?RegisterForViewEventsWithOptions@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x180217410
 * Callers:
 *     ?RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1802173C0 (-RegisterForViewEvents@ViewEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@ViewM.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180062184 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 ViewEventDispatcher::RegisterForViewEventsWithOptions(RTL_SRWLOCK *a1, __int64 a2, ...)
{
  char *v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  int AgileReference; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // r9
  int v11; // eax
  __int64 *v12; // rdi
  __int64 v13; // rcx
  RTL_SRWLOCK *v14; // r13
  UINT32 StringLen; // esi
  const WCHAR *StringRawBuffer; // rdi
  UINT32 v17; // ebx
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  void *v20; // r8
  RTL_SRWLOCK *v21; // r15
  PVOID Ptr; // rdx
  INT32 *v23; // rdx
  __int64 v24; // rdx
  INT32 result[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v27[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  HSTRING v29; // [rsp+A0h] [rbp+50h] BYREF
  va_list va; // [rsp+A0h] [rbp+50h]
  HSTRING v31; // [rsp+A8h] [rbp+58h] BYREF
  va_list va1; // [rsp+A8h] [rbp+58h]
  __int64 v33; // [rsp+B0h] [rbp+60h]
  _QWORD *v34; // [rsp+B8h] [rbp+68h]
  va_list va2; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v29 = va_arg(va1, HSTRING);
  va_copy(va2, va1);
  v31 = va_arg(va2, HSTRING);
  v33 = va_arg(va2, _QWORD);
  v34 = va_arg(va2, _QWORD *);
  v27[1] = -2LL;
  v4 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  v6 = 0LL;
  if ( v4 )
  {
    memset_0(v4 + 8, 0, 0x28uLL);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)v5 = &CRefCountedObject<ViewEventRegistration>::`vftable';
    *(_DWORD *)(v5 + 48) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  v27[0] = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v27);
  if ( !v5 )
  {
    AgileReference = -2147024882;
    v8 = 1565LL;
LABEL_15:
    v10 = (unsigned int)AgileReference;
    goto LABEL_16;
  }
  v9 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 8), (HSTRING *)va);
  AgileReference = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v8 = 1566LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v10);
    goto LABEL_35;
  }
  v11 = Windows::Internal::String::Initialize((HSTRING *)(v5 + 16), (HSTRING *)va1);
  AgileReference = v11;
  if ( v11 < 0 )
  {
    v10 = (unsigned int)v11;
    v8 = 1567LL;
    goto LABEL_16;
  }
  *(_DWORD *)(v5 + 24) = v33;
  v12 = (__int64 *)(v5 + 32);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v5 + 32));
  if ( a2 )
  {
    *(_QWORD *)result = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
    AgileReference = RoGetAgileReference(0LL, &GUID_485d880d_3bd2_519f_b754_8b2e73798d3e, a2, result);
    if ( AgileReference >= 0 )
    {
      v13 = *v12;
      *v12 = *(_QWORD *)result;
      *(_QWORD *)result = v13;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
    if ( AgileReference < 0 )
    {
      v8 = 1569LL;
      goto LABEL_15;
    }
  }
  v14 = a1 + 35;
  AcquireSRWLockExclusive(a1 + 35);
  v27[2] = (__int64)&a1[35];
  if ( a1[41].Ptr )
  {
    while ( 1 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)(v5 + 8));
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
      v17 = WindowsGetStringLen(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v6) + 8LL));
      v18 = WindowsGetStringRawBuffer(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v6) + 8LL), 0LL);
      if ( CompareStringOrdinal(v18, v17, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty(*(HSTRING *)(*((_QWORD *)a1[40].Ptr + v6) + 16LL)) )
          break;
        if ( WindowsIsStringEmpty(*(HSTRING *)(v5 + 16)) )
          break;
        v19 = *((_QWORD *)a1[40].Ptr + v6);
        result[0] = 0;
        WindowsCompareStringOrdinal(*(HSTRING *)(v19 + 16), *(HSTRING *)(v5 + 16), result);
        if ( !result[0] )
          break;
      }
      if ( (PVOID)++v6 >= a1[41].Ptr )
        goto LABEL_23;
    }
    AgileReference = -2147024809;
    v24 = 1598LL;
    goto LABEL_30;
  }
LABEL_23:
  *(RTL_SRWLOCK *)(v5 + 40) = a1[39];
  ++a1[39].Ptr;
  *(_QWORD *)result = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)result);
  v21 = a1 + 40;
  AgileReference = 0;
  Ptr = v21[1].Ptr;
  if ( Ptr != v21[3].Ptr
    || (AgileReference = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                           (__int64)v21,
                           (unsigned __int64)Ptr + 1,
                           v20),
        AgileReference >= 0) )
  {
    v23 = (INT32 *)((char *)v21->Ptr + 8 * (__int64)v21[1].Ptr++);
    if ( v23 )
    {
      *(_QWORD *)v23 = 0LL;
      if ( v23 != result )
      {
        *(_QWORD *)v23 = v5;
        *(_QWORD *)result = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)result);
  if ( AgileReference < 0 )
  {
    v24 = 1604LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)AgileReference);
    goto LABEL_33;
  }
  *v34 = *(_QWORD *)(v5 + 40);
  AgileReference = 0;
LABEL_33:
  if ( v14 )
    ReleaseSRWLockExclusive(v14);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v27);
  return (unsigned int)AgileReference;
}
