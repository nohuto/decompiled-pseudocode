/*
 * XREFs of ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x1C0224324
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0133090 (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned int a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int64 *a7)
{
  int v8; // ebp
  int v9; // r14d
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGKVMB_COMMAND_BASE *v16; // rdi
  __int64 v17; // rax
  _DWORD *v20; // r10
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  struct _MDL *v29; // [rsp+28h] [rbp-60h]
  unsigned int v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-50h] BYREF

  v8 = a3;
  v9 = a2;
  if ( a5 - 1 > 0x7FFF )
  {
    v28 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v28 + 24) = 7635LL;
    WdLogEvent5_WdError(v28);
    return 0LL;
  }
  else
  {
    v11 = (char *)operator new(4 * a5 + 36, 0x4B677844u, 1, (POOL_TYPE)512);
    v16 = (struct DXGKVMB_COMMAND_BASE *)v11;
    if ( v11 )
    {
      *(_QWORD *)v11 = 0LL;
      *((_DWORD *)v11 + 3) = 0;
      *((_DWORD *)v11 + 4) = 12;
      *((_DWORD *)v11 + 2) = v9;
      *((struct D3DDDI_EVICT_FLAGS *)v11 + 7) = a4;
      *((_DWORD *)v11 + 6) = v8;
      *((_DWORD *)v11 + 8) = a5;
      if ( a5 )
      {
        v20 = v11 + 36;
        v21 = a5;
        do
        {
          v22 = *(_QWORD *)a6;
          a6 = (const struct DXGALLOCATIONREFERENCE *)((char *)a6 + 8);
          *v20++ = *(_DWORD *)(v22 + 96);
          --v21;
        }
        while ( v21 );
      }
      v30 = 8;
      v25 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, v16, 4 * a5 + 36, &v31, &v30, v29);
      if ( v25 < 0 || (v25 = -1073741823, v30 < 8) )
      {
        v27 = WdLogNewEntry5_WdError(v24, v23, v26);
        *(_QWORD *)(v27 + 24) = v25;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        v25 = 0;
        *a7 = v31;
      }
      operator delete[](v16);
      return (unsigned int)v25;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 7642LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
}
