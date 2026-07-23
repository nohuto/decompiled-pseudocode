/*
 * XREFs of MiHandleEnclaveFault @ 0x14085A27C
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = MiObtainReferencedVadEx(a1, 2, &v4);
  v2 = -1073741819;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 48) & 0x20000) != 0 && (*(_DWORD *)(v1 + 64) & 1) != 0 && (*(_BYTE *)(v1 + 72) & 1) != 0 )
      v2 = -1073740638;
    MiUnlockAndDereferenceVadShared((char *)v1);
  }
  return v2;
}
