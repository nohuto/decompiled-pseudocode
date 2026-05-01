/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x180352918
 * Callers:
 *     ?SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1803539FC (-SwitchItemCollection_CreateInstance@@YAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SwitchItemCollection@@QEAA@XZ @ 0x180352B80 (--0SwitchItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180353270 (-InternalRelease@-$ComPtr@VSwitchItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@@Z @ 0x180353734 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemCollection,SwitchItemCollection,ISwitchItemFactory * &,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,ITabViewManager * &,enum SwitchItemFilterBehavior &>(
        SwitchItemCollection **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  SwitchItemCollection *v11; // rax
  int v12; // edi
  SwitchItemCollection *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  SwitchItemCollection *v19; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (SwitchItemCollection *)operator new(0x100uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = SwitchItemCollection::SwitchItemCollection(v11);
    v14 = *a4;
    v15 = *a3;
    v19 = v13;
    v12 = SwitchItemCollection::RuntimeClassInitialize(v13, *a2, v15, v14, *a5, *a6, *a7);
    if ( v12 >= 0 )
    {
      if ( v13 )
      {
        v16 = *((_QWORD *)v13 + 23);
        while ( v16 >= 0 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v13 + 23, v16 + 1, v16);
          if ( v17 == v16 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
      }
LABEL_10:
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemCollection>::InternalRelease(&v19);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
