/*
 * XREFs of LdrpSetThreadPreferredLangList @ 0x18003F110
 * Callers:
 *     LdrResFallbackLangList @ 0x180039A78 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModule @ 0x1800815F0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003F300 (RtlpCreateProcessRegistryInfo.c)
 */

char LdrpSetThreadPreferredLangList()
{
  char v0; // bl
  int v1; // eax
  __int64 v2; // r9
  struct _TEB *v3; // rdx
  int WowTebOffset; // eax
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
  NTSTATUS ThreadPreferredUILanguages; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+38h] [rbp+10h] BYREF
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
      WowTebOffset = v3->WowTebOffset;
      if ( WowTebOffset < 0 )
        LODWORD(v3) = WowTebOffset + (_DWORD)v3;
      v5 = NtCurrentTeb();
      v6 = v5->WowTebOffset;
      if ( (int)v6 < 0 )
        v5 = (struct _TEB *)((char *)v5 + v6);
      v7 = NtCurrentTeb();
      v8 = v7->WowTebOffset;
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
        v12 = v11->WowTebOffset;
        if ( v12 < 0 )
          LODWORD(v11) = v12 + (_DWORD)v11;
        v13 = NtCurrentTeb();
        v14 = v13->WowTebOffset;
        if ( (int)v14 < 0 )
          v13 = (struct _TEB *)((char *)v13 + v14);
        v15 = NtCurrentTeb();
        v16 = v15->WowTebOffset;
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
    ReturnLength = 0;
    ThreadPreferredUILanguages = RtlGetThreadPreferredUILanguages(0x30u, &NumberOfLanguages, 0LL, &ReturnLength);
    if ( (int)(ThreadPreferredUILanguages + 0x80000000) >= 0 && ThreadPreferredUILanguages != -1073741789
      || !NtCurrentTeb()->MergedPrefLanguages )
    {
      return 0;
    }
    return v0;
  }
  return 0;
}
