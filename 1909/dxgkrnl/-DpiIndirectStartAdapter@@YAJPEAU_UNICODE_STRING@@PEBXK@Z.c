/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02ABCA0
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C02AC3D8 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000D0E0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C004BA94 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  unsigned __int16 *StartContext; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v23; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int16 *v25; // [rsp+78h] [rbp+20h] BYREF

  v25 = 0LL;
  v4 = a3;
  StartContext = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v25);
  v23 = 0LL;
  v25 = StartContext;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v23);
  if ( !StartContext )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    v11 = -1073741801LL;
LABEL_9:
    *(_QWORD *)(v10 + 24) = v11;
    WdLogEvent5_WdError(v10);
    goto LABEL_11;
  }
  v12 = RtlStringCchCopyW(StartContext + 2, 0x104uLL, a1->Buffer);
  v16 = v12;
  if ( v12 >= 0 )
  {
    if ( (unsigned int)v4 <= 0x400 )
    {
      memmove(StartContext + 264, a2, v4);
      *((_DWORD *)StartContext + 131) = v4;
      *(_DWORD *)StartContext = 4;
      v18 = PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
              StartContext);
      v11 = v18;
      if ( v18 >= 0 )
      {
        v25 = 0LL;
        goto LABEL_11;
      }
      v10 = WdLogNewEntry5_WdError(v20, v19, v21);
      goto LABEL_9;
    }
    LODWORD(v11) = -1073741811;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdError(v17);
    LODWORD(v11) = v16;
  }
LABEL_11:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v25);
  return (unsigned int)v11;
}
