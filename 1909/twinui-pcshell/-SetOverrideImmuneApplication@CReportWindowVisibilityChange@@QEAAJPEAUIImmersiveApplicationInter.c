/*
 * XREFs of ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801373CC
 * Callers:
 *     ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18012FCD0 (-DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180057090 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18012B8F0 (--$_Emplace_reallocate@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CReportWindowVisibilityChange::SetOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  const char *v4; // r9
  unsigned int v5; // ebx
  char *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v9; // [rsp+50h] [rbp+18h] BYREF

  try
  {
    v5 = 0;
    if ( CReportWindowVisibilityChange::IsOverrideImmuneApplication(this, a2) )
    {
      v5 = -2147418113;
    }
    else
    {
      v9 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
      v6 = (char *)*((_QWORD *)this + 7);
      if ( *((char **)this + 8) == v6 )
      {
        std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>(
          (char **)this + 6,
          v6,
          (char *)&v9);
      }
      else
      {
        *(_QWORD *)v6 = 0LL;
        if ( v6 != (char *)&v9 )
        {
          *(_QWORD *)v6 = a2;
          v9 = 0LL;
        }
        *((_QWORD *)this + 7) += 8LL;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    }
    result = v5;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7B,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\amcommon.h",
                           v4);
  }
  return result;
}
