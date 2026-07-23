/*
 * XREFs of InitializeTEBUserLangList @ 0x18003BEF8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18003CC60 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x18007A6B0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUserPreferredUILanguages @ 0x180080710 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     InitializeUserOrMachineLangList @ 0x180039F7C (InitializeUserOrMachineLangList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpLoadLanguageConfigList @ 0x18004BC10 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080CA0 (RtlpUpdateTEBLanguage.c)
 */

__int64 __fastcall InitializeTEBUserLangList(char a1, __int64 a2)
{
  int updated; // ebx
  unsigned int v5; // r15d
  bool v6; // si
  bool v7; // bp
  bool v8; // r14
  void *UserPrefLanguages; // rdi
  __int64 v10; // rax
  unsigned __int16 v11; // r10
  __int64 v12; // r9
  struct _TEB *v13; // r8
  int WowTebOffset; // eax
  struct _TEB *v15; // rdx
  __int64 v16; // rax
  struct _TEB *v17; // rcx
  __int64 v18; // rax
  unsigned int MuiImpersonation; // eax
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  int v22; // eax
  bool v23; // zf
  struct _TEB *v25; // r8
  int v26; // eax
  struct _TEB *v27; // rdx
  __int64 v28; // rax
  struct _TEB *v29; // rcx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  char v32; // cl
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int i; // r10d
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v38 = 0LL;
  v39 = 0LL;
  updated = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    if ( v10 )
    {
      v11 = *(_WORD *)(v10 + 6);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 )
        {
          v13 = NtCurrentTeb();
          WowTebOffset = v13->WowTebOffset;
          if ( WowTebOffset < 0 )
            LODWORD(v13) = WowTebOffset + (_DWORD)v13;
          v15 = NtCurrentTeb();
          v16 = v15->WowTebOffset;
          if ( (int)v16 < 0 )
            v15 = (struct _TEB *)((char *)v15 + v16);
          v17 = NtCurrentTeb();
          v18 = v17->WowTebOffset;
          if ( (_DWORD)v13 == LODWORD(v15->NtTib.SubSystemTib) )
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            MuiImpersonation = HIDWORD(v17->glDispatchTable[186]);
          }
          else
          {
            if ( (int)v18 < 0 )
              v17 = (struct _TEB *)((char *)v17 + v18);
            MuiImpersonation = v17->MuiImpersonation;
          }
          if ( !MuiImpersonation )
          {
            if ( v11 > 1u )
            {
              v8 = 1;
            }
            else if ( (*(_BYTE *)v12 & 1) == 0 )
            {
              v34 = 0;
              for ( i = 0; i < 3; ++i )
              {
                v36 = v34 + 1;
                if ( ((*(_WORD *)(v12 + 8) >> (2 * i)) & 3) == 0 )
                  v36 = v34;
                v34 = v36;
              }
              updated = 0;
              v8 = v36 > 1;
            }
            v25 = NtCurrentTeb();
            v26 = v25->WowTebOffset;
            if ( v26 < 0 )
              LODWORD(v25) = v26 + (_DWORD)v25;
            v27 = NtCurrentTeb();
            v28 = v27->WowTebOffset;
            if ( (int)v28 < 0 )
              v27 = (struct _TEB *)((char *)v27 + v28);
            v29 = NtCurrentTeb();
            v30 = v29->WowTebOffset;
            if ( (_DWORD)v25 == LODWORD(v27->NtTib.SubSystemTib) )
            {
              if ( (int)v30 < 0 )
                v29 = (struct _TEB *)((char *)v29 + v30);
              HIDWORD(v29->glDispatchTable[186]) = 1;
            }
            else
            {
              if ( (int)v30 < 0 )
                v29 = (struct _TEB *)((char *)v29 + v30);
              v29->MuiImpersonation = 1;
            }
            if ( v8 )
              goto LABEL_36;
          }
          if ( !UserPrefLanguages )
          {
LABEL_43:
            if ( !a1 && !v7 && !v6 )
            {
              v32 = 1;
              goto LABEL_47;
            }
LABEL_83:
            v32 = 0;
LABEL_47:
            updated = InitializeUserOrMachineLangList(a2, 1u, &v38, 3 - (unsigned int)(a1 != 0), v32);
            if ( updated >= 0 )
            {
              v33 = v38;
              if ( v38 )
              {
                if ( a1 )
                  *(_DWORD *)(v38 + 40) |= 0x20u;
                else
                  *(_DWORD *)(v38 + 40) |= 0x10u;
                if ( v7 )
                  *(_DWORD *)(v33 + 40) |= 2u;
                if ( v6 )
                  *(_DWORD *)(v33 + 40) |= 4u;
                if ( v7 || v6 )
                  *(_DWORD *)(v33 + 40) |= v5;
                updated = RtlpUpdateTEBLanguage(v33, 0LL, 4LL);
              }
              if ( v8 )
              {
                v37 = RtlpLoadLanguageConfigList(8LL, &v39, a2);
                updated = v37;
                if ( v37 >= 0 )
                  return (unsigned int)RtlpUpdateTEBLanguage(0LL, v39, 5LL);
              }
            }
            return (unsigned int)updated;
          }
          if ( *(_QWORD *)UserPrefLanguages )
          {
            v20 = *(_QWORD *)(*(_QWORD *)UserPrefLanguages + 16LL);
            if ( v20 )
            {
              if ( *(_DWORD *)(v20 + 12) < *(_DWORD *)(a2 + 12) )
              {
LABEL_36:
                if ( UserPrefLanguages )
                {
                  v31 = *(_DWORD **)UserPrefLanguages;
                  if ( *(_QWORD *)UserPrefLanguages )
                  {
                    v7 = (v31[10] & 2) != 0;
                    v6 = (v31[10] & 4) != 0;
                    if ( (v31[10] & 2) != 0 || (v31[10] & 4) != 0 )
                      v5 = v31[10] & 0xFFFF0000;
                    RtlpMuiRegFreeLanguageList(v31);
                    *(_QWORD *)UserPrefLanguages = 0LL;
                  }
                }
                if ( NtCurrentTeb()->MergedPrefLanguages )
                  *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages + 10) = *((_DWORD *)NtCurrentTeb()->MergedPrefLanguages
                                                                          + 10) | 0x80;
              }
            }
          }
          if ( UserPrefLanguages )
          {
            v21 = *(_DWORD **)UserPrefLanguages;
            if ( *(_QWORD *)UserPrefLanguages )
            {
              v22 = v21[10];
              if ( a1 )
                v23 = (v22 & 0x20) == 0;
              else
                v23 = (v22 & 0x10) == 0;
              if ( !v23 )
                return (unsigned int)updated;
              if ( (v22 & 2) != 0 )
                v7 = 1;
              if ( (v22 & 4) != 0 )
                v6 = 1;
              if ( v7 || v6 )
                v5 = v22 & 0xFFFF0000;
              RtlpMuiRegFreeLanguageList(v21);
              *(_QWORD *)UserPrefLanguages = 0LL;
              if ( NtCurrentTeb()->MergedPrefLanguages )
              {
                RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                NtCurrentTeb()->MergedPrefLanguages = 0LL;
              }
            }
          }
          if ( v8 )
            goto LABEL_83;
          goto LABEL_43;
        }
      }
    }
  }
  return 3221225485LL;
}
