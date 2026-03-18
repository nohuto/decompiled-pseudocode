/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromGpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBIPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEB_K_KIPEAVDXGHWQUEUE@@@Z @ 0x1C01F83B0
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0234C88 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromGpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct _KTHREAD **a2,
        struct DXGCONTEXT *a3,
        const unsigned int *a4,
        struct DXGSYNCOBJECT **a5,
        struct DXGDEVICESYNCOBJECT **a6,
        const unsigned __int64 *Src,
        unsigned __int64 a8,
        unsigned int a9,
        struct DXGHWQUEUE *a10)
{
  struct DXGHWQUEUE *v10; // rbp
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rax
  unsigned int *v21; // rdi
  DXGSYNCOBJECT **v22; // r14
  signed __int64 v23; // rdx
  signed __int64 v24; // r8
  __int64 v25; // rbp
  char *v26; // r13
  unsigned int HostHandle; // eax
  int v28; // eax
  struct _MDL *v29; // r9
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-68h]
  unsigned int v35; // [rsp+24h] [rbp-64h]
  _BYTE v36[88]; // [rsp+30h] [rbp-58h] BYREF
  struct DXGDEVICESYNCOBJECT **v39; // [rsp+B8h] [rbp+30h]

  v10 = a10;
  if ( !a10 )
  {
    if ( a3 )
      goto LABEL_8;
LABEL_7:
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 6188LL;
    goto LABEL_31;
  }
  if ( a3 )
    goto LABEL_7;
  if ( !a4 || !Src )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 6196LL;
LABEL_31:
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
LABEL_8:
  v14 = a9;
  if ( a9 - 1 > 0x1FFFF )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 6203LL;
    goto LABEL_31;
  }
  v15 = 8 * a9 + 40;
  v16 = v15 + 4 * a9;
  v35 = v16;
  if ( v16 > 0x20000 )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 6211LL;
    goto LABEL_31;
  }
  v18 = operator new(v16, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v18 )
  {
    v21 = (unsigned int *)((char *)v18 + v15);
    *v18 = 0LL;
    v18[1] = 0LL;
    *((_DWORD *)v18 + 4) = 25;
    if ( a10 )
    {
      memmove(v21, a4, 4 * a9);
      memmove(v18 + 5, Src, 8 * a9);
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v36, a2);
      if ( a9 )
      {
        v22 = a5;
        v23 = (char *)v18 - (char *)a5;
        v24 = (char *)a6 - (char *)a5;
        v39 = (struct DXGDEVICESYNCOBJECT **)((char *)a6 - (char *)a5);
        v25 = a9;
        v26 = (char *)((char *)a4 - (char *)v21);
        do
        {
          v34 = *((_DWORD *)*v22 + 42);
          if ( (unsigned int)(v34 - 5) <= 1 )
          {
            *v21 = (*(_DWORD **)((char *)v22 + v24))[11];
            *(DXGSYNCOBJECT **)((char *)v22 + v23 + 40) = *(DXGSYNCOBJECT **)((char *)v22 + (char *)Src - (char *)a5);
          }
          else
          {
            HostHandle = DXGSYNCOBJECT::GetHostHandle(*v22, *(_DWORD *)&v26[(_QWORD)v21], v24);
            v23 = (char *)v18 - (char *)a5;
            v24 = (signed __int64)v39;
            *v21 = HostHandle;
            if ( v34 == 3 )
            {
              v18[5] = a8;
              *((_BYTE *)v18 + 32) = 1;
            }
          }
          ++v21;
          ++v22;
          --v25;
        }
        while ( v25 );
        v14 = a9;
        v10 = a10;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
    }
    if ( v10 )
      v28 = *((_DWORD *)v10 + 7);
    else
      v28 = *((_DWORD *)a3 + 7);
    *((_DWORD *)v18 + 6) = v28;
    *((_DWORD *)v18 + 2) = DXGPROCESS::GetHostProcess((DXGPROCESS *)a2);
    *((_DWORD *)v18 + 7) = v14;
    v30 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            this,
            (struct DXGKVMB_COMMAND_BASE *)v18,
            (const GUID *)v35,
            v29);
    v32 = v30;
    if ( v30 < 0 )
    {
      v33 = WdLogNewEntry5_WdError(v31);
      *(_QWORD *)(v33 + 24) = v32;
      WdLogEvent5_WdError(v33);
    }
    operator delete[](v18);
    return (unsigned int)v32;
  }
  else
  {
    v19 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v19 + 24) = 6218LL;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
}
