/*
 * XREFs of ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x1801DBA4C
 * Callers:
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801DA5FC (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801DABC8 (--$_Emplace_reallocate@V-$ComPtr@UIUnknown@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIUnknown@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenWorkspace::Discover::ObjectArray::AddObject(
        PenWorkspace::Discover::ObjectArray *this,
        struct IUnknown *a2)
{
  char *v3; // rbx
  char *v4; // rdx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)this + 48;
  v7 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v4 = (char *)*((_QWORD *)v3 + 1);
  if ( *((char **)v3 + 2) == v4 )
  {
    try
    {
      std::vector<Microsoft::WRL::ComPtr<IUnknown>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IUnknown>>(
        (char **)v3,
        v4,
        (char *)&v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x21,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArray.h",
        v5);
      return;
    }
  }
  else
  {
    *(_QWORD *)v4 = 0LL;
    if ( v4 != (char *)&v7 )
    {
      *(_QWORD *)v4 = a2;
      v7 = 0LL;
    }
    *((_QWORD *)v3 + 1) += 8LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v7);
}
