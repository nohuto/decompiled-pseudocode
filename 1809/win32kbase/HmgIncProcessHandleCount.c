/*
 * XREFs of HmgIncProcessHandleCount @ 0x1C009CC04
 * Callers:
 *     HmgAlloc @ 0x1C0001010 (HmgAlloc.c)
 *     HmgSetOwner @ 0x1C001E160 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C001EEA0 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     GreSetBrushOwner @ 0x1C0042FF0 (GreSetBrushOwner.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00AAACC (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall HmgIncProcessHandleCount(__int64 a1, int a2, int a3)
{
  void *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct _KPROCESS *v10; // r9
  __int64 ProcessWin32Process; // rax
  __int64 v12; // r9
  PEPROCESS Process; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  __int64 v16; // [rsp+40h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  PEPROCESS *p_Process; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]
  __int64 *v21; // [rsp+80h] [rbp+37h]
  int v22; // [rsp+88h] [rbp+3Fh]
  int v23; // [rsp+8Ch] [rbp+43h]

  v3 = (void *)(int)a1;
  v4 = 1;
  if ( (_DWORD)a1 && (_DWORD)a1 != -2147483630 )
  {
    GreAcquireHmgrSemaphore(a1, a2, a3);
    if ( (_DWORD)v3 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_DWORD *)(CurrentProcessWin32Process + 60) < gProcessHandleQuota )
        {
          HmgpIncProcessHandleCountEx((struct _W32PROCESS *)CurrentProcessWin32Process);
        }
        else
        {
          v4 = 0;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 292) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 292) = 1;
            if ( hProvider > 5u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
              {
                v20 = 0;
                v23 = 0;
                p_Process = &Process;
                v19 = 8;
                v22 = 8;
                Process = v10;
                v15 = 0x1000000LL;
                v21 = &v15;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DF7F, 0LL, 0LL, 4u, &pData);
              }
            }
          }
        }
      }
    }
    else if ( PsLookupProcessByProcessId(v3, &Process) >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(Process);
      if ( ProcessWin32Process )
      {
        if ( *(_DWORD *)(ProcessWin32Process + 60) < gProcessHandleQuota )
        {
          HmgpIncProcessHandleCountEx((struct _W32PROCESS *)ProcessWin32Process);
        }
        else
        {
          v4 = 0;
          if ( !*(_DWORD *)(ProcessWin32Process + 292) )
          {
            *(_DWORD *)(ProcessWin32Process + 292) = 1;
            if ( hProvider > 5u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
              {
                v20 = 0;
                v23 = 0;
                p_Process = (PEPROCESS *)&v15;
                v19 = 8;
                v22 = 8;
                v15 = v12;
                v16 = 0x1000000LL;
                v21 = &v16;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019DF7F, 0LL, 0LL, 4u, &pData);
              }
            }
          }
        }
      }
      ObfDereferenceObject(Process);
    }
    GreReleaseHmgrSemaphore(v8, v7, v9);
  }
  return v4;
}
