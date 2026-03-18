/*
 * XREFs of xxxValidateClassAndSize @ 0x1C015D924
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     xxxSwitchWndProc @ 0x1C01E02C0 (xxxSwitchWndProc.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0016654 (xxxClientAllocWindowClassExtraBytes.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C010ACC0 (xxxClientFreeWindowClassExtraBytes.c)
 *     PopW32ThreadLock @ 0x1C0124630 (PopW32ThreadLock.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxValidateClassAndSize(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int16 a5,
        int a6,
        __int64 *a7)
{
  __int64 v8; // rcx
  __int16 v9; // ax
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // rcx
  size_t v22; // rsi
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD v28[4]; // [rsp+20h] [rbp-48h] BYREF

  *a7 = 0LL;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_DWORD *)(v8 + 232) & 0x800) == 0 )
  {
    v9 = *(_WORD *)(v8 + 42);
    if ( (v9 & 0xD000) == 0 )
    {
      if ( v9 == a5 )
        return 1LL;
      if ( !v9 )
      {
        if ( a2 != a6 )
        {
          *a7 = xxxDefWindowProc(a1, a2, a3, a4);
          return 0LL;
        }
        *(_WORD *)(v8 + 42) = 4096;
        v11 = *((_QWORD *)a1 + 5);
        v12 = *(_DWORD *)(v11 + 252);
        v13 = *(unsigned __int16 *)(gpsi + 2LL * ((a5 & 0x2FFFu) - 666) + 328);
        if ( v12 + 320 >= v13 )
        {
          v26 = *((_QWORD *)a1 + 33);
          if ( v26 )
          {
            v27 = 0LL;
            if ( v12 )
            {
              while ( !*(_BYTE *)((unsigned int)v27 + v26) )
              {
                v27 = (unsigned int)(v27 + 1);
                if ( (unsigned int)v27 >= v12 )
                  goto LABEL_40;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
            }
LABEL_40:
            memset(*((void **)a1 + 33), 0, *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL));
          }
        }
        else
        {
          if ( *(_DWORD *)(v11 + 200) + v12 + 320 < v13 )
          {
            *(_WORD *)(v11 + 42) &= ~0x1000u;
            return 0LL;
          }
          v14 = v13 - 320;
          v15 = Win32AllocPoolZInit(v14, 1937208149LL);
          v16 = v15;
          if ( !v15 )
          {
LABEL_13:
            *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
            return 0LL;
          }
          PushW32ThreadLock(v15, v28, (__int64)Win32FreePool);
          v18 = *((_QWORD *)a1 + 33);
          if ( v18 )
          {
            v19 = 0LL;
            v20 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL);
            if ( v20 )
            {
              while ( !*(_BYTE *)((unsigned int)v19 + v18) )
              {
                v19 = (unsigned int)(v19 + 1);
                if ( (unsigned int)v19 >= v20 )
                  goto LABEL_20;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v19);
            }
LABEL_20:
            Win32FreePool(*((_QWORD *)a1 + 33));
            *((_QWORD *)a1 + 33) = 0LL;
          }
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = 0;
          v21 = *((_QWORD *)a1 + 5);
          v22 = *(unsigned int *)(v21 + 200);
          if ( (_DWORD)v22 )
          {
            v23 = (void *)xxxClientAllocWindowClassExtraBytes((unsigned int)v22, (__int64)a1);
            if ( !v23 || (v21 = *((_QWORD *)a1 + 5), (*(_WORD *)(v21 + 42) & 0xC000) != 0) )
            {
LABEL_23:
              PopAndFreeAlwaysW32ThreadLock((__int64)v28, v17);
              goto LABEL_13;
            }
          }
          else
          {
            v23 = 0LL;
          }
          v24 = *(_QWORD *)(v21 + 296);
          if ( v24 )
          {
            if ( v23 )
            {
              memmove(v23, (const void *)(v24 + v14), v22);
              v21 = *((_QWORD *)a1 + 5);
            }
            v25 = *(_QWORD *)(v21 + 296);
            *(_QWORD *)(v21 + 296) = v23;
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v22;
            xxxClientFreeWindowClassExtraBytes((__int64)a1, v25);
            if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0xC000) != 0 )
              goto LABEL_23;
          }
          else
          {
            *(_QWORD *)(v21 + 296) = v23;
            *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) = v22;
          }
          PopW32ThreadLock(v28, v17);
          *((_QWORD *)a1 + 33) = v16;
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = v14;
        }
        *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = a5;
        *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) &= ~0x1000u;
        return 1LL;
      }
    }
  }
  return 0LL;
}
