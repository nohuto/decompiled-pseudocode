/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C022560C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F62B0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C0219574 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C026A510 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpenSyncObject(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        unsigned int a4,
        struct DXGSYNCOBJECT *a5,
        struct DXGDEVICESYNCOBJECT *a6,
        unsigned int a7,
        unsigned int a8,
        struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS a9)
{
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  struct _MDL *v24; // [rsp+28h] [rbp-58h]
  unsigned int v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h] BYREF
  int v27; // [rsp+40h] [rbp-40h]
  int v28; // [rsp+44h] [rbp-3Ch]
  int v29; // [rsp+48h] [rbp-38h]
  int v30; // [rsp+50h] [rbp-30h]
  unsigned int v31; // [rsp+54h] [rbp-2Ch]
  unsigned int v32; // [rsp+58h] [rbp-28h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v33; // [rsp+5Ch] [rbp-24h]
  unsigned int v34[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+68h] [rbp-18h]
  unsigned __int64 v36; // [rsp+70h] [rbp-10h]

  if ( a3 )
    v11 = *((_DWORD *)a3 + 84);
  else
    v11 = 0;
  v12 = *((_DWORD *)a2 + 92);
  v26 = 0LL;
  v27 = v12;
  v31 = a7;
  v32 = a8;
  v33 = a9.0;
  v30 = v11;
  v28 = 1;
  v29 = 1002;
  v25 = 24;
  LODWORD(v15) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)&v26,
                   0x28u,
                   v34,
                   &v25,
                   v24);
  if ( (int)v15 < 0 )
    goto LABEL_12;
  LODWORD(v15) = -1073741823;
  if ( v25 >= 0x18 )
    LODWORD(v15) = v34[1];
  if ( (int)v15 < 0 )
  {
LABEL_12:
    v22 = WdLogNewEntry5_WdError(v14, v13, v16);
    *(_QWORD *)(v22 + 24) = (int)v15;
    goto LABEL_13;
  }
  if ( a6 )
  {
    v17 = v36;
    *((_DWORD *)a6 + 11) = v34[0];
    *((_QWORD *)a6 + 6) = v35;
    v18 = MapGuestFenceCpuVaToHost(v17, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
    v15 = v18;
    if ( v18 < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v20, v19, v21);
      *(_QWORD *)(v22 + 24) = v15;
      *(_QWORD *)(v22 + 32) = 8993LL;
LABEL_13:
      WdLogEvent5_WdError(v22);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v34[0]);
  }
  return (unsigned int)v15;
}
