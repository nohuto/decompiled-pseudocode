/*
 * XREFs of ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180048100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::PrivateQueryService(
        CApplicationManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  *a4 = 0LL;
  v4 = -2147467262;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationListeners.Revision )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationListeners.SubAuthority;
  if ( !v5 )
    goto LABEL_4;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ProcessLifetimeManagerControl.Revision )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ProcessLifetimeManagerControl.SubAuthority;
  if ( !v9 )
  {
    v6 = (char *)*((_QWORD *)this + 49);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee.Data4;
  if ( !v10 )
  {
    v6 = (char *)*((_QWORD *)this + 45);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveApplicationManagerPriv.Revision )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveApplicationManagerPriv.SubAuthority;
  if ( !v11 )
  {
LABEL_4:
    v6 = (char *)this - 192;
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee.Data4;
  if ( !v12 )
  {
    v6 = (char *)*((_QWORD *)this + 44);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IImmersiveWindowManager.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IImmersiveWindowManager.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IImmersiveWindowManager.Data4;
  if ( !v13 )
    return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 48) + 32LL))(
                           *((_QWORD *)this + 48),
                           0LL);
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_88b25c81_171b_48b0_91d6_c75846bcf035.Data4;
  if ( !v14 )
  {
    v6 = (char *)*((_QWORD *)this + 52);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data1 )
    v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_33ebffef_6a18_4802_8f40_9330e473ed1c.Data4;
  if ( !v15 )
  {
    v6 = (char *)*((_QWORD *)this + 71);
    return (unsigned int)(**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v6)(v6, a3, a4);
  }
  return v4;
}
