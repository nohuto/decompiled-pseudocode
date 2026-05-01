/*
 * XREFs of ?InitializeHighContrastListener@DefaultIconManager@@AEAAJXZ @ 0x1801FF910
 * Callers:
 *     ??0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@PEAUIImmersiveWindowMessageService@@@Z @ 0x1801FD2E8 (--0DefaultIconManager@@QEAA@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabVie.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801BBFE0 (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 *     ??$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVDefaultIconManager@@@SmartCookie@@QEAAJPEAUIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNotification@@PEAK@ZP81@EAAJK@ZHPEAVDefaultIconManager@@@Z @ 0x1801FBB74 (--$Register@UIImmersiveWindowMessageService@@P81@EAAJIPEAUIImmersiveWindowMessageNo_ea_1801FBB74.c)
 */

__int64 __fastcall DefaultIconManager::InitializeHighContrastListener(DefaultIconManager *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // r8
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rdx
  int pvParam; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+3Ch] [rbp-1Ch] BYREF
  int v10; // [rsp+44h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 480);
  AcquireSRWLockExclusive((PSRWLOCK)this + 60);
  v4 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,DefaultIconManager *>(
         (__int64)this + 216,
         *((_QWORD *)this + 26),
         v3);
  if ( v4 < 0 )
  {
    v6 = 406LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v4);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return (unsigned int)v4;
  }
  v4 = SmartCookie::Register<IImmersiveWindowMessageService,long (IImmersiveWindowMessageService::*)(unsigned int,IImmersiveWindowMessageNotification *,unsigned long *),long (IImmersiveWindowMessageService::*)(unsigned long),int,DefaultIconManager *>(
         (__int64)this + 336,
         *((_QWORD *)this + 26),
         v5);
  if ( v4 < 0 )
  {
    v6 = 408LL;
    goto LABEL_3;
  }
  pvParam = 16;
  v9 = 0LL;
  v10 = 0;
  if ( SystemParametersInfoW(0x42u, 0, &pvParam, 0) )
  {
    Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
      (HSTRING *)this + 20,
      (const wchar_t **)((char *)&v9 + 4));
    *((_BYTE *)this + 152) = v9 & 1;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
