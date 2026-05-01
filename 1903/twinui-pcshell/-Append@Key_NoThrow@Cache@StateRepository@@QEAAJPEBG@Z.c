/*
 * XREFs of ?Append@Key_NoThrow@Cache@StateRepository@@QEAAJPEBG@Z @ 0x18040A1E8
 * Callers:
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z @ 0x18040AF10 (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PE.c)
 *     ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z @ 0x18040D2B8 (-Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoTh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180103D78 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z @ 0x18040ACF8 (-EnsureCapacity@Key_NoThrow@Cache@StateRepository@@QEAAJ_K_N@Z.c)
 */

__int64 __fastcall StateRepository::Cache::Key_NoThrow::Append(
        StateRepository::Cache::Key_NoThrow *this,
        size_t *a2,
        bool a3)
{
  size_t *v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  const unsigned __int16 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // r14d
  int v12; // ebx
  __int64 v13; // rdx
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // rcx
  __int64 v16; // rdx
  unsigned __int16 v17; // ax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a2 )
  {
    v5 = 0LL;
    v6 = 0LL;
    v7 = (const unsigned __int16 *)a2;
    if ( *(_WORD *)a2 )
    {
      while ( (unsigned __int64)++v5 < 0x7FFFFFFF )
      {
        v8 = v6 + 1;
        if ( *v7 != 94 )
          v8 = v6;
        ++v7;
        v6 = v8;
        if ( !*v7 )
          goto LABEL_7;
      }
      v12 = -2147024809;
      v13 = 309LL;
      goto LABEL_10;
    }
LABEL_7:
    v9 = StateRepository::Cache::Key_NoThrow::EnsureCapacity(this, v5 + v6 + *((_QWORD *)this + 65) + 1LL, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
        (const char *)(unsigned int)v9);
      return v10;
    }
    v14 = (unsigned __int16 *)*((_QWORD *)this + 67);
    if ( v6 )
    {
      v15 = &v14[*((_QWORD *)this + 65)];
      if ( v5 )
      {
        v16 = v5;
        do
        {
          v17 = *(_WORD *)v3;
          if ( *(_WORD *)v3 == 94 )
          {
            *v15++ = 94;
            v17 = *(_WORD *)v3;
          }
          *v15 = v17;
          v3 = (size_t *)((char *)v3 + 2);
          ++v15;
          --v16;
        }
        while ( v16 );
      }
      *v15 = 0;
    }
    else
    {
      v12 = StringCchCatW(v14, *((_QWORD *)this + 66), v3);
      if ( v12 < 0 )
      {
        v13 = 313LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-key.hpp",
          (const char *)(unsigned int)v12);
        return (unsigned int)v12;
      }
    }
    *((_QWORD *)this + 65) += v5;
  }
  return 0LL;
}
