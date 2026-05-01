/*
 * XREFs of ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x180069050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180069108 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180069294 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154D40 (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180154E34 (-_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1803B0CAC (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

int __fastcall CortanaSharedExperienceManager::_OnViewChangedHandler(
        ExperienceManagerUtils **this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  int v5; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v16);
  if ( v5 < 0 )
  {
    v10 = 1013LL;
    goto LABEL_17;
  }
  switch ( v16 )
  {
    case 0:
      v12 = *(_QWORD *)a3;
      v15 = 0;
      v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v12 + 56))(
             a3,
             &v15);
      if ( v5 >= 0 )
      {
        v8 = ExperienceManagerUtils::PostToUIThread(this[48], (struct IUnknown *)this, (void *)v15, v13);
        v9 = v8;
        if ( v8 < 0 )
        {
          v11 = 1051LL;
          goto LABEL_24;
        }
        return 0;
      }
      v10 = 1019LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v5;
    case 1:
      ++*((_DWORD *)this + 127);
      v8 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded((CortanaSharedExperienceManager *)this);
      v9 = v8;
      if ( v8 < 0 )
      {
        v11 = 1058LL;
        goto LABEL_24;
      }
      return 0;
    case 2:
      v7 = *((_DWORD *)this + 127);
      if ( v7 )
        *((_DWORD *)this + 127) = v7 - 1;
      v8 = CortanaSharedExperienceManager::_ApplyPriorityUnboostIfNeeded((CortanaSharedExperienceManager *)this);
      v9 = v8;
      if ( v8 >= 0 )
        return 0;
      v11 = 1070LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    case 5:
      return CortanaSharedExperienceManager::_OnViewCreated((CortanaSharedExperienceManager *)this);
    case 6:
      return CortanaSharedExperienceManager::_OnViewDestroyed((CortanaSharedExperienceManager *)this);
  }
  return 0;
}
