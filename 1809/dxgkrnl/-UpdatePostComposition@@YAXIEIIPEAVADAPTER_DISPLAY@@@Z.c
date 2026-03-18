/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0129D58
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FBC8C (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0001574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C00403AC (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(__int64 a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  unsigned int v8; // esi
  char v9; // r14
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const GUID *v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // dl
  struct _KTHREAD **v19; // rbx
  int v20; // eax
  int v21; // eax
  int v22; // r9d
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  struct _LIST_ENTRY *v33; // rbx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v35; // [rsp+20h] [rbp-10h] BYREF
  char v36; // [rsp+28h] [rbp-8h]
  unsigned int v37; // [rsp+60h] [rbp+30h]

  v37 = a1;
  v36 = 0;
  v8 = a1;
  v9 = 0;
  v35 = (struct _KTHREAD **)((char *)a5 + 280);
  if ( a5 == (struct ADAPTER_DISPLAY *)-280LL )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v23 + 24) = 511LL;
    WdLogEvent5_WdAssertion(v23);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v35[1] == CurrentThread )
  {
    v24 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v24 + 24) = 518LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( v36 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v25[5] = &v35;
    v25[3] = 275LL;
    v25[4] = 4LL;
    v25[6] = 0LL;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  v11 = v35;
  KeEnterCriticalRegion();
  if ( v11[1] == KeGetCurrentThread() )
  {
    v26 = *((_DWORD *)v11 + 6);
    if ( v26 <= 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v27 + 24) = 409LL;
      WdLogEvent5_WdAssertion(v27);
      v26 = *((_DWORD *)v11 + 6);
    }
    v15 = v26 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 2, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v22 = *((_DWORD *)v11 + 7);
        if ( v22 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v13, &EventBlockThread, v14, v22);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11);
      ExAcquirePushLockExclusiveEx(v11 + 2, 0LL);
    }
    if ( v11[1] )
    {
      v28 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v28 + 24) = 433LL;
      WdLogEvent5_WdAssertion(v28);
    }
    if ( *((_DWORD *)v11 + 6) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v29 + 24) = 434LL;
      WdLogEvent5_WdAssertion(v29);
    }
    v8 = v37;
    v11[1] = KeGetCurrentThread();
    v15 = 1;
  }
  *((_DWORD *)v11 + 6) = v15;
  v16 = 3760LL * v8;
  v17 = *((_QWORD *)a5 + 14);
  v36 = 1;
  v18 = *(_BYTE *)(v16 + v17 + 668);
  if ( a2 )
  {
    if ( v18 && *(_DWORD *)(v16 + v17 + 672) == a3 && *(_DWORD *)(v16 + v17 + 676) == a4 )
      goto LABEL_16;
    *(_DWORD *)(v16 + v17 + 672) = a3;
    *(_DWORD *)(v16 + *((_QWORD *)a5 + 14) + 676) = a4;
    *(_BYTE *)(v16 + *((_QWORD *)a5 + 14) + 668) = a2;
  }
  else
  {
    if ( !v18 )
      goto LABEL_16;
    *(_DWORD *)(v16 + v17 + 672) = 0;
    *(_DWORD *)(v16 + *((_QWORD *)a5 + 14) + 676) = 0;
    *(_BYTE *)(v16 + *((_QWORD *)a5 + 14) + 668) = 0;
  }
  v9 = 1;
  if ( !v36 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v30[5] = &v35;
    v30[3] = 275LL;
    v30[4] = 4LL;
    v30[6] = 0LL;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
LABEL_16:
  v19 = v35;
  v36 = 0;
  if ( v35[1] != KeGetCurrentThread() )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16);
    v31[3] = 275LL;
    v31[4] = 4LL;
    v31[5] = v19;
    v31[6] = 0LL;
    v31[7] = 0LL;
    WdLogEvent5_WdCriticalError(v31);
  }
  v20 = *((_DWORD *)v19 + 6);
  if ( v20 <= 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v32 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v32);
    v20 = *((_DWORD *)v19 + 6);
  }
  v21 = v20 - 1;
  *((_DWORD *)v19 + 6) = v21;
  if ( !v21 )
  {
    v19[1] = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 2, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v9 )
  {
    v33 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, PagedPool);
    if ( v33 )
    {
      v33->Blink = 0LL;
      v33[1].Flink = 0LL;
      v33->Flink = 0LL;
    }
    else
    {
      v33 = 0LL;
    }
    if ( v33 )
    {
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v33, *((struct DXGADAPTER **)a5 + 2));
      LODWORD(v33[1].Flink) = v8;
      Current = DXGPROCESS::GetCurrent();
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v33);
    }
  }
  if ( v36 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35);
}
