/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0160F6C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0163C70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0164418 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rsi
  char *v6; // rax
  char *v7; // rdi
  _BYTE *v8; // rbx

  v3 = (unsigned int)a2;
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(_DWORD)v3 )
    return 0LL;
  v4 = 168 * v3;
  v5 = v3;
  if ( (unsigned __int64)(168 * v3) > 0xFFFFFFFF || !v4 )
    return 0LL;
  v6 = (char *)Win32AllocPoolZInit(v4, 1366324053LL);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 + 16;
    do
    {
      *((_DWORD *)v8 - 4) = -1;
      memset(v8, 0, 0x78uLL);
      v8[120] = 0;
      v8 += 168;
      --v5;
    }
    while ( v5 );
  }
  return (struct CPointerQFrame *)v7;
}
