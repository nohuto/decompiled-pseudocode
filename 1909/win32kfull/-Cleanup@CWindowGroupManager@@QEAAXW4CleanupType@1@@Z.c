/*
 * XREFs of ?Cleanup@CWindowGroupManager@@QEAAXW4CleanupType@1@@Z @ 0x1C023D0E4
 * Callers:
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x1C000B97C (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?Uninitialize@CWindowGroupManager@@SAXXZ @ 0x1C023DC70 (-Uninitialize@CWindowGroupManager@@SAXXZ.c)
 * Callees:
 *     ??_GCWindowGroup@@QEAAPEAXI@Z @ 0x1C023CDB0 (--_GCWindowGroup@@QEAAPEAXI@Z.c)
 *     ?RemoveAll@CWindowGroup@@QEAAXXZ @ 0x1C023D8AC (-RemoveAll@CWindowGroup@@QEAAXXZ.c)
 */

unsigned __int64 __fastcall CWindowGroupManager::Cleanup(__int64 a1, int a2)
{
  struct CWindowGroupManager *v2; // rsi
  unsigned __int64 *v4; // rbp
  CWindowGroup *v5; // rbx
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  CWindowGroup *v10; // rdi
  bool v11; // al
  unsigned __int64 *i; // rcx

  v2 = `anonymous namespace'::g_windowGroupManager;
  v4 = (unsigned __int64 *)*((_QWORD *)`anonymous namespace'::g_windowGroupManager + 3);
  v5 = (CWindowGroup *)v4;
  while ( 1 )
  {
    if ( !v5 )
      goto LABEL_7;
    v6 = *(_QWORD *)v5;
    result = *(_QWORD *)v5 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v6 = *(_QWORD *)v5;
    }
    if ( (v6 & 1) != 0 )
    {
LABEL_7:
      v8 = v4 + 1;
      result = *((_QWORD *)v2 + 3);
      v9 = result + 8 * ((unsigned __int64)*((unsigned int *)v2 + 5) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v8 >= v9 )
        {
          v6 = 0LL;
          goto LABEL_12;
        }
        result = *v8;
        if ( (*v8 & 1) == 0 )
          break;
        ++v8;
      }
      v5 = (CWindowGroup *)*v8;
      v4 = v8;
      v6 = *v8;
    }
    else
    {
      v5 = (CWindowGroup *)v6;
    }
LABEL_12:
    if ( !v6 )
      return result;
    v10 = v5;
    if ( !a2 )
    {
      v11 = 1;
      goto LABEL_18;
    }
    if ( a2 == 1 )
    {
      v11 = *((_DWORD *)v5 + 6) == 0;
LABEL_18:
      if ( v11 )
      {
        for ( i = v4; (*i & 1) == 0; i = (unsigned __int64 *)*i )
        {
          if ( (CWindowGroup *)*i == v5 )
          {
            *i = *(_QWORD *)v5;
            --*((_DWORD *)v2 + 4);
            *(_QWORD *)v5 |= 0x8000000000000002uLL;
            v5 = (CWindowGroup *)i;
            break;
          }
        }
        CWindowGroup::RemoveAll(v10);
        CWindowGroup::`scalar deleting destructor'(v10);
      }
    }
  }
}
