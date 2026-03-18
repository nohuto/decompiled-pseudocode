/*
 * XREFs of ?Initialize@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x1C0158C58
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0158A90 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0283430 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGET::Initialize(DMMVIDEOPRESENTTARGET *this)
{
  PVOID v2; // rax
  __int64 v3; // rcx
  PIO_WORKITEM WorkItem; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = operator new(0xB0uLL, 0x4E506456u, (POOL_TYPE)512);
  *((_QWORD *)this + 65) = v2;
  if ( !v2 )
    goto LABEL_8;
  memset(v2, 0, 0xB0uLL);
  *(_QWORD *)(*((_QWORD *)this + 65) + 16LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)this + 65) + 24LL) = 14;
  *(_DWORD *)(*((_QWORD *)this + 65) + 168LL) = 0;
  KeInitializeTimer((PKTIMER)(*((_QWORD *)this + 65) + 32LL));
  KeInitializeDpc(
    (PRKDPC)(*((_QWORD *)this + 65) + 96LL),
    (PKDEFERRED_ROUTINE)DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutDpc,
    *((PVOID *)this + 65));
  WorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
  v3 = *((_QWORD *)this + 65);
  *(_QWORD *)(v3 + 160) = WorkItem;
  if ( *(_QWORD *)(*((_QWORD *)this + 65) + 160LL) )
  {
    v5 = *((_QWORD *)this + 5);
    if ( !v5 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v11);
      v5 = *((_QWORD *)this + 5);
    }
    v6 = *(_QWORD *)(v5 + 88);
    v7 = *(_QWORD *)(v6 + 8);
    if ( !v7 )
    {
      v12 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v12);
      v7 = *(_QWORD *)(v6 + 8);
    }
    v8 = *(_QWORD *)(v7 + 16);
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24));
    *(_QWORD *)(*((_QWORD *)this + 65) + 8LL) = this;
    **((_QWORD **)this + 65) = v8;
    return 0LL;
  }
  else
  {
LABEL_8:
    v10 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v10 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v10 + 32) = -1073741670LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225626LL;
  }
}
