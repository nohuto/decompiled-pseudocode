/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C0217B88
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C0218270 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C02183E0 (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C02197FC (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C0220210 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall CreateServerVmBusChannel(
        __int64 a1,
        void *a2,
        const GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5,
        const struct _UNICODE_STRING *a6,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a7,
        void (*a8)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a9)(struct VMBCHANNEL__ *, unsigned int),
        unsigned int a10,
        struct VMBCHANNEL__ **a11)
{
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  const GUID *v26; // r8
  struct VMBCHANNEL__ *v28; // [rsp+20h] [rbp-50h] BYREF
  __int128 v29; // [rsp+30h] [rbp-40h] BYREF
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  int v31; // [rsp+50h] [rbp-20h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h]
  char v33; // [rsp+60h] [rbp-10h]

  v31 = -1;
  v32 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v33 = 1;
    v31 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2135);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2135LL);
  *a11 = 0LL;
  LODWORD(v16) = EnsureServerVmBusInterface();
  if ( (int)v16 < 0 )
    goto LABEL_22;
  LOBYTE(v15) = 1;
  LODWORD(v16) = ((__int64 (__fastcall *)(const GUID *, __int64, struct VMBCHANNEL__ **))qword_1C00A3BF0)(a3, v15, &v28);
  if ( (int)v16 < 0 )
  {
LABEL_21:
    VmBusInterfaceDereference();
    goto LABEL_22;
  }
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00A3E78)(v28, a1);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00A3C60)(v28, 0x20000LL);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_1C00A3CB8)(v28, a2);
  v30 = (__int128)*a4;
  v29 = (__int128)*a5;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_1C00A3E68)(
                   v28,
                   &v30,
                   &v29);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C00A3C70)(
                   v28,
                   a7);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_1C00A3C68)(
                   v28,
                   a8,
                   a9);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00A3E50)(v28, 2LL);
  ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C00A3C50)(v28, a6);
  if ( a10
    && (v19 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_1C00A3E58)(
                v28,
                (unsigned __int16)a10,
                0LL),
        v16 = v19,
        v19 < 0) )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = v16;
    WdLogEvent5_WdError(v23);
  }
  else
  {
    LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3C20)(v28);
    if ( (int)v16 < 0 )
      goto LABEL_19;
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3CD0)(v28);
  }
  if ( (int)v16 >= 0 )
  {
    *a11 = v28;
    goto LABEL_20;
  }
LABEL_19:
  v24 = WdLogNewEntry5_WdError(v17, v15, v18);
  *(_QWORD *)(v24 + 24) = (int)v16;
  WdLogEvent5_WdError(v24);
  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3BF8)(v28);
LABEL_20:
  if ( (int)v16 < 0 )
    goto LABEL_21;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v15);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v31);
  return (unsigned int)v16;
}
