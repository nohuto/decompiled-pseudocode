/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A1170
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_180079B64 @ 0x180079B64 (sub_180079B64.c)
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int8 v0; // cl
  char v3; // zf
  unsigned __int32 v4; // eax

  if ( MEMORY[0x7FFE0295] )
  {
    __asm { rdpid   rcx }
    return (unsigned __int8)_RCX;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    return v0;
  }
  else
  {
    v4 = __segmentlimit(0x53u);
    if ( v3 )
      return v4 >> 14;
    else
      return ZwGetCurrentProcessorNumber();
  }
}
