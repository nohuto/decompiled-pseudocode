/*
 * XREFs of ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z @ 0x18042C8E8
 * Callers:
 *     ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18042A3CC (-Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _o__ui64tow_s_0 @ 0x18008A844 (_o__ui64tow_s_0.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180122D88 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z @ 0x180429818 (-Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z.c)
 *     ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z @ 0x18042A328 (-EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall StateRepository::Cache::Entity::Package_NoThrow::Open(
        struct StateRepository::Cache::Manager_NoThrow *a1,
        __int64 a2,
        struct StateRepository::Cache::Context_NoThrow *a3,
        bool *a4)
{
  const unsigned __int16 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14
  const unsigned __int16 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned __int16 *v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  bool v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  const void *v21; // rcx
  const void *v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+238h] [rbp+138h]
  unsigned __int64 v27; // [rsp+240h] [rbp+140h]
  unsigned __int16 *v28; // [rsp+248h] [rbp+148h]
  unsigned __int16 v29[4]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v30; // [rsp+258h] [rbp+158h] BYREF
  char v31; // [rsp+260h] [rbp+160h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  memset_0(&v24, 0, 0x208uLL);
  v27 = 256LL;
  v26 = 0LL;
  v6 = L"Package\\Data\\";
  v28 = (unsigned __int16 *)&v25;
  v7 = 0LL;
  v8 = 0LL;
  v9 = L"Package\\Data\\";
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
LABEL_33:
      v18 = 635LL;
      goto LABEL_34;
    }
    v10 = v8 + 1;
    if ( *v9 != 94 )
      v10 = v8;
    ++v9;
    v8 = v10;
  }
  while ( *v9 );
  v11 = StateRepository::Cache::Key_NoThrow::EnsureCapacity(&v24, (const void *)(v7 + v10 + 1));
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
    v14 = &v28[v26];
    if ( v7 )
    {
      v15 = v7;
      do
      {
        v16 = *v6;
        if ( *v6 == 94 )
        {
          *v14++ = 94;
          v16 = *v6;
        }
        *v14 = v16;
        ++v6;
        ++v14;
        --v15;
      }
      while ( v15 );
    }
    *v14 = 0;
  }
  else
  {
    v13 = StringCchCatW(v28, v27, (size_t *)L"Package\\Data\\");
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
        (const char *)(unsigned int)v13);
      goto LABEL_18;
    }
  }
  v26 += v7;
  v12 = 0;
LABEL_18:
  if ( v12 < 0 )
    goto LABEL_33;
  if ( (unsigned int)o__ui64tow_s_0() )
  {
    v12 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
      (const char *)0x8000FFFFLL);
LABEL_22:
    v18 = 636LL;
    goto LABEL_34;
  }
  v12 = StateRepository::Cache::Key_NoThrow::Append((StateRepository::Cache::Key_NoThrow *)&v24, (size_t *)v29, v17);
  if ( v12 < 0 )
    goto LABEL_22;
  *(_QWORD *)v29 = a3;
  v30 = 0LL;
  v19 = *(_QWORD *)a1;
  v31 = 1;
  v12 = SRCacheContext_Open(v19, v28, 0LL, &v30);
  if ( v31 )
  {
    v20 = **(_QWORD **)v29;
    **(_QWORD **)v29 = v30;
    if ( v20 )
      SRCacheContext_Close();
  }
  if ( v12 >= 0 )
  {
    v12 = 0;
    *a4 = *(_QWORD *)a3 != 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-context.hpp",
      (const char *)(unsigned int)v12);
  }
  if ( v12 >= 0 )
  {
    v12 = 0;
    goto LABEL_35;
  }
  v18 = 637LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-entity-package.hpp",
    (const char *)(unsigned int)v12);
LABEL_35:
  v21 = v24;
  v24 = 0LL;
  if ( v21 )
    SRCache_Free();
  return (unsigned int)v12;
}
