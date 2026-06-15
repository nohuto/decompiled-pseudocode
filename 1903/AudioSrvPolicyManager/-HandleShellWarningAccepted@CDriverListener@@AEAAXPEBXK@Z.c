/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x180029F14
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18002A1D0 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     memset_0 @ 0x18003508E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-38h] BYREF
  GUID v11; // [rsp+58h] [rbp-28h] BYREF
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  int v16; // [rsp+B0h] [rbp+30h] BYREF
  BOOL v17; // [rsp+C8h] [rbp+48h] BYREF

  v10[1] = -2LL;
  v6 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  v10[0] = 0LL;
  memset_0(&v11, 0, 0x20uLL);
  v16 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        v17 = *a2 == 1;
        v8 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v9);
        if ( v8 < 0 )
          goto LABEL_9;
        v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, _QWORD *))(*(_QWORD *)v9 + 24LL))(
               v9,
               &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
               1LL,
               0LL,
               v10);
        if ( v8 < 0
          || (v15 = 0,
              v11 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000,
              v12 = 57,
              v13 = 2,
              v14 = *((unsigned __int16 *)this + 246),
              v16 = 0,
              v8 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, BOOL *, int, int *))(*(_QWORD *)v10[0] + 24LL))(
                     v10[0],
                     &v11,
                     32LL,
                     &v17,
                     4,
                     &v16),
              v8 < 0) )
        {
LABEL_9:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_e081df4fa8063e699ab21e908f63cbdf_Traceguids, v8);
          }
        }
        v7 = v10[0];
        v6 = v9;
      }
    }
  }
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = v9;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
