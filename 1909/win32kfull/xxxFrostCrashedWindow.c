/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C01F9444
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C022B540 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F90EC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F9348 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 */

unsigned __int64 __fastcall xxxFrostCrashedWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  struct _KTHREAD **v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *v7; // rcx
  unsigned int ThreadProcessId; // eax
  PETHREAD *v9; // rcx
  unsigned int ThreadId; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // edi
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r9
  int v25; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+24h] [rbp-34h]
  unsigned int v27; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v28; // [rsp+30h] [rbp-28h]
  __int64 v29; // [rsp+34h] [rbp-24h]
  unsigned __int64 v30; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v30 = 0LL;
    v25 = 2;
    v7 = *v5;
    v26 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v27 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v28 = ThreadId;
    v29 = a2;
    v13 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v25, v12);
    LOBYTE(v14) = 1;
    v15 = v13;
    v17 = HMValidateHandleNoSecure(v11, v14, v16);
    if ( v15 )
    {
      if ( v17 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v17) )
        {
          if ( GetProp(v18, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
          {
            v21 = v30;
            if ( v30 )
            {
              LOBYTE(v19) = 1;
              v22 = HMValidateHandleNoSecure(v30, v19, v20);
              if ( v22 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v22)
                  && GetProp(v23, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
                {
                  return v21;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
