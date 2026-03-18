/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C028E4DC
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C028E25C (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C0218F34 (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C021918C (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C021FBA0 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        __int64 a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        char a6)
{
  unsigned int v8; // r12d
  struct _KEVENT *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // r14
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  _QWORD *v58; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int128 v77; // [rsp+30h] [rbp-50h] BYREF
  __int128 v78; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v79[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v80; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v81)(); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v82)(); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v83)(); // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v84)(); // [rsp+78h] [rbp-8h]

  v8 = 2;
  *((_BYTE *)this + 27) = a6 != 0;
  if ( a6 )
  {
    v15 = EnsureServerVmBusInterface((__int64)this, a2);
    v19 = v15;
    if ( v15 >= 0 )
      goto LABEL_9;
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16, v18);
    v20[4] = 213LL;
LABEL_29:
    v20[3] = v19;
    v20[5] = this;
    WdLogEvent5_WdError(v20);
    goto LABEL_30;
  }
  v9 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 4) = v9;
  if ( !v9 )
  {
    v19 = -1073741801LL;
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v20[4] = 199LL;
    goto LABEL_29;
  }
  KeInitializeEvent(v9, NotificationEvent, 0);
  v21 = EnsureClientVmBusInterface(v14, v13);
  v19 = v21;
  if ( v21 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v22, v16, v23);
    v20[4] = 224LL;
    goto LABEL_29;
  }
LABEL_9:
  v24 = (_QWORD *)((char *)this + 16);
  LOBYTE(v16) = a6;
  v25 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, __int64, char *))qword_1C00A3BE0)(
          g_pDriverObject->DeviceObject,
          v16,
          (char *)this + 16);
  v19 = v25;
  if ( v25 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v28);
    v29[3] = v19;
    v29[4] = 238LL;
    v29[5] = this;
    WdLogEvent5_WdError(v29);
    VmBusInterfaceDereference(v31, v30);
    goto LABEL_30;
  }
  LOBYTE(v26) = 1;
  ((void (__fastcall *)(_QWORD, __int64))qword_1C00A3C98)(*v24, v26);
  v32 = *v24;
  if ( !a6 )
  {
    v46 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_1C00A3CD0)(
            v32,
            &DxgkVailVmBusChannelType,
            &DxgkVailVmBusChannel,
            0LL);
    v19 = v46;
    if ( v46 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47, v49);
      v20[4] = 311LL;
      goto LABEL_29;
    }
    goto LABEL_24;
  }
  v77 = DxgkVailVmBusChannel;
  v78 = DxgkVailVmBusChannelType;
  v33 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_1C00A3E58)(v32, &v78, &v77);
  v19 = v33;
  if ( v33 < 0 )
  {
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34, v36);
    v37[4] = 262LL;
LABEL_17:
    v37[3] = v19;
    v37[5] = this;
    WdLogEvent5_WdError(v37);
    goto LABEL_19;
  }
  if ( a2 )
  {
    v38 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C00A3E68)(*v24, a2);
    v19 = v38;
    if ( v38 >= 0 )
      goto LABEL_20;
    v37 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39, v41);
    v37[4] = 279LL;
    goto LABEL_17;
  }
  v8 = 3;
LABEL_19:
  if ( (int)v19 < 0 )
    goto LABEL_30;
LABEL_20:
  v42 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C00A3E40)(*v24, v8);
  v19 = v42;
  if ( v42 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43, v45);
    v20[4] = 296LL;
    goto LABEL_29;
  }
LABEL_24:
  if ( a5 )
    ((void (__fastcall *)(_QWORD))qword_1C00A3C40)(*v24);
  if ( (int)v19 >= 0 )
  {
    v50 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C00A3C50)(*v24, 2048LL);
    v19 = v50;
    if ( v50 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v52, v51, v53);
      v20[4] = 329LL;
      goto LABEL_29;
    }
  }
LABEL_30:
  if ( !a6 )
  {
    v54 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C00A3CC8)(*((_QWORD *)this + 2), 8LL, 8LL);
    v19 = v54;
    if ( v54 >= 0 )
      goto LABEL_34;
    v58 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55, v57);
    v58[3] = v19;
    v58[4] = 343LL;
    v58[5] = this;
    WdLogEvent5_WdError(v58);
  }
  if ( (int)v19 < 0 )
  {
LABEL_46:
    ((void (__fastcall *)(_QWORD))qword_1C00A3BE8)(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    VmBusInterfaceDereference(v75, v74);
    return (unsigned int)v19;
  }
LABEL_34:
  ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_1C00A3CA8)(*((_QWORD *)this + 2), this);
  v59 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_1C00A3C58)(
          *((_QWORD *)this + 2),
          &ProcessRingPacket,
          0LL);
  v19 = v59;
  if ( v59 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v61, v60, v62);
    v63[4] = 359LL;
LABEL_38:
    v63[3] = v19;
    v63[5] = this;
    WdLogEvent5_WdError(v63);
    goto LABEL_46;
  }
  v64 = *((_QWORD *)this + 2);
  v80 = 0LL;
  v81 = ProcessChannelClosed;
  v82 = ProcessChannelSuspended;
  v83 = ProcessChannelStarted;
  v84 = ProcessChannelPostStarted;
  v79[0] = 1;
  v79[1] = 48;
  v65 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1C00A3C60)(v64, v79);
  v19 = v65;
  if ( v65 < 0 )
  {
    v63 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66, v68);
    v63[4] = 382LL;
    goto LABEL_38;
  }
  if ( !a6 )
  {
    v69 = ((__int64 (__fastcall *)(_QWORD))qword_1C00A3C10)(*((_QWORD *)this + 2));
    v19 = v69;
    if ( v69 >= 0 )
    {
LABEL_44:
      *((_BYTE *)this + 24) = 1;
      goto LABEL_45;
    }
    v73 = (_QWORD *)WdLogNewEntry5_WdError(v71, v70, v72);
    v73[3] = v19;
    v73[4] = 394LL;
    v73[5] = this;
    WdLogEvent5_WdError(v73);
  }
  if ( (int)v19 < 0 )
    goto LABEL_46;
  if ( !a6 )
    goto LABEL_44;
LABEL_45:
  if ( (int)v19 < 0 )
    goto LABEL_46;
  return (unsigned int)v19;
}
