/*
 * XREFs of MmVerifierTrimMemory @ 0x140925C08
 * Callers:
 *     ViKeRaiseIrqlSanityChecks @ 0x14093C048 (ViKeRaiseIrqlSanityChecks.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x1401BC400 (KeGetCurrentStackPointer.c)
 *     MiTrimAllSystemPagableMemory @ 0x1402B3D80 (MiTrimAllSystemPagableMemory.c)
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
        ++dword_14041BA80;
        v2 = ViTrimSpaces;
        LOBYTE(v1) = ViTrimSpaces < 0;
        if ( (ViTrimSpaces & 1) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(0, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041BA84;
        }
        if ( (v2 & 2) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(1, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041BA9C;
        }
        if ( (v2 & 4) != 0 )
        {
          result = (char *)MiTrimAllSystemPagableMemory(2, v1);
          if ( (_DWORD)result == 1 )
            ++dword_14041BAD4;
        }
      }
    }
  }
  return result;
}
