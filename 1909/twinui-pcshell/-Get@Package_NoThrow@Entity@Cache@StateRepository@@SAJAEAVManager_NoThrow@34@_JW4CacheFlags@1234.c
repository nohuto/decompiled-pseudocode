/*
 * XREFs of ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18042A3CC
 * Callers:
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18042A80C (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager__ea_18042A80C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z @ 0x18042ACE4 (-GetField@Context_NoThrow@Cache@StateRepository@@QEAAJPEBGAEAI@Z.c)
 *     ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z @ 0x18042C8E8 (-Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoTh.c)
 */

__int64 __fastcall StateRepository::Cache::Entity::Package_NoThrow::Get(
        struct StateRepository::Cache::Manager_NoThrow *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v7; // ebx
  bool *v8; // rbp
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int Field; // eax
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = a3;
  if ( !a2 )
  {
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22D,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
      (const char *)0x80070057LL);
    return v7;
  }
  v8 = a5;
  v16 = 0LL;
  v9 = StateRepository::Cache::Entity::Package_NoThrow::Open(
         a1,
         a2,
         (struct StateRepository::Cache::Context_NoThrow *)&v16,
         a5);
  v7 = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 560LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
      (const char *)v10);
    goto LABEL_13;
  }
  if ( *v8 )
  {
    Field = StateRepository::Cache::Context_NoThrow::GetField(
              (StateRepository::Cache::Context_NoThrow *)&v16,
              L"Flags",
              (unsigned int *)(a4 + 28));
    v7 = Field;
    if ( Field >= 0 )
    {
      *(_QWORD *)a4 = a2;
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x500,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
        (const char *)(unsigned int)Field);
    }
    if ( (v7 & 0x80000000) != 0 )
    {
      v10 = v7;
      v11 = 565LL;
      goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_13:
  v13 = v16;
  v16 = 0LL;
  if ( v13 )
    SRCacheContext_Close();
  return v7;
}
