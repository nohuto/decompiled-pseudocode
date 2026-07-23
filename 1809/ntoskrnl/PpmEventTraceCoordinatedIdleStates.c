/*
 * XREFs of PpmEventTraceCoordinatedIdleStates @ 0x140879128
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140765460 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void PpmEventTraceCoordinatedIdleStates()
{
  __int64 v0; // rdi
  unsigned int v1; // eax
  ULONG v2; // esi
  SIZE_T v3; // rbp
  struct _EVENT_DATA_DESCRIPTOR *PoolWithTag; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v6; // r9
  struct _EVENT_DATA_DESCRIPTOR *v7; // r8
  int v8; // edx
  struct _EVENT_DATA_DESCRIPTOR *v9; // rcx
  const wchar_t *v10; // r11
  int v11; // eax
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN) )
  {
    v0 = PpmPlatformStates;
    v1 = PpmPlatformStates ? *(_DWORD *)PpmPlatformStates : 0;
    v12 = v1;
    v2 = 2 * v1 + 1;
    v3 = 16 * v2 + 12 * v1;
    PoolWithTag = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, v3, 0x654D5050u);
    UserData = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v3);
      UserData->Reserved = 0;
      v6 = 0LL;
      v7 = &UserData[v2];
      UserData->Ptr = (ULONGLONG)&v12;
      for ( UserData->Size = 4; (unsigned int)v6 < v12; UserData[v8 + 2].Reserved = 0 )
      {
        v8 = 2 * v6;
        v9 = &UserData[(unsigned int)(2 * v6 + 1)];
        LODWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 72);
        HIDWORD(v7->Ptr) = *(_DWORD *)(384 * v6 + v0 + 76);
        v7->Size = *(unsigned __int8 *)(384 * v6 + v0 + 121);
        v9->Reserved = 0;
        v9->Ptr = (ULONGLONG)v7;
        v9->Size = 12;
        v10 = *(const wchar_t **)(384 * v6 + v0 + 304);
        if ( v10 )
        {
          v11 = *(unsigned __int16 *)(384 * v6 + v0 + 298);
        }
        else
        {
          v11 = 28;
          v10 = L"<unspecified>";
        }
        UserData[v8 + 2].Ptr = (ULONGLONG)v10;
        v7 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v7 + 12);
        UserData[v8 + 2].Size = v11;
        v6 = (unsigned int)(v6 + 1);
      }
      EtwWrite(PpmEtwHandle, &PPM_ETW_COORDINATED_IDLE_RUNDOWN, 0LL, v2, UserData);
      ExFreePoolWithTag(UserData, 0x654D5050u);
    }
  }
}
