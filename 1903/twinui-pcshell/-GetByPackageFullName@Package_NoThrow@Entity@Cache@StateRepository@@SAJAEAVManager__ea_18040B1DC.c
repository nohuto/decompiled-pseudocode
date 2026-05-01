/*
 * XREFs of ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18040B1DC
 * Callers:
 *     _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180409B60 (_lambda_0c37c1600930a15155a5eb9c2ae4abb7_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18040AD9C (-Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234.c)
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18040AF10 (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PE.c)
 */

__int64 __fastcall StateRepository::Cache::Entity::Package_NoThrow::GetByPackageFullName(
        struct StateRepository::Cache::Manager_NoThrow *a1,
        size_t *a2,
        __int64 a3,
        __int64 a4,
        bool *a5)
{
  bool *v5; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v5 = a5;
  v13 = 0LL;
  *a5 = 0;
  v8 = StateRepository::Cache::Entity::Package_NoThrow::GetByPackageFullName(a1, a2, &v13);
  if ( v8 < 0 )
  {
    v10 = 609LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( v13 )
  {
    v8 = StateRepository::Cache::Entity::Package_NoThrow::Get(a1, v13, v9, a4, v5);
    if ( v8 < 0 )
    {
      v10 = 612LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
