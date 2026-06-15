/*
 * XREFs of ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005B6B8
 * Callers:
 *     ?Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18005ACF8 (-Initialize@CVolumeHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180036D2C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C3AF4 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVolumeHardware::FindVolumeControlForEndpoint(
        CVolumeHardware *this,
        struct IUnknown *a2,
        struct IPartsList *a3)
{
  struct IUnknown *v6; // rcx
  int v7; // ebx
  CAudioSessionManager *v8; // rcx
  struct IUnknown *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  _QWORD *v13; // [rsp+20h] [rbp-30h]
  LPVOID pv; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+88h] [rbp+38h] BYREF
  struct IUnknown *v17; // [rsp+98h] [rbp+48h] BYREF

  v15[1] = -2LL;
  v6 = 0LL;
  v17 = 0LL;
  v16 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
    v6 = v17;
  }
  if ( a2 )
  {
    v15[0] = 0LL;
    pv = 0LL;
    v13 = v15;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))a2->lpVtbl[1].QueryInterface)(
           a2,
           &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
           23LL);
    if ( v7 < 0 )
      goto LABEL_36;
    v7 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))a2->lpVtbl[1].Release)(a2, &pv);
    if ( v7 < 0 )
      goto LABEL_36;
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          34,
          (unsigned int)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
          (_DWORD)this,
          (__int64)pv);
        v8 = WPP_GLOBAL_Control;
      }
      if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x10000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)v8 + 2), 35LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
      }
    }
    v9 = v17;
    if ( v17 != a2 )
    {
      ATL::AtlComQIPtrAssign(&v17, a2, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
      v9 = v17;
    }
    if ( v9 )
    {
      v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[3].Release)(v9, &v16);
      if ( v7 < 0 )
        goto LABEL_36;
    }
    v10 = *(_QWORD *)v15[0];
    v11 = v16
        ? (*(__int64 (__fastcall **)(_QWORD, struct IPartsList *, GUID *, GUID *, char *))(v10 + 72))(
            v15[0],
            a3,
            &GUID_35caf6e4_f3b3_4168_bb4b_55e77a461c7e,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248)
        : (*(unsigned __int64 (__fastcall **)(_QWORD, struct IPartsList *, GUID *, char *, _QWORD *))(v10 + 32))(
            v15[0],
            a3,
            &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
            (char *)this + 248,
            v13);
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_36;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids, this);
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, char *))(**((_QWORD **)this + 31) + 104LL))(
           *((_QWORD *)this + 31),
           23LL,
           &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
           (char *)this + 256);
    if ( v7 < 0 )
LABEL_36:
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::FindVolumeControlForEndpoint", 1319, v7);
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v15[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
    v6 = v17;
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *, struct IUnknownVtbl *))v6->lpVtbl->Release)(v6, v6->lpVtbl);
  return (unsigned int)v7;
}
