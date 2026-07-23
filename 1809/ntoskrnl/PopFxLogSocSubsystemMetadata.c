/*
 * XREFs of PopFxLogSocSubsystemMetadata @ 0x14086AE3C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxLookupSocSubsystemsByPlatformIdleState @ 0x14086B220 (PopFxLookupSocSubsystemsByPlatformIdleState.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086C0B8 (PopPluginQuerySocSubsystemMetadata.c)
 */

__int64 __fastcall PopFxLogSocSubsystemMetadata(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  __int64 v4; // r15
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rax
  size_t v9; // rbx
  char *PoolWithTag; // rax
  char *v11; // rdi
  unsigned int v12; // eax
  unsigned int i; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  SIZE_T v16; // rbx
  unsigned int *v17; // rax
  unsigned int *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int j; // edx
  char *v23; // rcx
  struct _EVENT_DATA_DESCRIPTOR *v24; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // r8
  __int64 v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rdx
  ULONG v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  REGHANDLE v38; // r12
  char v39; // [rsp+30h] [rbp-10h] BYREF
  ULONG UserDataCount; // [rsp+80h] [rbp+40h]
  unsigned int v42; // [rsp+98h] [rbp+58h] BYREF

  v39 = PopWnfCsEnterScenarioId;
  v2 = 0;
  v3 = PopFxLookupSocSubsystemsByPlatformIdleState(a2);
  v4 = v3;
  if ( v3 )
  {
    v6 = 0;
    if ( !*(_DWORD *)(v3 + 20) )
      return v2;
    while ( 1 )
    {
      v7 = 344LL * v6;
      v8 = *(unsigned int *)(v7 + v4 + 104);
      v42 = v8;
      if ( (_DWORD)v8 )
        break;
LABEL_30:
      if ( ++v6 >= *(_DWORD *)(v4 + 20) )
        return v2;
    }
    v9 = 296 * v8;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 296 * v8, 0x4D584650u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v2 = -1073741670;
      goto LABEL_29;
    }
    memset(PoolWithTag, 0, v9);
    v12 = v42;
    for ( i = 0; i < v42; v12 = v42 )
    {
      v14 = i++;
      v15 = 296 * v14;
      *(_QWORD *)&v11[v15 + 8] = &v11[296 * v14 + 32];
      *(_WORD *)&v11[v15 + 2] = 128;
      *(_QWORD *)&v11[v15 + 24] = &v11[296 * v14 + 164];
      *(_WORD *)&v11[v15 + 18] = 128;
      *(_DWORD *)&v11[v15 + 160] = -1430541637;
      *(_DWORD *)&v11[v15 + 292] = -1430541637;
    }
    v16 = (int)(8 * v12 + 32);
    v17 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v16, 0x4D584650u);
    v18 = v17;
    if ( v17 )
    {
      memset(v17, 0, v16);
      v20 = 0LL;
      *v18 = a2;
      v21 = *(_QWORD *)(v7 + v4 + 64);
      v18[6] = 0;
      *((_QWORD *)v18 + 1) = v21;
      *((_QWORD *)v18 + 2) = v7 + v4 + 40;
      for ( v18[7] = v42; (unsigned int)v20 < v42; v20 = (unsigned int)(v20 + 1) )
      {
        v19 = (unsigned int)v20;
        *(_QWORD *)&v18[2 * v20 + 8] = &v11[296 * (unsigned int)v20];
      }
      if ( !(unsigned __int8)PopPluginQuerySocSubsystemMetadata(v19, *(unsigned int *)(v7 + v4 + 60), v18) )
      {
        v2 = -1073741595;
LABEL_27:
        ExFreePoolWithTag(v11, 0x4D584650u);
        if ( v18 )
          ExFreePoolWithTag(v18, 0x4D584650u);
LABEL_29:
        if ( (v2 & 0x80000000) != 0 )
          return v2;
        goto LABEL_30;
      }
      for ( j = 0; j < v42; ++j )
      {
        v23 = &v11[296 * j];
        if ( *((_DWORD *)v23 + 40) != -1430541637 )
          PopFxBugCheck(0x706uLL, 0x28uLL, 0x4B657920uLL, *((unsigned __int16 *)v23 + 1));
        if ( *((_DWORD *)v23 + 73) != -1430541637 )
          PopFxBugCheck(0x706uLL, 0x28uLL, 0x56616C75uLL, *((unsigned __int16 *)v23 + 9));
      }
      UserDataCount = v42 + 4 * v42 + 2;
      v24 = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, 16LL * UserDataCount, 0x4D584650u);
      UserData = v24;
      if ( v24 )
      {
        v24->Reserved = 0;
        v24->Ptr = (ULONGLONG)&v39;
        v26 = 0;
        v24->Size = 1;
        v24[1].Reserved = 0;
        v27 = 2;
        v24[1].Ptr = (ULONGLONG)&v42;
        for ( v24[1].Size = 4; v26 < v42; *(_QWORD *)&UserData[v36].Size = v37 )
        {
          v28 = v27;
          UserData[v28].Reserved = 0;
          UserData[v28].Ptr = v7 + v4 + 72;
          UserData[v28].Size = 16;
          v29 = v26++;
          v30 = &v11[296 * v29];
          *((_DWORD *)v30 + 40) = *(unsigned __int16 *)v30 >> 1;
          v31 = v27 + 1;
          v32 = v27 + 2;
          v31 *= 2LL;
          v33 = v32;
          *(&UserData->Reserved + 2 * v31) = 0;
          *(&UserData->Ptr + v31) = (ULONGLONG)(v30 + 160);
          *(&UserData->Size + 2 * v31) = 4;
          v34 = *(unsigned __int16 *)v30;
          UserData[v33].Ptr = *((_QWORD *)v30 + 1);
          UserData[v33].Size = v34;
          UserData[v33].Reserved = 0;
          *((_DWORD *)v30 + 73) = *((unsigned __int16 *)v30 + 8) >> 1;
          v35 = v32 + 1;
          v32 += 2;
          v35 *= 2LL;
          v36 = v32;
          v27 = v32 + 1;
          *(&UserData->Ptr + v35) = (ULONGLONG)(v30 + 292);
          *((_QWORD *)&UserData->Size + v35) = 4LL;
          v37 = *((unsigned __int16 *)v30 + 8);
          UserData[v36].Ptr = *((_QWORD *)v30 + 3);
        }
        if ( PopDiagSleepStudyHandleRegistered )
        {
          v38 = PopDiagSleepStudyHandle;
          if ( EtwEventEnabled(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA) )
            EtwWrite(v38, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, UserDataCount, UserData);
        }
        ExFreePoolWithTag(UserData, 0x4D584650u);
        goto LABEL_27;
      }
    }
    v2 = -1073741670;
    goto LABEL_27;
  }
  return (unsigned int)-1073741584;
}
