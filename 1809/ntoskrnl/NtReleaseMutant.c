/*
 * XREFs of NtReleaseMutant @ 0x1406998D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeReleaseMutant @ 0x1400BF950 (KeReleaseMutant.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtReleaseMutant(HANDLE MutantHandle, PLONG ReleaseCount)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v5; // edi
  PVOID v6; // rsi
  LONG v7; // r15d
  __int64 v9; // rcx
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReleaseCount && PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ReleaseCount < 0x7FFFFFFF0000LL )
      v9 = (__int64)ReleaseCount;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  v5 = ObReferenceObjectByHandle(MutantHandle, 0, ExMutantObjectType, PreviousMode, &Object, 0LL);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v7 = KeReleaseMutant((PRKMUTANT)Object, 1, 0, 0);
    ObfDereferenceObject(v6);
    if ( ReleaseCount )
      *ReleaseCount = v7;
  }
  return v5;
}
