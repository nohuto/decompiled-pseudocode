/*
 * XREFs of NtTerminateEnclave @ 0x1408955D0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050810 (MiObtainReferencedVadEx.c)
 *     MiTerminateEnclave @ 0x1408945A8 (MiTerminateEnclave.c)
 */

__int64 __fastcall NtTerminateEnclave(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v5; // rax
  char *v6; // rdi
  unsigned int v7; // ebx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( (a2 & 0xFFFFFFFA) != 0 )
    return 3221225712LL;
  v5 = MiObtainReferencedVadEx(a1, 0, (int *)&v8);
  v6 = (char *)v5;
  if ( !v5 )
    return v8;
  if ( (*(_DWORD *)(v5 + 48) & 0x3100000) == 0x2100000
    && (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) << 12 == a1 )
  {
    v7 = MiTerminateEnclave((__int64)KeGetCurrentThread()->ApcState.Process, v5, a2);
  }
  else
  {
    v7 = -1073741800;
  }
  MiUnlockAndDereferenceVad(v6);
  return v7;
}
