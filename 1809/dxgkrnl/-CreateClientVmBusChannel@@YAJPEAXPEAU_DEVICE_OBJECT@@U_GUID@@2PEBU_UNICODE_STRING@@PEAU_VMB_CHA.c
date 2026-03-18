/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C01E7AA4
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E8050 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C01E824C (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C01E87BC (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C01E961C (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C01F00A0 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall CreateClientVmBusChannel(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *a6,
        void (*a7)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int),
        void (*a8)(struct VMBCHANNEL__ *, unsigned int),
        struct VMBCHANNEL__ **a9)
{
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct VMBCHANNEL__ *v19; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+38h] [rbp-30h] BYREF
  __int64 v21; // [rsp+40h] [rbp-28h]
  char v22; // [rsp+48h] [rbp-20h]
  struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *v23; // [rsp+50h] [rbp-18h]
  void (*v24)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+58h] [rbp-10h]

  v20 = -1;
  v23 = a6;
  v24 = a7;
  v21 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v22 = 1;
    v20 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2135);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2135);
  *a9 = 0LL;
  v13 = EnsureClientVmBusInterface();
  if ( v13 >= 0 )
  {
    v19 = 0LL;
    v13 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD, struct VMBCHANNEL__ **))qword_1C008FBD0)(
            a2,
            0LL,
            &v19);
    if ( v13 < 0 )
      goto LABEL_10;
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C008FC40)(v19, 0x20000LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64, __int64))qword_1C008FCB8)(v19, 256LL, 256LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C008FC50)(
      v19,
      v23);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), _QWORD))qword_1C008FC48)(
      v19,
      v24,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C008FC98)(v19, a1);
    v13 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _GUID *, struct _GUID *, _QWORD))qword_1C008FCC0)(
            v19,
            a3,
            a4,
            0LL);
    if ( v13 < 0
      || (((void (__fastcall *)(struct VMBCHANNEL__ *, _QWORD))qword_1C008FC88)(v19, 0LL),
          ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C008FC30)(v19, a5),
          v13 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FC00)(v19),
          v13 < 0) )
    {
LABEL_10:
      if ( v19 )
      {
        v15 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v15 + 24) = v13;
        WdLogEvent5_WdError(v15);
        DestroyVmBusChannel(v19);
      }
      else
      {
        VmBusInterfaceDereference();
      }
    }
    else
    {
      ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C008FCB0)(v19);
      *a9 = v19;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v20);
  return (unsigned int)v13;
}
