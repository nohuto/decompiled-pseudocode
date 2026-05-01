/*
 * XREFs of ?ReportActiveExperienceAboveLock@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801BEB98
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801BDCFC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801BE588 (-OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z @ 0x1801BCB8C (-GetLockAppHost@@YAJPEAPEAUILockAppHost@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaStoreAppExperienceManager::ReportActiveExperienceAboveLock(
        CortanaStoreAppExperienceManager *this,
        unsigned __int8 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int LockAppHost; // eax
  unsigned int v7; // ebx
  struct ILockAppHost *v8; // rbx
  __int64 (__fastcall *v9)(struct ILockAppHost *, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, GUID *, CortanaStoreAppExperienceManager **); // rdi
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CortanaStoreAppExperienceManager *v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+70h] [rbp+30h] BYREF
  struct ILockAppHost *v18; // [rsp+78h] [rbp+38h] BYREF

  v16 = this;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  LockAppHost = GetLockAppHost(&v18, v3, v4, v5);
  v7 = LockAppHost;
  if ( LockAppHost >= 0 )
  {
    v17 = 0LL;
    v8 = v18;
    v9 = **(__int64 (__fastcall ***)(struct ILockAppHost *, GUID *, __int64 *))v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v10 = v9(v8, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v17);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v16 = 0LL;
      v11 = v17;
      v12 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, CortanaStoreAppExperienceManager **))(*(_QWORD *)v17 + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v13 = v12(v11, &IID_IAboveLockActivationManager, &GUID_f50a27f7_82b6_4711_be12_9becff694462, &v16);
      v7 = v13;
      if ( v13 >= 0 )
      {
        (*(void (__fastcall **)(CortanaStoreAppExperienceManager *, __int64, _QWORD))(*(_QWORD *)v16 + 128LL))(
          v16,
          16LL,
          a2);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E1,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DE,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)LockAppHost);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v7;
}
