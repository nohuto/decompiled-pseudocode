/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180100A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180101230 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180101F68 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1801025D4 (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1801027BC (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1801036B8 (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  bool v4; // al
  char *v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v16; // [rsp+30h] [rbp+8h] BYREF

  memcpy_0((char *)this + 464, a2, 0x640uLL);
  v4 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1872)
    && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 233);
  v16 = v4;
  v5 = (char *)this + 24;
  v6 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    v7 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v6 + 272))(v5, a2);
    if ( v7 >= 0 )
      goto LABEL_11;
    v9 = 215LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(char *, struct InputInfo *))(v6 + 280))(v5, a2);
    if ( v7 >= 0 )
      goto LABEL_11;
    v9 = 220LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  v10 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 462) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v8);
    JUMPOUT(0x180100BC8LL);
  }
  v11 = *((_QWORD *)this + 463);
  if ( !v11 )
  {
    *((_QWORD *)this + 463) = v10;
    v11 = v10;
  }
  ++*((_QWORD *)this + 464);
  if ( v10 - v11 > *((_QWORD *)this + 462) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 3672), v10);
  memcpy_0((char *)this + 2064, a2, 0x640uLL);
  v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v12 )
  {
    if ( *v12 )
    {
      ISMTracing::Instance();
      v13 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v13 > 5u
        && (*(_BYTE *)(v13 + 16) & 1) != 0
        && (*(_QWORD *)(v13 + 24) & 1LL) == *(_QWORD *)(v13 + 24) )
      {
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          if ( *((_DWORD *)a2 + 130) == 7 )
            ISMTracing::LogMPCVoiceInputReport(a2, &v16);
          else
            ISMTracing::LogMPCHandInputReport(a2, &v16);
        }
        else if ( (*(_DWORD *)a2 & 0x400) != 0 )
        {
          ISMTracing::LogMPCClickerInputReport(a2, &v16);
        }
        else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        {
          ISMTracing::LogMPCSpatialControllerInputReport(a2, &v16);
        }
      }
    }
  }
  return 0LL;
}
