/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140894F0C
 * Callers:
 *     PsCallEnclave @ 0x1408CBB10 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a1;
  v4 = MiObtainReferencedVadEx(a2, 0, (int *)&v9);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)v9;
  v7 = *(_DWORD *)(v4 + 48);
  v8 = -1073741800;
  LODWORD(v9) = -1073741800;
  if ( (v7 & 0x100000) != 0 && (v7 & 0x1000000) == 0 && (v7 & 0x2000000) != 0 && (*(_DWORD *)(v5 + 64) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 72) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v8 = 0;
    *a3 = *(_QWORD *)(v5 + 72);
  }
  MiUnlockAndDereferenceVad((char *)v5);
  return v8;
}
