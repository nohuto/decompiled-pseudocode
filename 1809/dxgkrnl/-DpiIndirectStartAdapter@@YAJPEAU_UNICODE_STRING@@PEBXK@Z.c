/*
 * XREFs of ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C026F4F4
 * Callers:
 *     DxgkHandleIndirectEscape @ 0x1C026FACC (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0044298 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 */

__int64 __fastcall DpiIndirectStartAdapter(struct _UNICODE_STRING *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  unsigned __int16 *StartContext; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rcx
  void *v17; // [rsp+40h] [rbp-18h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-10h] BYREF
  unsigned __int16 *v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v4 = a3;
  StartContext = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x610uLL, 0x74727044u);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v19);
  v17 = 0LL;
  v19 = StartContext;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v17);
  if ( !StartContext )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741801LL;
LABEL_9:
    *(_QWORD *)(v8 + 24) = v9;
    WdLogEvent5_WdError(v8);
    goto LABEL_11;
  }
  v10 = RtlStringCchCopyW(StartContext + 2, 0x104uLL, a1->Buffer);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( (unsigned int)v4 <= 0x400 )
    {
      memmove(StartContext + 264, a2, v4);
      *((_DWORD *)StartContext + 131) = v4;
      *(_DWORD *)StartContext = 4;
      v14 = PsCreateSystemThread(
              &ThreadHandle,
              0x1FFFFFu,
              0LL,
              0LL,
              0LL,
              (PKSTART_ROUTINE)DpiFdoStartAdapterThread,
              StartContext);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v19 = 0LL;
        goto LABEL_11;
      }
      v8 = WdLogNewEntry5_WdError(v15);
      goto LABEL_9;
    }
    LODWORD(v9) = -1073741811;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
    LODWORD(v9) = v12;
  }
LABEL_11:
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v19);
  return (unsigned int)v9;
}
