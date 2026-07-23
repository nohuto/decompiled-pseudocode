/*
 * XREFs of AuthzBasepProbeAndInsertTailList @ 0x140584BD8
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C110C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

__int64 __fastcall AuthzBasepProbeAndInsertTailList(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 **v4; // rsi

  v4 = *(unsigned __int64 ***)(a1 + 8);
  if ( a1 <= 0x7FFFFFFEFFFFLL )
    ProbeForWrite(*(volatile void **)(a1 + 8), 0x10uLL, 4u);
  *a2 = a1;
  a2[1] = (unsigned __int64)v4;
  *v4 = a2;
  *(_QWORD *)(a1 + 8) = a2;
  return 0LL;
}
