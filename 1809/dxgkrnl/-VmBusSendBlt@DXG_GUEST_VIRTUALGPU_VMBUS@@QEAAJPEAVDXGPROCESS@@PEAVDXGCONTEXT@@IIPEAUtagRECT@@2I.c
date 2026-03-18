/*
 * XREFs of ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C01F27D0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0223420 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        int a4,
        unsigned int a5,
        struct tagRECT *a6,
        struct tagRECT *a7,
        unsigned int a8,
        const struct tagRECT *Src,
        size_t Size,
        unsigned __int8 *a11)
{
  unsigned int v13; // esi
  __int64 v14; // rax
  char *v16; // rax
  __int64 v17; // rcx
  struct _MDL *v18; // r9
  struct DXGKVMB_COMMAND_BASE *v19; // rbx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax

  v13 = 16 * a8;
  if ( a8 > 0x2000 )
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = 7151LL;
LABEL_3:
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( (unsigned int)Size > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = 7156LL;
    goto LABEL_3;
  }
  v16 = (char *)operator new(v13 + (_DWORD)Size + 80, 0x4B677844u, 1, (POOL_TYPE)512);
  v19 = (struct DXGKVMB_COMMAND_BASE *)v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = 0LL;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 4) = 38;
    *((_DWORD *)v16 + 2) = *((_DWORD *)a2 + 98);
    *((_DWORD *)v16 + 6) = *(_DWORD *)(*((_QWORD *)a3 + 2) + 336LL);
    *((_DWORD *)v16 + 7) = *((_DWORD *)a3 + 7);
    *((_DWORD *)v16 + 8) = a4;
    *((_DWORD *)v16 + 9) = a5;
    *(struct tagRECT *)(v16 + 40) = *a6;
    *(struct tagRECT *)(v16 + 56) = *a7;
    *((_DWORD *)v16 + 18) = a8;
    *((_DWORD *)v16 + 19) = Size;
    if ( a8 )
      memmove(v16 + 80, Src, v13);
    if ( (_DWORD)Size )
    {
      if ( &a11[(unsigned int)Size] < a11 || (unsigned __int64)&a11[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v19 + v13 + 80, a11, (unsigned int)Size);
    }
    v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, v19, v13 + Size + 80, v18);
    v23 = v21;
    if ( v21 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v22);
      *(_QWORD *)(v24 + 24) = v23;
      WdLogEvent5_WdError(v24);
    }
    operator delete[](v19);
    return (unsigned int)v23;
  }
  else
  {
    v20 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v20 + 24) = 7163LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
}
