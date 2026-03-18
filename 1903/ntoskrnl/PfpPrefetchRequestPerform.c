/*
 * XREFs of PfpPrefetchRequestPerform @ 0x1406A9098
 * Callers:
 *     PfpPrefetchRequest @ 0x1406A8EA4 (PfpPrefetchRequest.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     PfpCheckPrefetchAbort @ 0x1400A214C (PfpCheckPrefetchAbort.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x14059D884 (PfpScenCtxPrefetchAbortSet.c)
 *     PfpPrefetchSharedDeref @ 0x140626208 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedStart @ 0x140626238 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x140626384 (PfpPrefetchSharedCleanup.c)
 *     PfpOpenHandleClose @ 0x140628DE8 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedInitialize @ 0x14066A144 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpVolumePrefetchMetadata @ 0x1406A9428 (PfpVolumePrefetchMetadata.c)
 *     PfpVolumeOpenAndVerify @ 0x1406A9A58 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchVolumesCleanup @ 0x1406A9DD4 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPatchOffsets @ 0x1406A9E80 (PfpPrefetchRequestPatchOffsets.c)
 *     PfpPrefetchPrivatePages @ 0x1406F707C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408A0B0C (PfpPrefetchFiles.c)
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
  unsigned int v14; // r14d
  int v15; // eax
  bool v16; // zf
  int v18; // eax
  struct _KEVENT *p_Event; // r8
  int v20; // eax
  unsigned int j; // edi
  _QWORD *v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int k; // edi
  _QWORD *v27; // rcx
  struct _KEVENT Event; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v29[28]; // [rsp+58h] [rbp-B0h] BYREF

  memset(&Event, 0, sizeof(Event));
  memset(&v29[1], 0, 0xD8uLL);
  v29[0] = a1;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v29[5] = PoolWithTag;
  if ( !PoolWithTag )
  {
    v4 = -1073741670;
    goto LABEL_28;
  }
  PfpPrefetchSharedInitialize((__int64)PoolWithTag);
  *(_QWORD *)(v29[5] + 24LL) = v29;
  if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
  {
    *(_DWORD *)(v29[5] + 60LL) = 60000;
    *(_DWORD *)(v29[5] + 56LL) = 150;
  }
  else
  {
    *(_DWORD *)(v29[5] + 60LL) = 250;
    *(_DWORD *)(v29[5] + 56LL) = 15;
  }
  v4 = PfpPrefetchSharedStart(v29[5]);
  if ( v4 >= 0 )
  {
    v5 = *(unsigned __int8 *)(v29[0] + 81LL);
    if ( *(_BYTE *)(v29[0] + 81LL) )
    {
      _InterlockedAdd(&dword_140503A18, 1u);
      p_Event = &Event;
      if ( *(_QWORD *)(v29[0] + 72LL) )
        p_Event = *(struct _KEVENT **)(v29[0] + 72LL);
      v4 = PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140467B60, v5, (__int64)p_Event, 0, 0);
      if ( v4 < 0 )
        goto LABEL_26;
      if ( !*(_QWORD *)(v29[0] + 72LL) )
        *(_QWORD *)(v29[0] + 72LL) = &Event;
    }
    v6 = *(_DWORD *)(a1 + 8) << 6;
    if ( v6 )
    {
      v7 = *(_DWORD *)(a1 + 8) << 6;
      v8 = ExAllocatePoolWithTag(PagedPool, v6, 0x48566650u);
      v29[2] = v8;
      if ( !v8 )
        goto LABEL_45;
      memset(v8, 0, v7);
      for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
      {
        v10 = (unsigned __int64)i << 6;
        v11 = v10 + v29[2];
        memset((void *)(v10 + v29[2]), 0, 0x20uLL);
        *(_QWORD *)(v11 + 24) |= 0x200000000uLL;
        v12 = v29[2];
        memset((void *)(v10 + v29[2] + 32LL), 0, 0x20uLL);
        *(_QWORD *)(v12 + v10 + 56) |= 0x200000000uLL;
      }
    }
    v13 = (*(_DWORD *)(v29[0] + 80LL) & 4) != 0;
    LODWORD(v29[4]) = v13 ? 16 : 768;
    v29[3] = ExAllocatePoolWithTag(PagedPool, (-(__int64)v13 & 0xFFFFFFFFFFFFE880uLL) + 6160, 0x504D6650u);
    if ( v29[3] )
    {
      if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 || (v20 = *(_DWORD *)(v29[0] + 12LL)) == 0 )
      {
LABEL_12:
        PfpPrefetchRequestPatchOffsets(a1);
        if ( !*(_WORD *)(a1 + 30) && *(_WORD *)(a1 + 28) )
          *(_WORD *)(a1 + 30) = *(_WORD *)(a1 + 28) - 1;
        if ( *(_DWORD *)(a1 + 20) )
        {
          v18 = PfpPrefetchPrivatePages(v29);
          v4 = v18;
          if ( v18 == -1073741248 || v18 == -1073741670 || v18 == -1073741801 )
            goto LABEL_26;
        }
        v14 = 0;
        if ( *(_DWORD *)(a1 + 8) )
        {
          do
          {
            if ( (int)PfpVolumeOpenAndVerify(
                        v29[5],
                        v29[2] + ((unsigned __int64)v14 << 6),
                        *(_QWORD *)(a1 + 32) + 40LL * v14) >= 0 )
            {
              v4 = PfpVolumePrefetchMetadata(v29, v14);
              if ( v4 == -1073741248 )
                goto LABEL_26;
            }
          }
          while ( ++v14 < *(_DWORD *)(a1 + 8) );
        }
        if ( (*(_DWORD *)(v29[0] + 80LL) & 4) != 0 )
        {
          v15 = PfpPrefetchFilesTrickle(v29);
          v16 = v15 == -1073741248;
LABEL_22:
          v4 = v15;
          if ( !v16 && v15 != -1073741670 && v15 != -1073741801 )
            v4 = 0;
          goto LABEL_26;
        }
        v23 = PfpPrefetchFiles(v29, 0LL);
        v4 = v23;
        if ( v23 != -1073741248 && v23 != -1073741670 && v23 != -1073741801 )
        {
          if ( !PfpCheckPrefetchAbort(v29) )
          {
            LOBYTE(v24) = 1;
            v15 = PfpPrefetchFiles(v29, v24);
            v16 = v15 == -1073741248;
            goto LABEL_22;
          }
          v4 = -1073741248;
        }
LABEL_26:
        if ( v5 )
        {
          _InterlockedDecrement(&dword_140503A18);
          PfpScenCtxPrefetchAbortSet((ULONG_PTR)&qword_140467B60, v5, 0LL, 1, 0);
        }
        goto LABEL_28;
      }
      v29[1] = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * v20), 0x68466650u);
      if ( v29[1] )
      {
        for ( j = 0; j < *(_DWORD *)(v29[0] + 12LL); ++j )
        {
          v22 = (_QWORD *)(v29[1] + 32LL * j);
          memset(v22, 0, 0x20uLL);
          v22[3] |= 0x200000000uLL;
        }
        goto LABEL_12;
      }
    }
LABEL_45:
    v4 = -1073741670;
    goto LABEL_26;
  }
LABEL_28:
  if ( v29[1] )
  {
    v25 = v29[0];
    for ( k = 0; k < *(_DWORD *)(v25 + 12); ++k )
    {
      v27 = (_QWORD *)(v29[1] + 32LL * k);
      if ( (v27[3] & 0x400000000LL) != 0 )
      {
        PfpOpenHandleClose(v27, v29[5]);
        v25 = v29[0];
      }
    }
    ExFreePoolWithTag((PVOID)v29[1], 0);
  }
  PfpPrefetchVolumesCleanup(v29);
  if ( v29[3] )
    ExFreePoolWithTag((PVOID)v29[3], 0);
  if ( v29[5] )
  {
    PfpPrefetchSharedCleanup(v29[5]);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v29[5]);
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v4;
}
