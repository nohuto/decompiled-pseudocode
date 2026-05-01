/*
 * XREFs of ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18041F57C
 * Callers:
 *     ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18041E4F0 (-ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18026E010 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ??$_InsertAt@$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@_K@Z @ 0x180363DF0 (--$_InsertAt@$$QEAV-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@-$CTSimpleArray@V-$ComPtr@UIAppLay.c)
 *     ??$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByView@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18041C6C4 (--$FindEx@VCAppLayoutItemFinderByView@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@UIAppLay.c)
 *     ?_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z @ 0x18041F1D4 (-_FindBufferItem@CAppLayout@@AEAAJPEAPEAUIAppLayoutItem@@PEAI@Z.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x18041F508 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x180420558 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804207E0 (-s_CreateInstance_View@CAppLayoutItem@@SAJPEAUIApplicationView@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS.c)
 */

__int64 __fastcall CAppLayout::_ReplaceView(__int64 *a1, __int64 a2, struct IUnknown *a3, unsigned int a4)
{
  unsigned int v7; // ebx
  int BufferItem; // edi
  __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  struct IUnknown *v11; // r8
  _QWORD *v13; // r15
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21[2]; // [rsp+30h] [rbp-40h] BYREF
  void *v22; // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( a2 )
  {
    v23 = 0LL;
    *(_QWORD *)v21 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
    BufferItem = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByView>(
                   a1 + 13,
                   (struct IUnknown **)v21,
                   v11,
                   &v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    if ( BufferItem < 0 )
    {
      v9 = 1060LL;
      goto LABEL_9;
    }
    v10 = v24;
LABEL_11:
    v25[0] = 0LL;
    v13 = a1 + 13;
    v14 = a1[13];
    v25[1] = 0LL;
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(v14 + 8 * v10) + 56LL))(
      *(_QWORD *)(v14 + 8 * v10),
      0LL,
      v25);
    v15 = CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
            a1 + 13,
            v10);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x438,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    if ( a3 )
    {
      v17 = CAppLayoutItem::s_CreateInstance_View(a3, a4, &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v22);
      v7 = v17;
      if ( v17 < 0 )
      {
        v18 = (unsigned int)v17;
        v19 = 1087LL;
        goto LABEL_20;
      }
    }
    else
    {
      v20 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v22);
      v7 = v20;
      if ( v20 < 0 )
      {
        v18 = (unsigned int)v20;
        v19 = 1092LL;
        goto LABEL_20;
      }
    }
    (*(void (__fastcall **)(void *, _QWORD, _QWORD *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, v25);
    *(_QWORD *)v21 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v21);
    v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::_InsertAt<Microsoft::WRL::ComPtr<IAppLayoutItem> &&>(
           v13,
           v21,
           v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v21);
    if ( (v7 & 0x80000000) == 0 )
    {
      v7 = 0;
      goto LABEL_22;
    }
    v18 = v7;
    v19 = 1100LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
      (const char *)v18);
LABEL_22:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    return v7;
  }
  if ( a3 )
  {
    CAppLayout::_RemoveView((CAppLayout *)a1, a3);
    BufferItem = CAppLayout::_FindBufferItem((CAppLayout *)a1, 0LL, v21);
    if ( BufferItem < 0 )
    {
      v9 = 1071LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
        (const char *)(unsigned int)BufferItem);
      return (unsigned int)BufferItem;
    }
    v10 = v21[0];
    goto LABEL_11;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41E,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)0x80070057LL);
  return v7;
}
