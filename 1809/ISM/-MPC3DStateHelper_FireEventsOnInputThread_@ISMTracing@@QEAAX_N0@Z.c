/*
 * XREFs of ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x18003C5DC
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x18003AC98 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(ISMTracing *this, char a2, char a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  char *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  char *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  char v12; // [rsp+98h] [rbp+10h] BYREF
  char v13; // [rsp+A0h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 4u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v8 = 0;
        v11 = 0;
        v6 = &v12;
        v9 = &v13;
        v7 = 1;
        v10 = 1;
        TlgWrite((TraceLoggingHProvider)v4, &unk_180166C0A, 0LL, 0LL, 4u, &pData);
      }
    }
  }
}
