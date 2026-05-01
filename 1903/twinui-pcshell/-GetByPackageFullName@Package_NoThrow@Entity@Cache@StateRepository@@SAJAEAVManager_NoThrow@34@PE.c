/*
 * XREFs of ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18040AF10
 * Callers:
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18040B1DC (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager__ea_18040B1DC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180103D78 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z @ 0x18040A1E8 (-Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z.c)
 *     ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z @ 0x18040ACF8 (-EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z.c)
 *     ?OpenIndex@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@PEBGAEAVContext_NoThrow@34@AEA_N@Z @ 0x18040D5B4 (-OpenIndex@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@PEBGAEAVConte.c)
 */

__int64 __fastcall StateRepository::Cache::Entity::Package_NoThrow::GetByPackageFullName(
        struct StateRepository::Cache::Manager_NoThrow *a1,
        size_t *a2,
        __int64 *a3)
{
  const unsigned __int16 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  unsigned __int16 *v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  const void *v25; // rcx
  bool v27[8]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  const void *v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+238h] [rbp+138h]
  unsigned __int64 v32; // [rsp+240h] [rbp+140h]
  unsigned __int16 *v33; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a3 = 0LL;
  memset_0(&v29, 0, 0x208uLL);
  v31 = 0LL;
  v6 = L"Package\\Index\\PackageFullName\\";
  v33 = (unsigned __int16 *)&v30;
  v32 = 256LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = L"Package\\Index\\PackageFullName\\";
  do
  {
    if ( (unsigned __int64)++v7 >= 0x7FFFFFFF )
    {
      v12 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
        (const char *)0x80070057LL);
LABEL_34:
      v18 = (unsigned int)v12;
      v19 = 577LL;
      goto LABEL_35;
    }
    v10 = v8 + 1;
    if ( *v9 != 94 )
      v10 = v8;
    ++v9;
    v8 = v10;
  }
  while ( *v9 );
  v11 = StateRepository::Cache::Key_NoThrow::EnsureCapacity(&v29, (const void *)(v7 + v10 + 1));
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
      (const char *)(unsigned int)v11);
    goto LABEL_18;
  }
  if ( v8 )
  {
    v13 = &v33[v31];
    if ( v7 )
    {
      v15 = v7;
      do
      {
        v16 = *v6;
        if ( *v6 == 94 )
        {
          *v13++ = 94;
          v16 = *v6;
        }
        *v13 = v16;
        ++v6;
        ++v13;
        --v15;
      }
      while ( v15 );
    }
    *v13 = 0;
  }
  else
  {
    v14 = StringCchCatW(v33, v32, (size_t *)L"Package\\Index\\PackageFullName\\");
    v12 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
        (const char *)(unsigned int)v14);
      goto LABEL_18;
    }
  }
  v31 += v7;
  v12 = 0;
LABEL_18:
  if ( v12 < 0 )
    goto LABEL_34;
  v17 = StateRepository::Cache::Key_NoThrow::Append((StateRepository::Cache::Key_NoThrow *)&v29, a2, (bool)v13);
  v12 = v17;
  if ( v17 < 0 )
  {
    v18 = (unsigned int)v17;
    v19 = 578LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
      (const char *)v18);
    goto LABEL_36;
  }
  v28 = 0LL;
  v27[0] = 0;
  v20 = StateRepository::Cache::Entity::Package_NoThrow::OpenIndex(
          a1,
          v33,
          (struct StateRepository::Cache::Context_NoThrow *)&v28,
          v27);
  v12 = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 582LL;
    goto LABEL_29;
  }
  if ( !v27[0] )
    goto LABEL_30;
  v23 = SRCacheContext_EnumerateData(v28, 0LL, a3);
  v12 = v23;
  if ( v23 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-context.hpp",
      (const char *)(unsigned int)v23);
  if ( v12 < 0 )
  {
    v21 = (unsigned int)v12;
    v22 = 585LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
      (const char *)v21);
  }
  else
  {
LABEL_30:
    v12 = 0;
  }
  v24 = v28;
  v28 = 0LL;
  if ( v24 )
    SRCacheContext_Close();
LABEL_36:
  v25 = v29;
  v29 = 0LL;
  if ( v25 )
    SRCache_Free();
  return (unsigned int)v12;
}
