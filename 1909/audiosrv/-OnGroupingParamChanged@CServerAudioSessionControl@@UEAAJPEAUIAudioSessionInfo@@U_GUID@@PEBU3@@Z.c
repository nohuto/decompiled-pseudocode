/*
 * XREFs of ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x180041430
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800C3B74 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnGroupingParamChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        struct _GUID *a3,
        const struct _GUID *a4)
{
  int MediaEvent; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  char *v12; // rax
  unsigned __int64 v13; // r8
  void *v14; // r15
  unsigned __int64 v15; // rdx
  __int128 v16; // xmm0
  _WORD *v17; // rax
  __int64 v18; // r9
  __int16 v19; // cx
  HANDLE ProcessHeap; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-30h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids, 0LL);
  }
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *((_QWORD *)this + 9);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 728);
    v10 = 2 * *(_DWORD *)(v9 - 16) + 2;
    v11 = 2 * *(_DWORD *)(v9 - 16) + 74;
    v12 = (char *)operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v12;
    if ( v12 )
    {
      *(_DWORD *)v12 = v11;
      if ( !a4 )
        a4 = &GUID_00000000_0000_0000_0000_000000000000;
      v15 = (unsigned __int64)v10 >> 1;
      v16 = (__int128)*a4;
      *((_DWORD *)v12 + 6) = v10;
      *((_DWORD *)v12 + 1) = 4;
      *(_OWORD *)(v12 + 28) = v16;
      *((struct _GUID *)v12 + 3) = *a3;
      v17 = v12 + 72;
      if ( v15 )
      {
        v13 = 2147483646 - v15;
        v18 = *(_QWORD *)(*((_QWORD *)this + 9) + 728LL) - (_QWORD)v17;
        while ( v13 + v15 )
        {
          v19 = *(_WORD *)((char *)v17 + v18);
          if ( !v19 )
            break;
          *v17++ = v19;
          if ( !--v15 )
          {
            --v17;
            break;
          }
        }
        *v17 = 0;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          23LL,
          &WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids,
          v14,
          *((_DWORD *)this + 20));
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20), v13);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnGroupingParamChanged", 696, MediaEvent);
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)MediaEvent;
}
