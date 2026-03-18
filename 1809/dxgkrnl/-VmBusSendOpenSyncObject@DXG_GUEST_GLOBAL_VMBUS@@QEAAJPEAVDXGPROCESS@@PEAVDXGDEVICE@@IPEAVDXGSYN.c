/*
 * XREFs of ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C01F55F8
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00DF410 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x1C01E9C44 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z @ 0x1C0235B68 (-SetHostHandle@DXGSYNCOBJECT@@QEAAJII@Z.c)
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
  __int64 v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _MDL *v20; // [rsp+28h] [rbp-58h]
  unsigned int v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+50h] [rbp-30h]
  unsigned int v27; // [rsp+54h] [rbp-2Ch]
  unsigned int v28; // [rsp+58h] [rbp-28h]
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v29; // [rsp+5Ch] [rbp-24h]
  unsigned int v30[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-18h]
  unsigned __int64 v32; // [rsp+70h] [rbp-10h]

  if ( a3 )
    v11 = *((_DWORD *)a3 + 84);
  else
    v11 = 0;
  v12 = *((_DWORD *)a2 + 98);
  v22 = 0LL;
  v23 = v12;
  v27 = a7;
  v28 = a8;
  v29 = a9.0;
  v26 = v11;
  v24 = 1;
  v25 = 1002;
  v21 = 24;
  LODWORD(v14) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                   this,
                   (struct DXGKVMB_COMMAND_BASE *)&v22,
                   0x28u,
                   v30,
                   &v21,
                   v20);
  if ( (int)v14 < 0 )
    goto LABEL_12;
  LODWORD(v14) = -1073741823;
  if ( v21 >= 0x18 )
    LODWORD(v14) = v30[1];
  if ( (int)v14 < 0 )
  {
LABEL_12:
    v18 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v18 + 24) = (int)v14;
    goto LABEL_13;
  }
  if ( a6 )
  {
    v15 = v32;
    *((_DWORD *)a6 + 11) = v30[0];
    *((_QWORD *)a6 + 6) = v31;
    v16 = MapGuestFenceCpuVaToHost(v15, (void **)a6 + 7, (unsigned __int64 *)a6 + 10, (unsigned int *)a6 + 22);
    v14 = v16;
    if ( v16 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v18 + 24) = v14;
      *(_QWORD *)(v18 + 32) = 9027LL;
LABEL_13:
      WdLogEvent5_WdError(v18);
    }
  }
  else
  {
    DXGSYNCOBJECT::SetHostHandle(a5, a4, v30[0]);
  }
  return (unsigned int)v14;
}
