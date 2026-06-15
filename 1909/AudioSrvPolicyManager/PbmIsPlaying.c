/*
 * XREFs of PbmIsPlaying @ 0x180020AA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_dS @ 0x180018580 (WPP_SF_dS.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800194A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18001C744 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmIsPlaying(CApplicationManager *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  int Process; // eax
  CApplicationManager *v5; // rcx
  struct CProcess *v6; // rbx
  const wchar_t *v7; // rax
  struct CProcess *v8; // rbx
  struct CProcess *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(a1, a1, &v10);
      v6 = v10;
      v2 = Process;
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v5, v10);
      if ( v6 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v7 = L"Paused";
          if ( *a2 )
            v7 = (const wchar_t *)L"Playing";
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xDu,
            &WPP_2a27100de0d53ba9b9d21cae8fd27d13_Traceguids,
            *((_DWORD *)v6 + 48),
            v7);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = v10;
          (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v10 + 32LL))(v10);
          (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 1LL);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
