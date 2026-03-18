/*
 * XREFs of InitContext @ 0x1C0020FE8
 * Callers:
 *     NewContext @ 0x1C0020EEC (NewContext.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

PVOID __fastcall InitContext(char *DeferredContext)
{
  char *v2; // rax
  size_t v3; // rbx
  PVOID result; // rax

  memset(DeferredContext, 0, 0x1E0uLL);
  v2 = &DeferredContext[(unsigned int)gdwCtxtBlkSize];
  *(_DWORD *)DeferredContext = 1415074883;
  *((_QWORD *)DeferredContext + 1) = v2;
  *((_QWORD *)DeferredContext + 40) = DeferredContext + 480;
  KeInitializeDpc((PRKDPC)DeferredContext + 4, TimeoutCallback, DeferredContext);
  KeInitializeTimer((PKTIMER)DeferredContext + 3);
  v3 = (unsigned int)(*((_DWORD *)DeferredContext + 2) - (_DWORD)DeferredContext - 480);
  memset(DeferredContext + 480, 0, v3);
  *((_DWORD *)DeferredContext + 120) = 1346454856;
  *((_QWORD *)DeferredContext + 61) = &DeferredContext[v3 + 480];
  *((_QWORD *)DeferredContext + 64) = DeferredContext + 536;
  *((_QWORD *)DeferredContext + 66) = DeferredContext + 520;
  *((_QWORD *)DeferredContext + 65) = DeferredContext + 520;
  *((_QWORD *)DeferredContext + 45) = 0LL;
  *((_QWORD *)DeferredContext + 47) = RestartCtxtPassive;
  *((_QWORD *)DeferredContext + 48) = DeferredContext;
  *((_QWORD *)DeferredContext + 50) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 49) = DeferredContext + 392;
  *((_QWORD *)DeferredContext + 7) = DeferredContext + 48;
  *((_QWORD *)DeferredContext + 6) = DeferredContext + 48;
  *((_QWORD *)DeferredContext + 5) = DeferredContext + 32;
  *((_QWORD *)DeferredContext + 4) = DeferredContext + 32;
  *((_QWORD *)DeferredContext + 62) = DeferredContext + 480;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA8uLL, 0x646C6D61u);
  *((_QWORD *)DeferredContext + 58) = result;
  if ( result )
  {
    memset(result, 0, 0xA8uLL);
    **((_QWORD **)DeferredContext + 58) = DeferredContext;
    *(_DWORD *)(*((_QWORD *)DeferredContext + 58) + 16LL) = AmliWatchdogAction;
    result = (PVOID)MEMORY[0xFFFFF78000000008];
    *((_QWORD *)DeferredContext + 57) = MEMORY[0xFFFFF78000000008];
    DeferredContext[472] = 0;
  }
  return result;
}
