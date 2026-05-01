/*
 * XREFs of ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x18027367C
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180273304 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18011BE3C (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_CreatePerApplicationData(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  void *v11; // r8
  unsigned __int64 v12; // r9
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v6[2] = 0LL;
    v6[1] = 0LL;
    *v6 = &CRefCountedObject<ViewEventDispatcher::PerApplicationData>::`vftable';
    *((_DWORD *)v6 + 6) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v18 = v7;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 2893LL;
LABEL_14:
    v12 = (unsigned int)v8;
    goto LABEL_15;
  }
  *(_QWORD *)(v7 + 16) = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, v7 + 8);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v9 = 2895LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v12);
    goto LABEL_17;
  }
  v13 = (_QWORD *)(a1 + 552);
  v14 = v13[1];
  if ( v14 == v13[3] )
  {
    v8 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
           (__int64)v13,
           v14 + 1,
           v11);
    if ( v8 < 0 )
    {
      v9 = 2896LL;
      goto LABEL_14;
    }
  }
  v15 = (__int64 *)(*v13 + 8 * v13[1]++);
  if ( v15 )
  {
    *v15 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v15);
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  *a3 = v7;
  v8 = 0;
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return (unsigned int)v8;
}
