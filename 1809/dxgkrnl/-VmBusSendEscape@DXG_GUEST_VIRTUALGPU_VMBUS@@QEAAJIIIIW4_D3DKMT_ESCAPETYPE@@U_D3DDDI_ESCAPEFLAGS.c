/*
 * XREFs of ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01F4430
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0206C1C (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        size_t Size,
        unsigned __int8 *Src)
{
  size_t v9; // rsi
  __int64 v14; // rax
  unsigned int v16; // edi
  struct _D3DDDI_ESCAPEFLAGS *v17; // rax
  __int64 v18; // rcx
  struct _D3DDDI_ESCAPEFLAGS *v19; // rbx
  __int64 v20; // rax
  unsigned __int8 *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // r8
  __int64 v26; // rax
  struct _MDL *v27; // [rsp+28h] [rbp-20h]

  v9 = (unsigned int)Size;
  if ( (unsigned int)Size > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = 7776LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v16 = 56;
  LODWORD(Size) = (Size + 7) & 0xFFFFFFF8;
  if ( (_DWORD)Size )
    v16 = ((v9 + 7) & 0xFFFFFFF8) + 55;
  v17 = (struct _D3DDDI_ESCAPEFLAGS *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
  v19 = v17;
  if ( !v17 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v20 + 24) = 7784LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  *(_QWORD *)&v17->0 = 0LL;
  v17[3].Value = 0;
  v21 = Src;
  v17[4].Value = 13;
  v17[2].Value = a2;
  v17[6].Value = a3;
  v17[9].0 = a7.0;
  v17[7].Value = a4;
  v17[11].Value = a5;
  v17[8].Value = a6;
  v17[10].Value = v9;
  memmove(&v17[12], v21, v9);
  if ( (_DWORD)v9 )
  {
    v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            this,
            (struct DXGKVMB_COMMAND_BASE *)v19,
            v16,
            &v19[12],
            (unsigned int *)&Size,
            v27);
    if ( v24 < 0 )
    {
LABEL_14:
      v26 = WdLogNewEntry5_WdWarning(v23, v22, v25);
      *(_QWORD *)(v26 + 24) = v24;
      WdLogEvent5_WdWarning(v26);
      goto LABEL_15;
    }
    if ( (unsigned int)Size < (unsigned int)v9 )
      v24 = -1073741823;
    else
      memmove(Src, &v19[12], v9);
  }
  else
  {
    v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v19, v16, 0LL, 0LL, v27);
  }
  if ( v24 < 0 )
    goto LABEL_14;
LABEL_15:
  operator delete[](v19);
  return (unsigned int)v24;
}
