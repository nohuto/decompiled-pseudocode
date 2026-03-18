/*
 * XREFs of ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1C007DE50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0p @ 0x1C0026308 (McTemplateK0p.c)
 *     McTemplateK0ppp @ 0x1C0026C5C (McTemplateK0ppp.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C00810E0 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     ?VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0081200 (-VidMmCompleteAsyncUnpin@@YAXPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1C0081B44 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_MULTI_ALLOC@@PEAI@Z.c)
 */

void __fastcall VidMmProcessAsyncOperation(void *a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  const GUID *v4; // r8
  VIDMM_GLOBAL *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  const GUID *v8; // r8
  __int64 v9; // rbp
  struct VIDMM_ALLOC *v10; // rdi
  VIDMM_GLOBAL *v11; // rcx
  unsigned int v12; // r8d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // rax
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF
  struct VIDMM_ALLOC *v21; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a1 + 8) - 1;
  if ( v2 )
  {
    v5 = (VIDMM_GLOBAL *)(unsigned int)(v2 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        v9 = *((_QWORD *)a1 + 5);
        v10 = *(struct VIDMM_ALLOC **)(*((_QWORD *)a1 + 6) + 24LL);
        v21 = v10;
        while ( 1 )
        {
          v19 = 0;
          if ( !VIDMM_GLOBAL::IsAllocationInPresentQueue(v5, v10, &v19) )
            break;
          if ( v19 > 1 )
            break;
          v13 = VIDMM_GLOBAL::WaitOnAllocationPresentQueue(v11, v10, v12);
          v16 = v13;
          if ( v13 >= 0 )
            break;
          v18 = WdLogNewEntry5_WdWarning(v15, v14);
          *(_QWORD *)(v18 + 24) = v16;
          WdLogEvent5_WdWarning(v18);
          Interval.QuadPart = -150LL;
          KeDelayExecutionThread(0, 0, &Interval);
        }
        VidMmCompleteAsyncUnpin((struct VIDMM_GLOBAL *)v9, &v21);
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v9 + 41152, 0LL);
        *(_QWORD *)(v9 + 41160) = KeGetCurrentThread();
        if ( (*(_DWORD *)(v9 + 41192))-- == 1 )
          KeSetEvent((PRKEVENT)(v9 + 41168), 0, 0);
        *(_QWORD *)(v9 + 41160) = 0LL;
        ExReleasePushLockExclusiveEx(v9 + 41152, 0LL);
        KeLeaveCriticalRegion();
        DxgkUnreferenceDxgResource(*(struct DXGRESOURCE **)(*((_QWORD *)a1 + 6) + 40LL));
        DxgkUnreferenceDxgAllocation(*((struct DXGALLOCATION **)a1 + 6));
      }
    }
    else
    {
      if ( *((_QWORD *)a1 + 5) )
        MmUnmapViewOfSection(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 7));
      else
        MmUnmapViewInSystemSpace(*((PVOID *)a1 + 7));
      v6 = (void *)*((_QWORD *)a1 + 5);
      if ( v6 )
        ObfDereferenceObject(v6);
      ObfDereferenceObject(*((PVOID *)a1 + 6));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppp(v7, &EndVidMmUnmapViewAsync, v8, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6), *((_QWORD *)a1 + 7));
    }
  }
  else
  {
    ObfDereferenceObject(*((PVOID *)a1 + 5));
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0p(v3, &EndVidMmDereferenceObjectAsync, v4, *((_QWORD *)a1 + 5));
  }
  operator delete(a1);
  _InterlockedDecrement(&g_VidMmAsyncOpPendingCount);
}
