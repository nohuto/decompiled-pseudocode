/*
 * XREFs of ?OpenIndex@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@PEBGAEAVContext_NoThrow@34@AEA_N@Z @ 0x18040D5B4
 * Callers:
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18040AF10 (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall StateRepository::Cache::Entity::Package_NoThrow::OpenIndex(
        struct StateRepository::Cache::Manager_NoThrow *a1,
        const unsigned __int16 *a2,
        struct StateRepository::Cache::Context_NoThrow *a3,
        bool *a4)
{
  __int64 v4; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)a1;
  v11 = 0LL;
  v12 = 1;
  v7 = SRCacheContext_Open(v4, a2, 0LL, &v11);
  if ( v12 )
  {
    v8 = *(_QWORD *)a3;
    *(_QWORD *)a3 = v11;
    if ( v8 )
      SRCacheContext_Close();
  }
  if ( v7 >= 0 )
  {
    v7 = 0;
    *a4 = *(_QWORD *)a3 != 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-context.hpp",
      (const char *)(unsigned int)v7);
  }
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x287,
    (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
    (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
