/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x14085BA8C
 * Callers:
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // rax
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v4 = MiObtainReferencedVadEx(a2, 0, (int *)&v8);
  if ( !v4 )
    return (unsigned int)v8;
  v6 = (*(_DWORD *)(v4 + 48) & 0x20000) == 0;
  v7 = -1073741800;
  LODWORD(v8) = -1073741800;
  if ( !v6 && (*(_DWORD *)(v4 + 64) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v4 + 72) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v7 = 0;
    *a3 = *(_QWORD *)(v4 + 72);
  }
  MiUnlockAndDereferenceVad((char *)v4);
  return v7;
}
