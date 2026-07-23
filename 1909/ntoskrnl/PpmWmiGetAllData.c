/*
 * XREFs of PpmWmiGetAllData @ 0x1408B32EC
 * Callers:
 *     PpmWmiDispatch @ 0x140780040 (PpmWmiDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PpmPerfGetCurrentState @ 0x140132524 (PpmPerfGetCurrentState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v6; // r10
  __int64 v10; // r9
  __int64 v12; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char v14; // r12
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ebp
  int v22; // ebx
  _DWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rbx
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 result; // rax

  v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
  v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  v12 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( !v12 )
    v12 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  if ( v12 )
  {
    v14 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v14 = 1;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
    v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
    v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  }
  v15 = a1[46];
  v16 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v16 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v16 || !v15 )
  {
    v18 = v10 - *a2;
    if ( !v18 )
      v18 = v6 - a2[1];
    if ( v18 || !*a1 )
    {
      v19 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
        v19 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v19 || !v15 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_48;
      }
      v17 = 12;
    }
    else
    {
      v17 = 32 * *(_DWORD *)(*a1 + 32LL) + 56;
    }
  }
  else
  {
    v17 = 80;
  }
  v20 = a6 != 0 ? 72 : 64;
  v21 = v20 + v17;
  if ( a3 >= v20 + v17 )
  {
    v23 = (_DWORD *)(a4 + v20);
    *(_DWORD *)a4 = v21;
    if ( a6 )
    {
      v24 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v24;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v17;
    memset(v23, 0, v17);
    v25 = *a2;
    v26 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v26 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v26 || !v15 )
    {
      v27 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v25;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v25 )
        v27 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v27 || !*a1 )
      {
        v33 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v33 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v33 && v15 )
          PpmPerfGetCurrentState((__int64)(a1 - 2976), v23, 0LL, v23 + 2, v23 + 1, 0LL);
      }
      else
      {
        v23[1] = *(_DWORD *)(*a1 + 32LL);
        v23[2] = *(_DWORD *)(*a1 + 16LL);
        v23[3] = *(_DWORD *)(*a1 + 24LL);
        *((_QWORD *)v23 + 2) = *(a1 - 2951);
        v28 = *a1;
        v29 = *(_DWORD *)(*a1 + 32LL);
        if ( v29 )
        {
          v30 = 0LL;
          v31 = v23 + 8;
          v32 = v29;
          do
          {
            v30 += 248LL;
            *(v31 - 2) = *(_DWORD *)(v30 + *a1 + 752) / 0xAu;
            *(v31 - 1) = *(_DWORD *)(v30 + *a1 + 760);
            *v31 = *(_DWORD *)(v28 + 532);
            v31 += 8;
            *((_BYTE *)v31 - 28) = *(_BYTE *)(v28 + 536);
            *((_BYTE *)v31 - 27) = *(_BYTE *)(v28 + 537);
            *((_BYTE *)v31 - 26) = *(_BYTE *)(v30 + *a1 + 808);
            *((_QWORD *)v31 - 3) = *(unsigned int *)(v30 + *a1 + 764);
            *(v31 - 4) = 1;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else
    {
      *v23 = 0;
      v23[1] = *(_DWORD *)(v15 + 308);
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_BYTE *)v23 + 28) = 100;
      *((_BYTE *)v23 + 29) = *(_BYTE *)(v15 + 345);
      v23[8] = HIDWORD(PpmCurrentProfile[341 * dword_140443A2C + 7]);
      *((_QWORD *)v23 + 5) = *(_QWORD *)(v15 + 32);
      v23[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v22 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v22 = 0;
LABEL_48:
  if ( v14 )
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  result = (unsigned int)v22;
  if ( v22 < 0 )
    v21 = 0;
  *a5 = v21;
  return result;
}
