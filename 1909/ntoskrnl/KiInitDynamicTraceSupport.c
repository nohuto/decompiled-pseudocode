/*
 * XREFs of KiInitDynamicTraceSupport @ 0x1409FEA8C
 * Callers:
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14001A980 (RtlLookupFunctionEntry.c)
 */

__int64 KiInitDynamicTraceSupport()
{
  int v0; // ebx
  __int64 result; // rax
  PRUNTIME_FUNCTION v2; // rax
  unsigned __int64 ImageBase; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v4; // [rsp+38h] [rbp+10h] BYREF

  v0 = 1;
  if ( !(_BYTE)KdDebuggerNotPresent )
    v0 = 7;
  result = TraceInitSystem(&v4, &KiDynamicTraceCallouts, &ControlPc);
  if ( (int)result >= 0 )
  {
    v2 = RtlLookupFunctionEntry(ControlPc, &ImageBase, 0LL);
    if ( v2 )
    {
      ControlPc = ImageBase + v2->BeginAddress;
      qword_140572A78 = ImageBase + v2->EndAddress;
    }
    result = (__int64)v4;
    *v4 = &KiDynamicTraceContext;
    KiDynamicTraceEnabled = v0;
  }
  return result;
}
