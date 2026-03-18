/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C01E38B8
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C0213E10 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01E2938 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01E3324 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
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
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r9
  int v23; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+24h] [rbp-34h]
  unsigned int v25; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v26; // [rsp+30h] [rbp-28h]
  __int64 v27; // [rsp+34h] [rbp-24h]
  unsigned __int64 v28; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v28 = 0LL;
    v23 = 2;
    v7 = *v5;
    v24 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v25 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v26 = ThreadId;
    v27 = a2;
    v13 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v23, v12);
    LOBYTE(v14) = 1;
    v15 = v13;
    v16 = HMValidateHandleNoSecure(v11, v14);
    if ( v15 )
    {
      if ( v16 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v16) )
        {
          if ( GetProp(v17, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
          {
            v19 = v28;
            if ( v28 )
            {
              LOBYTE(v18) = 1;
              v20 = HMValidateHandleNoSecure(v28, v18);
              if ( v20 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v20)
                  && GetProp(v21, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
                {
                  return v19;
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
