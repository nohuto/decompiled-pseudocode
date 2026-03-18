/*
 * XREFs of xxxValidateClassAndSize @ 0x1C0165268
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01F61A0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C004BDB4 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0050668 (xxxClientFreeWindowClassExtraBytes.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     PopW32ThreadLock @ 0x1C010AC60 (PopW32ThreadLock.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        HICON a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // r10
  __int16 v9; // ax
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rcx
  size_t v21; // rsi
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF

  *a7 = 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v8 + 232) & 0x800) == 0 )
  {
    v9 = *(_WORD *)(v8 + 42);
    if ( (v9 & 0xC000) == 0 )
    {
      if ( v9 == a5 )
        return 1LL;
      if ( !v9 )
      {
        if ( (_DWORD)a2 != a6 )
        {
          *a7 = xxxDefWindowProc((struct tagWND *)a1, a2, a3, a4);
          return 0LL;
        }
        v11 = *(_DWORD *)(v8 + 252);
        v12 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x3FFFu) - 666) + 328);
        if ( v11 + 320 >= v12 )
        {
          v25 = *(_QWORD *)(a1 + 280);
          if ( v25 )
          {
            v26 = 0LL;
            if ( v11 )
            {
              while ( !*(_BYTE *)((unsigned int)v26 + v25) )
              {
                v26 = (unsigned int)(v26 + 1);
                if ( (unsigned int)v26 >= v11 )
                  goto LABEL_38;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
              v8 = *(_QWORD *)(a1 + 40);
            }
LABEL_38:
            memset(*(void **)(a1 + 280), 0, *(unsigned int *)(v8 + 252));
          }
        }
        else
        {
          if ( v11 + *(_DWORD *)(v8 + 200) + 320 < v12 )
            return 0LL;
          memset(v27, 0, 24);
          v13 = v12 - 320;
          v14 = Win32AllocPoolZInit(v13, 1937208149LL);
          v15 = v14;
          if ( !v14 )
            return 0LL;
          PushW32ThreadLock(v14, v27, (__int64)Win32FreePool);
          v17 = *(_QWORD *)(a1 + 280);
          if ( v17 )
          {
            v18 = 0LL;
            v19 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL);
            if ( v19 )
            {
              while ( !*(_BYTE *)((unsigned int)v18 + v17) )
              {
                v18 = (unsigned int)(v18 + 1);
                if ( (unsigned int)v18 >= v19 )
                  goto LABEL_18;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
            }
LABEL_18:
            Win32FreePool(*(_QWORD *)(a1 + 280));
            *(_QWORD *)(a1 + 280) = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) = 0;
          v20 = *(_QWORD *)(a1 + 40);
          v21 = *(unsigned int *)(v20 + 200);
          if ( (_DWORD)v21 )
          {
            v22 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v21, a1);
            if ( !v22 || (v20 = *(_QWORD *)(a1 + 40), v16 = 49152LL, (*(_WORD *)(v20 + 42) & 0xC000) != 0) )
            {
LABEL_21:
              PopAndFreeAlwaysW32ThreadLock((__int64)v27, v16, v17);
              return 0LL;
            }
          }
          else
          {
            v22 = 0LL;
          }
          v23 = *(_QWORD *)(v20 + 296);
          if ( v23 )
          {
            if ( v22 )
            {
              memmove(v22, (const void *)(v23 + v13), v21);
              v20 = *(_QWORD *)(a1 + 40);
            }
            v24 = *(_QWORD *)(v20 + 296);
            *(_QWORD *)(v20 + 296) = v22;
            *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v21;
            xxxClientFreeWindowClassExtraBytes(a1, v24);
            if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0xC000) != 0 )
              goto LABEL_21;
          }
          else
          {
            *(_QWORD *)(v20 + 296) = v22;
            *(_DWORD *)(*(_QWORD *)(a1 + 40) + 200LL) = v21;
          }
          PopW32ThreadLock(v27, v16, v17);
          *(_QWORD *)(a1 + 280) = v15;
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 252LL) = v13;
        }
        *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) = a5;
        return 1LL;
      }
    }
  }
  return 0LL;
}
