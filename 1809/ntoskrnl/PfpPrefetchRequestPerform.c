/*
 * XREFs of PfpPrefetchRequestPerform @ 0x14065CB5C
 * Callers:
 *     PfpPrefetchRequest @ 0x1406A2F7C (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x1400DE720 (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x14056EE6C (PfpScenCtxPrefetchAbortSet.c)
 *     PfpPrefetchVolumesCleanup @ 0x14065CAB0 (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedDeref @ 0x14065DBC4 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedStart @ 0x14065DF78 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x14065E0C4 (PfpPrefetchSharedCleanup.c)
 *     PfpVolumePrefetchMetadata @ 0x14065E1C4 (PfpVolumePrefetchMetadata.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 *     PfpPrefetchFilesTrickle @ 0x140663144 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1406B90C4 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpPrefetchSharedInitialize @ 0x1406CB8B0 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x1408655EC (PfpPrefetchPrivatePages.c)
 */

__int64 __fastcall PfpPrefetchRequestPerform(__int64 a1)
{
  char PreviousMode; // r12
  PVOID PoolWithTag; // rax
  int v4; // ebx
  int v5; // r15d
  unsigned int v6; // eax
  unsigned int v7; // ebx
  PVOID v8; // rax
  unsigned int i; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  bool v13; // cf
  int v14; // ecx
  unsigned int v15; // r14d
  int v16; // eax
  bool v17; // zf
  struct _KEVENT *p_Event; // r8
  int v20; // eax
  unsigned int j; // edi
  _QWORD *v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rdx
  unsigned int k; // edi
  __int64 v28; // rcx
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v30[28]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v30, 0, sizeof(v30));
  v30[0] = a1;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v30[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  PfpPrefetchSharedInitialize(PoolWithTag);
  *(_QWORD *)(v30[5] + 24LL) = v30;
  if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v30[5] + 60LL) = 60000;
    *(_DWORD *)(v30[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v30[5] + 60LL) = 250;
    *(_DWORD *)(v30[5] + 56LL) = 15;
  }
  v4 = PfpPrefetchSharedStart(v30[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v30[0] + 81LL);
    if ( *(_BYTE *)(v30[0] + 81LL) )
    {
      _InterlockedAdd(&dword_1404D8618, 1u);
      p_Event = &Event;
      if ( *(_QWORD *)(v30[0] + 72LL) )
        p_Event = *(struct _KEVENT **)(v30[0] + 72LL);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_14043D160, v5, (__int64)p_Event, 0, 0);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v30[0] + 72LL) )
        *(_QWORD *)(v30[0] + 72LL) = &Event;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x48566650u);
      v30[2] = v8;
      if ( !v8 )
        goto LABEL_41;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v10 = (unsigned __int64)i << 6;
        v11 = v10 + v30[2];
        memset((void *)(v10 + v30[2]), 0, 0x20uLL);
        *(_QWORD *)(v11 + 24) |= 0x200000000uLL;
        v12 = v30[2];
        memset((void *)(v10 + v30[2] + 32LL), 0, 0x20uLL);
        *(_QWORD *)(v12 + v10 + 56) |= 0x200000000uLL;
      }
    }
    v13 = (*(_DWORD *)(v30[0] + 80LL) & 4) != 0;
    LODWORD(v30[4]) = v13 ? 16 : 768;
    v30[3] = ExAllocatePoolWithTag(PagedPool, (-(__int64)v13 & 0xFFFFFFFFFFFFE880uLL) + 6160, 0x504D6650u);
    if ( v30[3] )
    {
      if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 || (v20 = *(_DWORD *)(v30[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) )
        {
          v14 = *(_DWORD *)(a1 + 28);
          if ( (_WORD)v14 )
            *(_WORD *)(a1 + 30) = v14 - 1;
        }
        if ( *(_DWORD *)(a1 + 20) )
        {
          v23 = PfpPrefetchPrivatePages(v30);
          v4 = v23;
          if ( v23 == -1073741248 || v23 == -1073741670 || v23 == -1073741801 )
            goto LABEL_26;
        }
        v15 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v30[5],
                        v30[2] + ((unsigned __int64)v15 << 6),
                        *(_QWORD *)(a1 + 32) + 40LL * v15) >= 0 )
            {
              v4 = PfpVolumePrefetchMetadata(v30, v15);
              if ( v4 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v15 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v30[0] + 80LL) & 4) != 0 )
        {
          v16 = PfpPrefetchFilesTrickle(v30);
          v17 = v16 == -1073741248;
LABEL_22:
          v4 = v16;
          if ( !v17 && v16 != -1073741670 && v16 != -1073741801 )
            v4 = 0;
          goto LABEL_26;
        }
        v24 = PfpPrefetchFiles(v30, 0LL);
        v4 = v24;
        if ( v24 != -1073741248 && v24 != -1073741670 && v24 != -1073741801 )
        {
          if ( !PfpCheckPrefetchAbort(v30) )
          {
            LOBYTE(v25) = 1;
            v16 = PfpPrefetchFiles(v30, v25);
            v17 = v16 == -1073741248;
            goto LABEL_22;
          }
          v4 = -1073741248;
        }
LABEL_26:
        if ( v5 )
        {
          _InterlockedDecrement(&dword_1404D8618);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_14043D160, v5, 0LL, 1, 0);
        }
        goto LABEL_28;
      }
      v30[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v20), 0x68466650u);
      if ( v30[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v30[0] + 12LL); ++j )
        {
          v22 = (_QWORD *)(v30[1] + 32LL * j);
          memset(v22, 0, 0x20uLL);
          v22[3] |= 0x200000000uLL;
        }
        goto LABEL_12;
      }
    }
LABEL_41:
    v4 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v30[1] )
  {
    v26 = v30[0];
    for ( k = 0; k < *(_DWORD *)(v26 + 12); ++k )
    {
      v28 = v30[1] + 32LL * k;
      if ( (*(_QWORD *)(v28 + 24) & 0x400000000LL) != 0 )
      {
        PfpOpenHandleClose(v28, v30[5]);
        v26 = v30[0];
      }
    }
    ExFreePoolWithTag((PVOID)v30[1], 0);
  }
  PfpPrefetchVolumesCleanup(v30);
  if ( v30[3] )
    ExFreePoolWithTag((PVOID)v30[3], 0);
  if ( v30[5] )
  {
    PfpPrefetchSharedCleanup();
    PfpPrefetchSharedDeref(v30[5]);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
