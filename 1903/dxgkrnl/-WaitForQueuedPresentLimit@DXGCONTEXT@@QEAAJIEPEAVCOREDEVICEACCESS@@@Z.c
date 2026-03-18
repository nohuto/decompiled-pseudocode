/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0101DA0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C010B3C0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0118860 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0107000 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  char *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  const GUID *v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  if ( *((_BYTE *)this + 449) )
    return 0LL;
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                           + 520LL)
                                                                               + 8LL)
                                                                   + 184LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
                   a2,
                   0LL);
  if ( (_DWORD)v10 != -1071775486 )
    goto LABEL_3;
  if ( !a3 )
    goto LABEL_28;
  if ( *((_BYTE *)a4 + 144) )
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  v13 = (char *)a4 + 8;
  if ( !*((_BYTE *)a4 + 32) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
    v20[3] = 275LL;
    v20[4] = 4LL;
    v20[5] = v13;
    v20[6] = 0LL;
    v20[7] = 0LL;
    WdLogEvent5_WdCriticalError(v20);
  }
  v14 = *((_QWORD *)a4 + 3);
  *((_BYTE *)a4 + 32) = 0;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v14 + 160) )
    DXGADAPTER::ReleaseCoreResource(v14, *((unsigned int *)a4 + 9), *((_QWORD *)a4 + 5));
  *((_QWORD *)a4 + 5) = 0LL;
  LOBYTE(v11) = 1;
  *((_DWORD *)a4 + 9) = -1;
  v10 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 520LL)
                                                                   + 8LL)
                                                       + 184LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          a2,
          v11);
  if ( *((_BYTE *)a4 + 32) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
    v21[3] = 275LL;
    v21[4] = 4LL;
    v21[5] = v13;
    v21[6] = 0LL;
    v21[7] = 0LL;
    WdLogEvent5_WdCriticalError(v21);
  }
  v17 = *((_QWORD *)a4 + 3);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v17 + 160) )
  {
    if ( !KeReadStateEvent((PRKEVENT)(v17 + 48)) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v18, &EventBlockThread, v19, 72);
      KeWaitForSingleObject((PVOID)(*((_QWORD *)a4 + 3) + 48LL), Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared(*((_QWORD *)a4 + 3), 0xFFFFFFFFLL, 0LL);
  }
  *((_QWORD *)a4 + 5) = 0LL;
  *((_DWORD *)a4 + 9) = -1;
  *((_BYTE *)a4 + 32) = 1;
  v9 = *(unsigned int *)(*((_QWORD *)a4 + 17) + 464LL);
  if ( (_DWORD)v9 == 1 )
  {
    if ( !*((_BYTE *)a4 + 144)
      || (COREACCESS::AcquireShared((__int64)a4 + 72, 0xFFFFFFFF, 0LL), *(_DWORD *)(*((_QWORD *)a4 + 11) + 176LL) == 1) )
    {
LABEL_3:
      if ( (int)v10 >= 0 )
        return (unsigned int)v10;
LABEL_28:
      v24 = WdLogNewEntry5_WdEvent(v9);
      *(_QWORD *)(v24 + 24) = (int)v10;
      *(_QWORD *)(v24 + 32) = this;
      WdLogEvent5_WdEvent(v24);
      if ( (_DWORD)v10 != -1071775486 && (_DWORD)v10 != -1073741130 && (_DWORD)v10 != -1071775232 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v25);
        *(_QWORD *)(v27 + 24) = 3084LL;
        WdLogEvent5_WdAssertion(v27);
      }
      return (unsigned int)v10;
    }
    COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 72));
  }
  COREACCESS::Release((struct COREDEVICEACCESS *)((char *)a4 + 8));
  v23 = WdLogNewEntry5_WdEvent(v22);
  *(_QWORD *)(v23 + 24) = v10;
  WdLogEvent5_WdEvent(v23);
  COREDEVICEACCESS::AcquireSharedUncheck((__int64)a4);
  return 3221226166LL;
}
