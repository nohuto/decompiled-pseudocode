/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C01F352C
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6380 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        UINT a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        unsigned int Size,
        void *Src)
{
  __int64 v13; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // ebp
  struct _MDL *v20; // [rsp+28h] [rbp-80h]
  unsigned int v21; // [rsp+30h] [rbp-78h] BYREF
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  int v23; // [rsp+40h] [rbp-68h]
  int v24; // [rsp+44h] [rbp-64h]
  int v25; // [rsp+48h] [rbp-60h]

  if ( Size > 0x20000 )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 5552LL;
    WdLogEvent5_WdError(v13);
    return 0LL;
  }
  v22 = 0LL;
  v23 = 0;
  v15 = (struct _D3DDDI_CREATECONTEXTFLAGS *)&v22;
  v24 = 0;
  v16 = (Size + 62) & 0xFFFFFFF8;
  v25 = 6;
  if ( Size )
  {
    v15 = (struct _D3DDDI_CREATECONTEXTFLAGS *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    if ( !v15 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 5565LL;
      WdLogEvent5_WdLowResource(v18);
      return 0LL;
    }
  }
  *(_QWORD *)&v15->0 = 0LL;
  v15[3].Value = 0;
  v15[6].Value = 0;
  v15[9].Value = a5;
  v15[10].0 = a6.0;
  v15[11].Value = a7;
  v15[4].Value = 6;
  v15[2].Value = a2;
  v15[7].Value = a3;
  v15[8].Value = a4;
  v15[12].Value = Size;
  if ( Size )
    memmove(&v15[13], Src, Size);
  v21 = (Size + 62) & 0xFFFFFFF8;
  Value = 0;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v15, v16, v15, &v21, v20) >= 0
    && v21 >= v16 )
  {
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v15[6].Value;
  }
  if ( Size )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 7) + 1712LL) >= 0x7008u )
      memmove(Src, &v15[13], Size);
    operator delete[](v15);
  }
  return *(unsigned int *)&Value;
}
