/*
 * XREFs of ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x18010F68C
 * Callers:
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x18010F914 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitor::MuteControlsOnPath(struct IPartsList *a1)
{
  bool v2; // di
  int v3; // ebx
  unsigned int v4; // esi
  int v6; // [rsp+80h] [rbp+38h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+40h] BYREF
  __int64 v8; // [rsp+90h] [rbp+48h] BYREF
  __int64 v9; // [rsp+98h] [rbp+50h] BYREF

  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x45u, (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids);
  }
  v3 = ((__int64 (__fastcall *)(struct IPartsList *, int *))a1->lpVtbl->GetCount)(a1, &v6);
  if ( v3 < 0 )
    goto LABEL_29;
  v4 = 0;
  if ( v6 == 1 )
  {
LABEL_25:
    v3 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = 0LL;
      v3 = ((__int64 (__fastcall *)(struct IPartsList *, _QWORD, __int64 *))a1->lpVtbl->GetPart)(a1, v4, &v8);
      if ( v3 < 0 )
        break;
      if ( v2 )
        goto LABEL_14;
      v9 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v9);
      if ( v3 < 0 )
        goto LABEL_32;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7);
      if ( v3 < 0 )
        goto LABEL_32;
      v2 = v7 > 1;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( v2 )
      {
LABEL_14:
        v9 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL))(
               v8,
               23LL,
               &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
               &v9) >= 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x48u,
              (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
              v8);
          }
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 1LL, 0LL);
          if ( v3 < 0 )
          {
LABEL_32:
            if ( v9 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            break;
          }
        }
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      if ( ++v4 >= v6 - 1 )
        goto LABEL_25;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v3 < 0 )
  {
LABEL_29:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x49u,
        (__int64)&WPP_70b4bc2e72a23cf5637e1be4ab06d41d_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
