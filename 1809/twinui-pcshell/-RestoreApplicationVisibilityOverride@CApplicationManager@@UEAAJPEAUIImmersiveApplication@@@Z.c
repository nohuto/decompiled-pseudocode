/*
 * XREFs of ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1800F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1800514EC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180078A9C (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x1800EC9C0 (-ClearOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAXPEAUIImmersiveApplicationInt.c)
 *     WPP_SF_d @ 0x1800FAE0C (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::RestoreApplicationVisibilityOverride(
        CApplicationManager *this,
        struct IImmersiveApplication *a2)
{
  int v4; // ebx
  struct IImmersiveApplicationInternal *v6; // [rsp+68h] [rbp+28h] BYREF
  __int64 v7; // [rsp+70h] [rbp+30h] BYREF
  struct IImmersiveApplication *v8; // [rsp+78h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v6 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v8, (__int64 *)&v6);
  if ( v4 >= 0 )
  {
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(
           (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
           (struct IUnknown *)v6) )
    {
      v4 = 0;
      v7 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
        *((_QWORD *)this + 49),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v7);
      (*(void (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, __int64))(*(_QWORD *)v7 + 32LL))(
        v7,
        v6,
        *((unsigned int *)this + 192),
        2LL);
      CReportWindowVisibilityChange::ClearOverrideImmuneApplication(
        (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
        (struct IUnknown *)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    }
    else
    {
      v4 = -2147418113;
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_23f5d37a7ff23463a4a534286beb523d_Traceguids,
      (unsigned int)v4);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v4;
}
