/*
 * XREFs of PepIdleCancel @ 0x1C000BF50
 * Callers:
 *     PepIdlePrepare @ 0x1C000BAB0 (PepIdlePrepare.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PepIdleCancel(_QWORD *BugCheckParameter4, int a2)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(BugCheckParameter3) = a2;
  result = PoFxProcessorNotification(*BugCheckParameter4, 4LL, &BugCheckParameter3);
  if ( (int)result < 0 )
    KeBugCheckEx(0x143u, 1uLL, 4uLL, (ULONG_PTR)&BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  return result;
}
