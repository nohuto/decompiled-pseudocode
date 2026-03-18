/*
 * XREFs of xxxFrostCrashedWindow @ 0x1C01F96F4
 * Callers:
 *     NtUserFrostCrashedWindow @ 0x1C022BB60 (NtUserFrostCrashedWindow.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F939C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01F95F8 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
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
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r9
  int v27; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+24h] [rbp-34h]
  unsigned int v29; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v30; // [rsp+30h] [rbp-28h]
  __int64 v31; // [rsp+34h] [rbp-24h]
  unsigned __int64 v32; // [rsp+3Ch] [rbp-1Ch]

  v4 = 0LL;
  if ( (unsigned int)_ShouldFrostCrashedWindow((struct tagWND *)a1) )
  {
    v5 = *(struct _KTHREAD ***)(a1 + 16);
    v6 = *(_QWORD *)a1;
    v32 = 0LL;
    v27 = 2;
    v7 = *v5;
    v28 = v6;
    ThreadProcessId = (unsigned int)PsGetThreadProcessId(v7);
    v9 = *(PETHREAD **)(a1 + 16);
    v29 = ThreadProcessId;
    ThreadId = (unsigned int)PsGetThreadId(*v9);
    v11 = *(_QWORD *)a1;
    v30 = ThreadId;
    v31 = a2;
    v13 = xxxSendSyncGHOSTINFO((struct _GHOSTINFO *)&v27, v12);
    LOBYTE(v14) = 1;
    v15 = v13;
    v18 = HMValidateHandleNoSecure(v11, v14, v16, v17);
    if ( v15 )
    {
      if ( v18 )
      {
        if ( !(unsigned int)IsWindowBeingDestroyed(v18) )
        {
          if ( GetProp(v19, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
          {
            v23 = v32;
            if ( v32 )
            {
              LOBYTE(v20) = 1;
              v24 = HMValidateHandleNoSecure(v32, v20, v21, v22);
              if ( v24 )
              {
                if ( !(unsigned int)IsWindowBeingDestroyed(v24)
                  && GetProp(v25, *(unsigned __int16 *)(gpsi + 1378LL), 1LL) )
                {
                  return v23;
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
