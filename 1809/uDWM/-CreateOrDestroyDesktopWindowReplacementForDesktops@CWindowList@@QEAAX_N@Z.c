/*
 * XREFs of ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180049D68
 * Callers:
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180022708 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18002C6C8 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18002C7A8 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 */

void __fastcall CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(CWindowList *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v5 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v6 = v5;
    if ( !v5 )
      break;
    if ( *((_BYTE *)v5 + 72) )
    {
      v7 = *v5;
      if ( a2 )
      {
        CDesktopManager::CreateDesktopWindowForLogonDesktop(v7);
        if ( !*((_QWORD *)this + 66) && CDesktopManager::IsLogonDesktop(*v6) )
        {
          *((_QWORD *)this + 66) = v6[3];
          v8 = v6[3];
          if ( v8 )
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        }
      }
      else
      {
        CDesktopManager::DestroyDesktopWindowReplacement(v7);
      }
    }
  }
}
