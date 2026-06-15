/*
 * XREFs of AUDIOSERVER_rundown @ 0x1800E6830
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18002A4B4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x1800C3B74 (WPP_SF_qd.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x1800E3BB0 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(char *a1)
{
  int v2; // eax
  LPCRITICAL_SECTION v3; // rbx
  int v6; // [rsp+20h] [rbp-48h]
  _BYTE v7[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v7, a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, a1);
  }
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 16LL))(a1);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = v2;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      (__int64)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
      a1,
      v6);
  }
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v3);
  LeaveCriticalSection(v3);
  return EtwEventActivityIdControl(4LL, v8);
}
