/*
 * XREFs of ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C0217214
 * Callers:
 *     ?CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C02177C0 (-CreateVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C02179C0 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C0217F30 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C0218F34 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C021FBA0 (-VmBusInterfaceDereference@@YAXXZ.c)
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
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  const GUID *v20; // r8
  struct VMBCHANNEL__ *v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+38h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-28h]
  char v25; // [rsp+48h] [rbp-20h]
  struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *v26; // [rsp+50h] [rbp-18h]
  void (*v27)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int); // [rsp+58h] [rbp-10h]

  v23 = -1;
  v26 = a6;
  v27 = a7;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2135);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v23, 2135LL);
  *a9 = 0LL;
  v14 = EnsureClientVmBusInterface();
  if ( v14 >= 0 )
  {
    v22 = 0LL;
    v14 = ((__int64 (__fastcall *)(struct _DEVICE_OBJECT *, _QWORD, struct VMBCHANNEL__ **))qword_1C00A3BE0)(
            a2,
            0LL,
            &v22);
    if ( v14 < 0 )
      goto LABEL_10;
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00A3C50)(v22, 0x20000LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64, __int64))qword_1C00A3CC8)(v22, 256LL, 256LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *))qword_1C00A3C60)(
      v22,
      v26);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int), _QWORD))qword_1C00A3C58)(
      v22,
      v27,
      0LL);
    ((void (__fastcall *)(struct VMBCHANNEL__ *, __int64))qword_1C00A3CA8)(v22, a1);
    v14 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *, struct _GUID *, struct _GUID *, _QWORD))qword_1C00A3CD0)(
            v22,
            a3,
            a4,
            0LL);
    if ( v14 < 0
      || (((void (__fastcall *)(struct VMBCHANNEL__ *, _QWORD))qword_1C00A3C98)(v22, 0LL),
          ((void (__fastcall *)(struct VMBCHANNEL__ *, const struct _UNICODE_STRING *))qword_1C00A3C40)(v22, a5),
          v14 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3C10)(v22),
          v14 < 0) )
    {
LABEL_10:
      if ( v22 )
      {
        v18 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v18 + 24) = v14;
        WdLogEvent5_WdError(v18);
        DestroyVmBusChannel(v22);
      }
      else
      {
        VmBusInterfaceDereference();
      }
    }
    else
    {
      ((void (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00A3CC0)(v22);
      *a9 = v22;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v13);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v19, &EventProfilerExit, v20, v23);
  return (unsigned int)v14;
}
