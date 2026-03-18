/*
 * XREFs of ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C01E7DA8
 * Callers:
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x1C01E848C (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C01E85FC (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C01E9868 (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C01F00A0 (-VmBusInterfaceDereference@@YAXXZ.c)
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
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  const GUID *v23; // r8
  struct VMBCHANNEL__ *v25; // [rsp+20h] [rbp-50h] BYREF
  __int128 v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+40h] [rbp-30h] BYREF
  int v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h]
  char v30; // [rsp+60h] [rbp-10h]

  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2135);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2135);
  *a11 = 0LL;
  LODWORD(v16) = EnsureServerVmBusInterface();
  if ( (int)v16 < 0 )
    goto LABEL_22;
  LOBYTE(v15) = 1;
  LODWORD(v16) = ((__int64 (__fastcall *)(const GUID *, __int64, struct VMBCHANNEL__ **))qword_1C008FBD0)(a3, v15, &v25);
  if ( (int)v16 < 0 )
  {
LABEL_21:
    VmBusInterfaceDereference();
    goto LABEL_22;
  }
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C008FE58)(v25, a1);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C008FC40)(v25, 0x20000LL);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, void *))qword_1C008FC98)(v25, a2);
  v27 = (__int128)*a4;
  v26 = (__int128)*a5;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, __int128 *, __int128 *))qword_1C008FE48)(
                   v25,
                   &v27,
                   &v26);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C008FC50)(
                   v25,
                   a7);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), void (*)(struct VMBCHANNEL__ *, unsigned int)))qword_1C008FC48)(
                   v25,
                   a8,
                   a9);
  if ( (int)v16 < 0 )
    goto LABEL_19;
  ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C008FE30)(v25, 2LL);
  ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C008FC30)(v25, a6);
  if ( a10
    && (v18 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, _QWORD, _QWORD))qword_1C008FE38)(
                v25,
                (unsigned __int16)a10,
                0LL),
        v16 = v18,
        v18 < 0) )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = v16;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    LODWORD(v16) = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FC00)(v25);
    if ( (int)v16 < 0 )
      goto LABEL_19;
    ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FCB0)(v25);
  }
  if ( (int)v16 >= 0 )
  {
    *a11 = v25;
    goto LABEL_20;
  }
LABEL_19:
  v21 = WdLogNewEntry5_WdError(v17);
  *(_QWORD *)(v21 + 24) = (int)v16;
  WdLogEvent5_WdError(v21);
  ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FBD8)(v25);
LABEL_20:
  if ( (int)v16 < 0 )
    goto LABEL_21;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, v28);
  return (unsigned int)v16;
}
