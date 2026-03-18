/*
 * XREFs of ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180159C04
 * Callers:
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180175D4C (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x18001EC1C (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

void __fastcall MilFailFastForHR(int a1, void *a2)
{
  ULONG_PTR v2; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.ExceptionAddress = a2;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
}
