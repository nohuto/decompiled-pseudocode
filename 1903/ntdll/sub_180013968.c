/*
 * XREFs of sub_180013968 @ 0x180013968
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 */

char sub_180013968()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r9
  struct _TEB *v3; // rdx
  int SpareUlong0; // eax
  struct _TEB *v5; // r8
  __int64 v6; // rax
  struct _TEB *v7; // rcx
  __int64 v8; // rax
  unsigned int MuiImpersonation; // eax
  struct _TEB *v11; // rcx
  int v12; // eax
  struct _TEB *v13; // r8
  __int64 v14; // rax
  struct _TEB *v15; // rdx
  __int64 v16; // rax
  int ThreadPreferredUILanguages; // eax
  int v18; // [rsp+30h] [rbp+8h] BYREF
  char v19; // [rsp+38h] [rbp+10h] BYREF
  __int64 v20; // [rsp+40h] [rbp+18h] BYREF

  v0 = 1;
  if ( !NtCurrentTeb()->MergedPrefLanguages || *((char *)NtCurrentTeb()->MergedPrefLanguages + 40) < 0 )
    goto LABEL_29;
  v20 = 0LL;
  v1 = RtlpCreateProcessRegistryInfo(&v20);
  v2 = 0LL;
  if ( v1 >= 0 )
    v2 = v20;
  if ( v2 )
  {
    if ( !*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2)
      || *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->MergedPrefLanguages + 2) + 12LL) == MEMORY[0x7FFE03A4]
      && NtCurrentTeb()->MuiGeneration == *(_DWORD *)(v2 + 16) )
    {
      v3 = NtCurrentTeb();
      SpareUlong0 = v3->SpareUlong0;
      if ( SpareUlong0 < 0 )
        LODWORD(v3) = SpareUlong0 + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = (int)v5->SpareUlong0;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = NtCurrentTeb();
      v8 = (int)v7->SpareUlong0;
      if ( (_DWORD)v3 == LODWORD(v5->NtTib.SubSystemTib) )
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = HIDWORD(v7->glDispatchTable[186]);
      }
      else
      {
        if ( (int)v8 < 0 )
          v7 = (struct _TEB *)((char *)v7 + v8);
        MuiImpersonation = v7->MuiImpersonation;
      }
      if ( MuiImpersonation )
        return v0;
      if ( *(_WORD *)(*(_QWORD *)(v2 + 24) + 6LL) == 1 )
      {
        v11 = NtCurrentTeb();
        v12 = v11->SpareUlong0;
        if ( v12 < 0 )
          LODWORD(v11) = v12 + (_DWORD)v11;
        v13 = NtCurrentTeb();
        v14 = (int)v13->SpareUlong0;
        if ( (int)v14 < 0 )
          v13 = (struct _TEB *)((char *)v13 + v14);
        v15 = NtCurrentTeb();
        v16 = (int)v15->SpareUlong0;
        if ( (_DWORD)v11 == LODWORD(v13->NtTib.SubSystemTib) )
        {
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          HIDWORD(v15->glDispatchTable[186]) = 1;
        }
        else
        {
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          v15->MuiImpersonation = 1;
        }
        return v0;
      }
    }
    else
    {
      *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) | 0x80;
    }
LABEL_29:
    v18 = 0;
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(48LL, &v19, 0LL, &v18);
    if ( (int)(ThreadPreferredUILanguages + 0x80000000) >= 0 && ThreadPreferredUILanguages != -1073741789
      || !NtCurrentTeb()->MergedPrefLanguages )
    {
      return 0;
    }
    return v0;
  }
  return 0;
}
