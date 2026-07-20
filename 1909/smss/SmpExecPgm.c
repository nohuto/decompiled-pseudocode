/*
 * XREFs of SmpExecPgm @ 0x140002880
 * Callers:
 *     SmpApiCallback @ 0x140003880 (SmpApiCallback.c)
 * Callees:
 *     SmpSetCoreProcessIds @ 0x140002AC4 (SmpSetCoreProcessIds.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002BA8 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpSbCreateSession @ 0x140002BE0 (SmpSbCreateSession.c)
 *     SmpSearchKnownSubSysDatabase @ 0x14000426C (SmpSearchKnownSubSysDatabase.c)
 *     SmpDereferenceKnownSubSys @ 0x1400047A0 (SmpDereferenceKnownSubSys.c)
 *     SmpGetMuSessionIdFromClientContext @ 0x14000489C (SmpGetMuSessionIdFromClientContext.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 */

__int64 __fastcall SmpExecPgm(__int64 a1, __int64 a2)
{
  unsigned int MuSessionIdFromClientContext; // r14d
  __int64 v5; // rsi
  BOOL v6; // r12d
  __int64 v7; // rbx
  int Session; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // xmm1
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  _OWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  unsigned int v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+1A8h] [rbp+A8h]
  __int64 v25; // [rsp+1B0h] [rbp+B0h]

  MuSessionIdFromClientContext = SmpGetMuSessionIdFromClientContext(a2, &v14);
  if ( v14 )
  {
    v5 = 0LL;
    v6 = 0;
    v7 = 0LL;
    if ( (*(_BYTE *)a2 & 8) != 0 )
    {
      v5 = *(_QWORD *)(a2 + 32);
      v6 = **(_DWORD **)(v5 + 16) == 2;
    }
    Session = SmpSbCreateSession(MuSessionIdFromClientContext, v14, a1 + 48);
    v9 = Session;
    if ( !v6 )
      return v9;
    if ( Session < 0 )
      return v9;
    v10 = *(_DWORD *)(a1 + 120);
    if ( v10 != 1 )
    {
      v17 = 1;
      v18 = 0LL;
      v19 = v10;
      v7 = SmpSearchKnownSubSysDatabase(MuSessionIdFromClientContext, &v17);
      if ( !v7 )
        return v9;
    }
    v15 = v7;
    if ( MuSessionIdFromClientContext == *(_DWORD *)SmpCoreProcessIds )
    {
      if ( *(_DWORD *)(a1 + 120) == 1 )
        SmpCoreSubsysProcess[0] = (HANDLE)-1LL;
      else
        SmpCoreSubsysProcess[0] = *(HANDLE *)(v7 + 32);
    }
    v16 = *(_QWORD *)(a1 + 72);
    if ( *(_QWORD *)(v5 + 72) != SmpUniqueProcessId )
    {
      if ( !v7
        || (unsigned int)(*(_DWORD *)(v7 + 24) - 2) > 1
        || (*(_BYTE *)v5 & 1) != 0
        || (_m_prefetchw((const void *)v5), (_InterlockedOr((volatile signed __int32 *)v5, 1u) & 1) != 0) )
      {
        v9 = -1073741823;
        goto LABEL_13;
      }
      v13 = *(_OWORD *)(v5 + 80);
      v20[0] = *(_OWORD *)(v5 + 64);
      v21 = *(_QWORD *)(v5 + 96);
      v20[1] = v13;
      v22 = 5LL;
      v23 = MuSessionIdFromClientContext;
      v24 = v16;
      v25 = *(_QWORD *)(v7 + 48);
      NtAlpcSendWaitReceivePort(SmpApiConnectionPort, 0x10000LL, v20, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (unsigned int)SmpSessionIdToInitialSessionIndex(MuSessionIdFromClientContext) != -1 )
      SmpSetCoreProcessIds(v11, &v15, 0LL);
    if ( MuSessionIdFromClientContext == *(_DWORD *)SmpCoreProcessIds )
    {
      if ( !v7 )
        return v9;
      v7 = 0LL;
    }
LABEL_13:
    if ( v7 )
      SmpDereferenceKnownSubSys((PVOID)v7);
    return v9;
  }
  return 3221225473LL;
}
