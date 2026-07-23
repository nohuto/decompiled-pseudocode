/*
 * XREFs of PopFxInitializeSocSubsystemStaticInfo @ 0x14086A8F0
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402D8200 (PopFxEnablePlatformStates.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcsncmp @ 0x140197940 (wcsncmp.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14086B220 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginInitializeSocSubsystemStaticInfo @ 0x14086BE3C (PopPluginInitializeSocSubsystemStaticInfo.c)
 *     PopPluginQuerySocSubsystemCount @ 0x14086C044 (PopPluginQuerySocSubsystemCount.c)
 */

__int64 __fastcall PopFxInitializeSocSubsystemStaticInfo(unsigned int a1)
{
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  unsigned int *v5; // rsi
  __int64 v6; // rdi
  unsigned int *PoolWithTag; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rdi
  __int128 v11; // xmm1
  char v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // edi
  __int64 v15; // rbx
  unsigned int v16; // eax
  const wchar_t *v17; // r13
  __int64 v18; // r12
  int v19; // eax
  unsigned int **v20; // rax
  char v22; // [rsp+28h] [rbp-A9h]
  _DWORD v23[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-99h]
  __int128 v25; // [rsp+40h] [rbp-91h]
  __int128 v26; // [rsp+50h] [rbp-81h]
  __int64 v27; // [rsp+60h] [rbp-71h]
  unsigned int v28; // [rsp+68h] [rbp-69h] BYREF
  __int64 v29; // [rsp+6Ch] [rbp-65h]
  wchar_t pszDest[64]; // [rsp+78h] [rbp-59h] BYREF

  memset(pszDest, 0, sizeof(pszDest));
  if ( PopFxProcessorPlugin && (v28 = a1, v29 = 0LL, (unsigned __int8)PopPluginQuerySocSubsystemCount(v2, &v28)) )
  {
    v4 = v29;
    v5 = (unsigned int *)PopFxLookupSocSubsystemsByPlatformIdleState(a1);
    if ( v5 )
    {
      v3 = -1073741585;
LABEL_29:
      ExFreePoolWithTag(v5, 0x4D584650u);
      return (unsigned int)v3;
    }
    v6 = (int)(344 * v4);
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v6 + 24, 0x4D584650u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6 + 24);
      v5[4] = a1;
      v9 = 0;
      v5[5] = v4;
      if ( v4 )
      {
        while ( 1 )
        {
          v10 = 86LL * v9;
          *(_QWORD *)&v5[v10 + 8] = &v5[v10 + 27];
          v5[v10 + 6] = 0x800000;
          LOWORD(v5[v10 + 10]) = 0;
          *(_QWORD *)&v5[v10 + 12] = &v5[v10 + 59];
          HIWORD(v5[v10 + 10]) = 128;
          v5[v10 + 14] = v9;
          v23[0] = a1;
          v24 = 0LL;
          v23[1] = v5[v10 + 14];
          v25 = *(_OWORD *)&v5[v10 + 6];
          v11 = *(_OWORD *)&v5[v10 + 10];
          v27 = 0LL;
          v26 = v11;
          PopPluginInitializeSocSubsystemStaticInfo(v8, v23);
          LOWORD(v5[v10 + 10]) = v26;
          LOWORD(v5[v10 + 6]) = v25;
          *(_QWORD *)&v5[v10 + 16] = v24;
          v5[v10 + 26] = v27;
          v3 = RtlHashUnicodeString((PCUNICODE_STRING)&v5[v10 + 10], 0, 0, &v5[v10 + 15]);
          if ( v3 < 0 )
            break;
          v4 = v5[5];
          if ( ++v9 >= v4 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        v22 = 0;
        v12 = 0;
        v13 = 0;
        if ( v4 )
        {
          while ( 1 )
          {
            v14 = 0;
            v15 = 86LL * v13;
            v16 = v5[v15 + 14];
            *(GUID *)&v5[v15 + 18] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
            LOWORD(v5[v15 + 19]) = a1;
            HIWORD(v5[v15 + 19]) = v16 + 1;
            v17 = *(const wchar_t **)&v5[v15 + 8];
            if ( v5[5] )
            {
              while ( 1 )
              {
                v18 = 86LL * v14;
                if ( v14 != v13 && !wcsncmp(*(const wchar_t **)&v5[v15 + 12], *(const wchar_t **)&v5[v18 + 12], 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, v14);
                if ( !wcsncmp(v17, *(const wchar_t **)&v5[v18 + 12], 0x40uLL) )
                  break;
                if ( ++v14 >= v5[5] )
                {
                  v12 = v22;
                  goto LABEL_18;
                }
              }
              v19 = v5[v18 + 14] + 1;
              *(GUID *)&v5[v15 + 22] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              LOWORD(v5[v15 + 23]) = a1;
            }
            else
            {
LABEL_18:
              if ( v12 )
              {
                if ( wcsncmp(v17, pszDest, 0x40uLL) )
                  PopFxBugCheck(0x706uLL, 0x25uLL, 0x50617265uLL, v13);
              }
              else
              {
                RtlStringCchCopyW(pszDest, 0x40uLL, v17);
                v22 = 1;
              }
              LOWORD(v19) = 0;
              *(GUID *)&v5[v15 + 22] = GUID_SLEEPSTUDY_BLOCKER_TOP_LEVEL_SOC_SUBSYSTEM;
              LOWORD(v5[v15 + 23]) = 0;
            }
            ++v13;
            HIWORD(v5[v15 + 23]) = v19;
            if ( v13 >= v5[5] )
              break;
            v12 = v22;
          }
        }
        v3 = 0;
      }
      if ( v3 )
        goto LABEL_29;
      v20 = (unsigned int **)qword_140419B38;
      if ( *(__int64 **)qword_140419B38 != &SocSubsystemsList )
        __fastfail(3u);
      *(_QWORD *)v5 = &SocSubsystemsList;
      *((_QWORD *)v5 + 1) = v20;
      *v20 = v5;
      qword_140419B38 = (__int64)v5;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v3;
}
