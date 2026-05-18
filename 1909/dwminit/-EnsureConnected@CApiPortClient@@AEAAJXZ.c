/*
 * XREFs of ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180004420
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004138 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004284 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001170 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800038E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Disconnect@CApiPortClient@@AEAAXXZ @ 0x1800040A0 (-Disconnect@CApiPortClient@@AEAAXXZ.c)
 *     ?Translate@CApiPortClient@@CAJJ@Z @ 0x1800040E4 (-Translate@CApiPortClient@@CAJJ@Z.c)
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800043F4 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x1800046C0 (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ?ConnectWithName@CPortClient@@QEAAJPEBG0@Z @ 0x180004834 (-ConnectWithName@CPortClient@@QEAAJPEBG0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180004F5C (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 *     memset_0 @ 0x1800059F6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800065E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApiPortClient::EnsureConnected(CApiPortClient *this)
{
  CApiPortClient *v1; // rcx
  int v2; // edi
  unsigned __int64 v3; // rcx
  CPortClient *v4; // rax
  volatile signed __int32 *v5; // rbx
  signed int v6; // eax
  signed int v7; // eax
  const unsigned __int16 *v8; // r8
  unsigned int v9; // eax
  signed int v10; // eax
  wchar_t Buffer[48]; // [rsp+40h] [rbp-D8h] BYREF
  wchar_t v13[48]; // [rsp+A0h] [rbp-78h] BYREF

  if ( CApiPortClient::IsConnected(this) )
  {
    return 0;
  }
  else
  {
    CApiPortClient::Disconnect(v1);
    v4 = (CPortClient *)operator new(v3);
    v5 = (volatile signed __int32 *)v4;
    if ( v4 )
    {
      CPortClient::CPortClient(v4, g_PortClient, hObject);
      *((_DWORD *)v5 + 22) = 1;
      *(_QWORD *)v5 = &CPortClientRefCounted::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      memset_0(Buffer, 0, 0x52uLL);
      memset_0(v13, 0, 0x52uLL);
      LeaveCriticalSection(&CriticalSection);
      if ( NtCurrentPeb()->SessionId
        && (v6 = StringCchPrintfW(Buffer, 41LL, L"\\Sessions\\%d", NtCurrentPeb()->SessionId), v2 = v6, v6 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x10Cu);
      }
      else
      {
        v7 = StringCchPrintfW(v13, 41LL, L"%s\\Windows\\DwmApiPort", Buffer);
        v2 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(4u, &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x113u);
        }
        else
        {
          v9 = CPortClient::ConnectWithName((CPortClient *)v5, v13, v8);
          v10 = CApiPortClient::Translate(v9);
          v2 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              4u,
              &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v10,
              0x116u);
        }
      }
      EnterCriticalSection(&CriticalSection);
      if ( v2 >= 0 && !*(&hObject + 1) )
      {
        *(&hObject + 1) = (HANDLE)v5;
        v5 = 0LL;
      }
      if ( v5 && _InterlockedExchangeAdd(v5 + 22, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v5)(v5, 1LL);
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        4u,
        &CApiPortClient::MILINSTRUMENTATIONHRESULTLIST,
        1LL,
        0x8007000E,
        0xF7u);
    }
  }
  return (unsigned int)v2;
}
