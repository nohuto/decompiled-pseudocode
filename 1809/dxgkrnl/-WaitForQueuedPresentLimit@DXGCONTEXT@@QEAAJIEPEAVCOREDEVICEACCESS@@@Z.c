/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA9E0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0111EA0 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0115D80 (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
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
  struct _KTHREAD **v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax

  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)this + 2) + 104LL));
  if ( *((_BYTE *)this + 433) )
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
    goto LABEL_19;
  if ( *((_BYTE *)a4 + 80) )
    COREACCESS::Release((struct _KTHREAD ***)a4 + 5);
  if ( !*((_BYTE *)a4 + 32) )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9);
    v14[3] = 275LL;
    v14[4] = 4LL;
    v14[5] = (char *)a4 + 8;
    v14[6] = 0LL;
    v14[7] = 0LL;
    WdLogEvent5_WdCriticalError(v14);
  }
  v13 = (struct _KTHREAD **)*((_QWORD *)a4 + 3);
  *((_BYTE *)a4 + 32) = 0;
  if ( KeGetCurrentThread() != v13[20] )
    DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v13);
  LOBYTE(v11) = 1;
  v10 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 520LL)
                                                                   + 8LL)
                                                       + 184LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
          a2,
          v11);
  COREACCESS::AcquireShared((DXGADAPTER **)a4 + 1);
  v8 = *(unsigned int *)(*((_QWORD *)a4 + 9) + 464LL);
  if ( (_DWORD)v8 == 1 )
  {
    if ( !*((_BYTE *)a4 + 80)
      || (COREACCESS::AcquireShared((DXGADAPTER **)a4 + 5),
          v8 = *(unsigned int *)(*((_QWORD *)a4 + 7) + 176LL),
          (_DWORD)v8 == 1) )
    {
LABEL_3:
      if ( (int)v10 >= 0 )
        return (unsigned int)v10;
LABEL_19:
      v18 = WdLogNewEntry5_WdEvent(v9, v8);
      *(_QWORD *)(v18 + 24) = (int)v10;
      *(_QWORD *)(v18 + 32) = this;
      WdLogEvent5_WdEvent(v18);
      if ( (_DWORD)v10 != -1071775486 && (_DWORD)v10 != -1073741130 && (_DWORD)v10 != -1071775232 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19);
        *(_QWORD *)(v20 + 24) = 2929LL;
        WdLogEvent5_WdAssertion(v20);
      }
      return (unsigned int)v10;
    }
    COREACCESS::Release((struct _KTHREAD ***)a4 + 5);
  }
  COREACCESS::Release((struct _KTHREAD ***)a4 + 1);
  v17 = WdLogNewEntry5_WdEvent(v16, v15);
  *(_QWORD *)(v17 + 24) = v10;
  WdLogEvent5_WdEvent(v17);
  COREDEVICEACCESS::AcquireSharedUncheck(a4);
  return 3221226166LL;
}
