/*
 * XREFs of ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0133B5C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerQFrame *__fastcall CTouchProcessor::AllocPointerQFrameList(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  char *v5; // rax
  char *v6; // rdi
  _BYTE *v7; // rbx

  v3 = (unsigned int)a2;
  if ( this[8] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(_DWORD)v3 )
    return 0LL;
  v4 = v3;
  if ( (unsigned __int64)(224 * v3) > 0xFFFFFFFF || !(224 * (_DWORD)v3) )
    return 0LL;
  v5 = (char *)Win32AllocPoolZInit((unsigned int)(224 * v3), 0x51707355u);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 16;
    do
    {
      *((_DWORD *)v7 - 4) = -1;
      memset(v7, 0, 0xB0uLL);
      v7[176] = 0;
      v7 += 224;
      --v4;
    }
    while ( v4 );
  }
  return (struct CPointerQFrame *)v6;
}
