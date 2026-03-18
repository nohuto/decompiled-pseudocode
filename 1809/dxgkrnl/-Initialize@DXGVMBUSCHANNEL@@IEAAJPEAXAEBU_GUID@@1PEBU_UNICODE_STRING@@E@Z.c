/*
 * XREFs of ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C025823C
 * Callers:
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C0257F9C (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?EnsureClientVmBusInterface@@YAJXZ @ 0x1C01E961C (-EnsureClientVmBusInterface@@YAJXZ.c)
 *     ?EnsureServerVmBusInterface@@YAJXZ @ 0x1C01E9868 (-EnsureServerVmBusInterface@@YAJXZ.c)
 *     ?VmBusInterfaceDereference@@YAXXZ @ 0x1C01F00A0 (-VmBusInterfaceDereference@@YAXXZ.c)
 */

__int64 __fastcall DXGVMBUSCHANNEL::Initialize(
        DXGVMBUSCHANNEL *this,
        void *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        const struct _UNICODE_STRING *a5,
        char a6)
{
  unsigned int v8; // r12d
  struct _KEVENT *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int128 v52; // [rsp+30h] [rbp-50h] BYREF
  __int128 v53; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v54[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v55; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall *v56)(); // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v57)(); // [rsp+68h] [rbp-18h]
  __int64 (__fastcall *v58)(); // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v59)(); // [rsp+78h] [rbp-8h]

  v8 = 2;
  *((_BYTE *)this + 27) = a6 != 0;
  if ( a6 )
  {
    v18 = EnsureServerVmBusInterface((__int64)this);
    v15 = v18;
    if ( v18 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v16[4] = 213LL;
      goto LABEL_28;
    }
    goto LABEL_8;
  }
  v9 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 4) = v9;
  if ( v9 )
  {
    KeInitializeEvent(v9, NotificationEvent, 0);
    v12 = EnsureClientVmBusInterface(v11);
    v15 = v12;
    if ( v12 < 0 )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v16[4] = 224LL;
      goto LABEL_28;
    }
LABEL_8:
    v20 = (_QWORD *)((char *)this + 16);
    LOBYTE(v13) = a6;
    v21 = ((__int64 (__fastcall *)(PDEVICE_OBJECT, __int64, char *))qword_1C008FBD0)(
            g_pDriverObject->DeviceObject,
            v13,
            (char *)this + 16);
    v15 = v21;
    if ( v21 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v24[3] = v15;
      v24[4] = 238LL;
      v24[5] = this;
      WdLogEvent5_WdError(v24);
      VmBusInterfaceDereference(v25);
      goto LABEL_29;
    }
    LOBYTE(v22) = 1;
    ((void (__fastcall *)(_QWORD, __int64))qword_1C008FC88)(*v20, v22);
    v26 = *v20;
    if ( !a6 )
    {
      v34 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *, _QWORD))qword_1C008FCC0)(
              v26,
              &DxgkVailVmBusChannelType,
              &DxgkVailVmBusChannel,
              0LL);
      v15 = v34;
      if ( v34 < 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v16[4] = 311LL;
        goto LABEL_28;
      }
LABEL_23:
      if ( a5 )
        ((void (__fastcall *)(_QWORD))qword_1C008FC30)(*v20);
      if ( (int)v15 < 0
        || (v36 = ((__int64 (__fastcall *)(_QWORD, __int64))qword_1C008FC40)(*v20, 2048LL), v15 = v36, v36 >= 0) )
      {
LABEL_29:
        if ( a6 )
          goto LABEL_32;
        goto LABEL_30;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v16[4] = 329LL;
LABEL_28:
      v16[3] = v15;
      v16[5] = this;
      WdLogEvent5_WdError(v16);
      goto LABEL_29;
    }
    v52 = DxgkVailVmBusChannel;
    v53 = DxgkVailVmBusChannelType;
    v27 = ((__int64 (__fastcall *)(__int64, __int128 *, __int128 *))qword_1C008FE48)(v26, &v53, &v52);
    v15 = v27;
    if ( v27 >= 0 )
    {
      if ( !a2 )
      {
        v8 = 3;
LABEL_18:
        if ( (int)v15 < 0 )
          goto LABEL_29;
LABEL_19:
        v32 = ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C008FE30)(*v20, v8);
        v15 = v32;
        if ( v32 < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v33);
          v16[4] = 296LL;
          goto LABEL_28;
        }
        goto LABEL_23;
      }
      v30 = ((__int64 (__fastcall *)(_QWORD, void *))qword_1C008FE58)(*v20, a2);
      v15 = v30;
      if ( v30 >= 0 )
        goto LABEL_19;
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v31);
      v29[4] = 279LL;
    }
    else
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v29[4] = 262LL;
    }
    v29[3] = v15;
    v29[5] = this;
    WdLogEvent5_WdError(v29);
    goto LABEL_18;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v17[3] = -1073741801LL;
  v17[4] = 199LL;
  v17[5] = this;
  WdLogEvent5_WdError(v17);
LABEL_30:
  v38 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))qword_1C008FCB8)(*((_QWORD *)this + 2), 8LL, 8LL);
  v15 = v38;
  if ( v38 >= 0 )
    goto LABEL_33;
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
  v40[3] = v15;
  v40[4] = 343LL;
  v40[5] = this;
  WdLogEvent5_WdError(v40);
LABEL_32:
  if ( (int)v15 < 0 )
  {
LABEL_45:
    ((void (__fastcall *)(_QWORD))qword_1C008FBD8)(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
    VmBusInterfaceDereference(v50);
    return (unsigned int)v15;
  }
LABEL_33:
  ((void (__fastcall *)(_QWORD, DXGVMBUSCHANNEL *))qword_1C008FC98)(*((_QWORD *)this + 2), this);
  v41 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD))qword_1C008FC48)(
          *((_QWORD *)this + 2),
          &ProcessRingPacket,
          0LL);
  v15 = v41;
  if ( v41 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v42);
    v43[4] = 359LL;
LABEL_37:
    v43[3] = v15;
    v43[5] = this;
    WdLogEvent5_WdError(v43);
    goto LABEL_45;
  }
  v44 = *((_QWORD *)this + 2);
  v55 = 0LL;
  v56 = ProcessChannelClosed;
  v57 = ProcessChannelSuspended;
  v58 = ProcessChannelStarted;
  v59 = ProcessChannelPostStarted;
  v54[0] = 1;
  v54[1] = 48;
  v45 = ((__int64 (__fastcall *)(__int64, _DWORD *))qword_1C008FC50)(v44, v54);
  v15 = v45;
  if ( v45 < 0 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdError(v46);
    v43[4] = 382LL;
    goto LABEL_37;
  }
  if ( !a6 )
  {
    v47 = ((__int64 (__fastcall *)(_QWORD))qword_1C008FC00)(*((_QWORD *)this + 2));
    v15 = v47;
    if ( v47 >= 0 )
    {
LABEL_43:
      *((_BYTE *)this + 24) = 1;
      goto LABEL_44;
    }
    v49 = (_QWORD *)WdLogNewEntry5_WdError(v48);
    v49[3] = v15;
    v49[4] = 394LL;
    v49[5] = this;
    WdLogEvent5_WdError(v49);
  }
  if ( (int)v15 < 0 )
    goto LABEL_45;
  if ( !a6 )
    goto LABEL_43;
LABEL_44:
  if ( (int)v15 < 0 )
    goto LABEL_45;
  return (unsigned int)v15;
}
