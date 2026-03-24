/*
 * XREFs of MmVerifierTrimMemory @ 0x140924C08
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x14093B048 (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400CAB20 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1401BC2A0 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3B90 (MiTrimAllSystemPagableMemory.c)
 */

char *MmVerifierTrimMemory()
{
  char *result; // rax
  int v1; // ebx
  char v2; // di
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+38h] [rbp+10h] BYREF

  result = (char *)MEMORY[0xFFFFF78000000320];
  if ( (MEMORY[0xFFFFF78000000320] & MmVerifierTrimFrequency) == 0 )
  {
    result = (char *)RtlpGetStackLimits((__int64)&v3, (__int64)&v4);
    v1 = 0;
    if ( (_BYTE)result )
    {
      result = &KeGetCurrentStackPointer()[-v3];
      if ( (unsigned __int64)result > 0x1A30 )
      {
        ++dword_14041A9A0;
        v2 = ViTrimSpaces;
        LOBYTE(v1) = ViTrimSpaces < 0;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041A9A4;
        }
        if ( (v2 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041A9BC;
        }
        if ( (v2 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041A9F4;
        }
      }
    }
  }
  return result;
}
