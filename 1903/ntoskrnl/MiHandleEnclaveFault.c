/*
 * XREFs of MiHandleEnclaveFault @ 0x140892F00
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140053990 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  v2 = -1073741819;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 48) & 0x3100000) == 0x2100000
      && (*(_DWORD *)(v1 + 64) & 1) != 0
      && (*(_BYTE *)(v1 + 72) & 1) != 0 )
    {
      v2 = -1073740638;
    }
    MiUnlockAndDereferenceVadShared((char *)v1);
  }
  return v2;
}
