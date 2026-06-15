/*
 * XREFs of ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18001D9C8
 * Callers:
 *     ??_GCAastPreStartContext@@UEAAPEAXI@Z @ 0x180022360 (--_GCAastPreStartContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_dS @ 0x180018580 (WPP_SF_dS.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RevertEndpointVolumeOverride(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        bool *a4,
        bool *a5,
        float *a6,
        bool *a7,
        bool *a8)
{
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  bool *v12; // r14
  bool *v13; // r15
  bool *v14; // rsi
  int v15; // eax
  signed int v16; // ebx
  struct TSSession *v18; // [rsp+80h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+98h] [rbp+20h]

  v18 = this;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v11;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_48f5b41a97d23634bb345404f49671c8_Traceguids, a3, a2);
  }
  v18 = 0LL;
  *a4 = 0;
  v12 = a5;
  *a5 = 0;
  v13 = a7;
  *a7 = 0;
  v14 = (bool *)g_ApplicationManager + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  a5 = v14;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, a3, a2);
  }
  v15 = TsSessionFromSessionId(a3, 1, 0LL, &v18);
  if ( v15 )
  {
    v16 = (unsigned __int16)v15 | 0x80070000;
    if ( v15 <= 0 )
      v16 = v15;
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, bool *, bool *, float *, bool *, bool *))(**((_QWORD **)v18 + 32) + 40LL))(
            *((_QWORD *)v18 + 32),
            a2,
            a4,
            v12,
            a6,
            v13,
            a8);
  }
  if ( v16 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Eu, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v16);
    }
    AudPolicyLogError("TsSessionIdReleaseEndpointVolumeReference", 2493, v16);
  }
  if ( v14 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v14);
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
