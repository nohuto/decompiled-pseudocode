/*
 * XREFs of __CRT_INIT@12 @ 0x1000C492
 * Callers:
 *     __DllMainCRTStartup @ 0x1000C6B6 (__DllMainCRTStartup.c)
 * Callees:
 *     __initterm_e @ 0x1000C95D (__initterm_e.c)
 *     __amsg_exit @ 0x1000CB91 (__amsg_exit.c)
 *     __IsNonwritableInCurrentImage @ 0x1000CBF0 (__IsNonwritableInCurrentImage.c)
 *     __initterm @ 0x1000CD83 (__initterm.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall _CRT_INIT(int a1, int a2, int a3)
{
  PVOID StackBase; // edx
  signed __int32 i; // eax
  void (**v5)(void); // eax
  void (**v6)(void); // esi
  void *v7; // edi
  PVOID v8; // edx
  signed __int32 v9; // eax
  void (*v11)(void); // [esp+Ch] [ebp-10h]
  PVOID j; // [esp+Ch] [ebp-10h]
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+10h] [ebp-Ch]
  signed __int32 v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+14h] [ebp-8h]
  void (**v17)(void); // [esp+18h] [ebp-4h]

  if ( !a2 )
  {
    if ( dword_100180B0 > 0 )
    {
      --dword_100180B0;
      v13 = 0;
      StackBase = NtCurrentTeb()->NtTib.StackBase;
      v15 = (signed __int32)StackBase;
      for ( i = _InterlockedCompareExchange(&__native_startup_lock, (signed __int32)StackBase, 0);
            i;
            i = _InterlockedCompareExchange(&__native_startup_lock, v15, 0) )
      {
        if ( (PVOID)i == StackBase )
        {
          v13 = 1;
          break;
        }
        Sleep(0x3E8u);
        StackBase = (PVOID)v15;
      }
      if ( __native_startup_state == 2 )
      {
        v5 = (void (**)(void))__onexitbegin;
        v17 = (void (**)(void))__onexitbegin;
        if ( __onexitbegin )
        {
          v6 = (void (**)(void))__onexitend;
          v7 = __onexitbegin;
          v16 = __onexitend;
          while ( --v6 >= v5 )
          {
            v11 = *v6;
            if ( *v6 )
            {
              *v6 = 0;
              v11();
              if ( v7 != __onexitbegin || (v5 = v17, v16 != __onexitend) )
              {
                v5 = (void (**)(void))__onexitbegin;
                v16 = __onexitend;
                v7 = __onexitbegin;
                v17 = (void (**)(void))__onexitbegin;
                v6 = (void (**)(void))__onexitend;
              }
            }
          }
          _free(v5);
          __onexitend = 0;
          __onexitbegin = 0;
        }
        __native_startup_state = 0;
        if ( !v13 )
          _InterlockedExchange(&__native_startup_lock, 0);
      }
      else
      {
        _amsg_exit(31);
      }
      return 1;
    }
    return 0;
  }
  if ( a2 == 1 )
  {
    v14 = 0;
    v8 = NtCurrentTeb()->NtTib.StackBase;
    for ( j = v8; ; v8 = j )
    {
      v9 = _InterlockedCompareExchange(&__native_startup_lock, (signed __int32)v8, 0);
      if ( !v9 )
        break;
      if ( (PVOID)v9 == v8 )
      {
        v14 = 1;
        break;
      }
      Sleep(0x3E8u);
    }
    if ( __native_startup_state )
    {
      _amsg_exit(31);
    }
    else
    {
      __native_startup_state = 1;
      if ( _initterm_e((_PIFV *)&__xi_a, (_PIFV *)&__xi_z) )
        return 0;
      _initterm((_PVFV *)&__xc_a, (_PVFV *)&__xc_z);
      __native_startup_state = 2;
    }
    if ( !v14 )
      _InterlockedExchange(&__native_startup_lock, 0);
    if ( __dyn_tls_init_callback && _IsNonwritableInCurrentImage(&__dyn_tls_init_callback) )
      __dyn_tls_init_callback(__dyn_tls_init_callback, a1, 2, a3);
    ++dword_100180B0;
  }
  return 1;
}
