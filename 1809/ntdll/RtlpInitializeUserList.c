/*
 * XREFs of RtlpInitializeUserList @ 0x18003A98C
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x18003BAA0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     InitializeUserOrMachineLangList @ 0x180039F7C (InitializeUserOrMachineLangList.c)
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080CA0 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall RtlpInitializeUserList(__int64 a1)
{
  int updated; // r8d
  struct _TEB *v4; // rdx
  int WowTebOffset; // eax
  struct _TEB *v6; // r9
  __int64 v7; // rax
  struct _TEB *v8; // rcx
  __int64 v9; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v11; // rcx
  struct _TEB *v12; // rdx
  int v13; // eax
  struct _TEB *v14; // r9
  __int64 v15; // rax
  struct _TEB *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  struct _TEB *v19; // rdx
  int v20; // eax
  struct _TEB *v21; // r9
  __int64 v22; // rax
  struct _TEB *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+48h] [rbp+10h] BYREF
  __int64 v26; // [rsp+50h] [rbp+18h] BYREF

  updated = 0;
  v25 = 0LL;
  v26 = 0LL;
  if ( !NtCurrentTeb()->UserPrefLanguages || !*(_QWORD *)NtCurrentTeb()->UserPrefLanguages )
  {
    if ( a1 )
    {
      updated = InitializeUserOrMachineLangList(a1, 1u, &v25, 3, 0);
      if ( updated >= 0 )
      {
        v4 = NtCurrentTeb();
        WowTebOffset = v4->WowTebOffset;
        if ( WowTebOffset < 0 )
          LODWORD(v4) = WowTebOffset + (_DWORD)v4;
        v6 = NtCurrentTeb();
        v7 = v6->WowTebOffset;
        if ( (int)v7 < 0 )
          v6 = (struct _TEB *)((char *)v6 + v7);
        v8 = NtCurrentTeb();
        v9 = v8->WowTebOffset;
        if ( (_DWORD)v4 == LODWORD(v6->NtTib.SubSystemTib) )
        {
          if ( (int)v9 < 0 )
            v8 = (struct _TEB *)((char *)v8 + v9);
          MuiImpersonation = HIDWORD(v8->glDispatchTable[186]);
        }
        else
        {
          if ( (int)v9 < 0 )
            v8 = (struct _TEB *)((char *)v8 + v9);
          MuiImpersonation = v8->MuiImpersonation;
        }
        if ( !MuiImpersonation )
          updated = RtlpLoadLanguageConfigList(8LL, &v26, a1);
        if ( updated >= 0 )
        {
          v11 = v25;
          *(_DWORD *)(v25 + 40) |= 0x10u;
          updated = RtlpUpdateTEBLanguage(v11, 0LL, 4LL);
          if ( updated >= 0 && v26 )
            updated = RtlpUpdateTEBLanguage(0LL, v26, 5LL);
          v12 = NtCurrentTeb();
          v13 = v12->WowTebOffset;
          if ( v13 < 0 )
            LODWORD(v12) = v13 + (_DWORD)v12;
          v14 = NtCurrentTeb();
          v15 = v14->WowTebOffset;
          if ( (int)v15 < 0 )
            v14 = (struct _TEB *)((char *)v14 + v15);
          v16 = NtCurrentTeb();
          v17 = v16->WowTebOffset;
          if ( (_DWORD)v12 == LODWORD(v14->NtTib.SubSystemTib) )
          {
            if ( (int)v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            v18 = HIDWORD(v16->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v17 < 0 )
              v16 = (struct _TEB *)((char *)v16 + v17);
            v18 = v16->MuiImpersonation;
          }
          if ( !v18 )
          {
            v19 = NtCurrentTeb();
            v20 = v19->WowTebOffset;
            if ( v20 < 0 )
              LODWORD(v19) = v20 + (_DWORD)v19;
            v21 = NtCurrentTeb();
            v22 = v21->WowTebOffset;
            if ( (int)v22 < 0 )
              v21 = (struct _TEB *)((char *)v21 + v22);
            v23 = NtCurrentTeb();
            v24 = v23->WowTebOffset;
            if ( (_DWORD)v19 == LODWORD(v21->NtTib.SubSystemTib) )
            {
              if ( (int)v24 < 0 )
                v23 = (struct _TEB *)((char *)v23 + v24);
              HIDWORD(v23->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v24 < 0 )
                v23 = (struct _TEB *)((char *)v23 + v24);
              v23->MuiImpersonation = 1;
            }
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)updated;
}
