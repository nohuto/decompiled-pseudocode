/*
 * XREFs of ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01375C0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C0111970 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000BC50 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0046FFC (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall UpdatePostComposition(__int64 a1, __int64 a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  char v5; // di
  __int64 v7; // r12
  char v9; // bp
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD **v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  struct _KTHREAD **v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v41; // [rsp+20h] [rbp-38h] BYREF
  char v42; // [rsp+28h] [rbp-30h]

  v5 = 0;
  v7 = (unsigned int)a1;
  v42 = 0;
  v9 = a2;
  v41 = (struct _KTHREAD **)((char *)a5 + 384);
  if ( a5 == (struct ADAPTER_DISPLAY *)-384LL )
  {
    v26 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v26 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v41[2] == CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(CurrentThread, a2);
    *(_QWORD *)(v27 + 24) = 666LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( v42 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2);
    v28[5] = &v41;
    v28[3] = 275LL;
    v28[4] = 4LL;
    v28[6] = 0LL;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  v11 = v41;
  KeEnterCriticalRegion();
  if ( v11[2] == KeGetCurrentThread() )
  {
    v29 = *((_DWORD *)v11 + 6);
    if ( v29 <= 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v30 + 24) = 558LL;
      WdLogEvent5_WdAssertion(v30);
      v29 = *((_DWORD *)v11 + 6);
    }
    v17 = v29 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v25 = *((_DWORD *)v11 + 7);
        if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v25);
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 1);
      ExAcquirePushLockExclusiveEx(v11, 0LL);
    }
    if ( v11[2] )
    {
      v31 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v31 + 24) = 582LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( *((_DWORD *)v11 + 6) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v15, v14);
      *(_QWORD *)(v32 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v11[2] = KeGetCurrentThread();
    v17 = 1;
  }
  *((_DWORD *)v11 + 6) = v17;
  v18 = *((_QWORD *)a5 + 14);
  v19 = 3968 * v7;
  v42 = 1;
  v20 = 3968 * v7 + v18;
  v21 = *(_BYTE *)(v20 + 668);
  if ( v9 )
  {
    if ( v21 && *(_DWORD *)(v20 + 672) == a3 && *(_DWORD *)(v20 + 676) == a4 )
      goto LABEL_16;
    *(_DWORD *)(v20 + 672) = a3;
    *(_DWORD *)(v19 + *((_QWORD *)a5 + 14) + 676) = a4;
    *(_BYTE *)(v19 + *((_QWORD *)a5 + 14) + 668) = v9;
  }
  else
  {
    if ( !v21 )
      goto LABEL_16;
    *(_DWORD *)(v20 + 672) = 0;
    *(_DWORD *)(v19 + *((_QWORD *)a5 + 14) + 676) = 0;
    *(_BYTE *)(v19 + *((_QWORD *)a5 + 14) + 668) = 0;
  }
  v5 = 1;
  if ( !v42 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v33[5] = &v41;
    v33[3] = 275LL;
    v33[4] = 4LL;
    v33[6] = 0LL;
    v33[7] = 0LL;
    WdLogEvent5_WdCriticalError(v33);
  }
LABEL_16:
  v22 = v41;
  v42 = 0;
  if ( v41[2] != KeGetCurrentThread() )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v19);
    v34[3] = 275LL;
    v34[4] = 4LL;
    v34[5] = v22;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  v23 = *((_DWORD *)v22 + 6);
  if ( v23 <= 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v35 + 24) = 602LL;
    WdLogEvent5_WdAssertion(v35);
    v23 = *((_DWORD *)v22 + 6);
  }
  v24 = v23 - 1;
  *((_DWORD *)v22 + 6) = v24;
  if ( !v24 )
  {
    v22[2] = 0LL;
    ExReleasePushLockExclusiveEx(v22, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( v5 )
  {
    v36 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
    v37 = v36;
    if ( v36 )
    {
      v36[1] = 0LL;
      v36[2] = 0LL;
      *v36 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v36, *((struct DXGADAPTER **)a5 + 2));
      *((_DWORD *)v37 + 4) = v7;
      Current = DXGPROCESS::GetCurrent(v39, v38);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 9) + 88LL),
        (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        (struct _LIST_ENTRY *)v37);
    }
  }
  if ( v42 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v41);
}
