/*
 * XREFs of NtSetInformationDebugObject @ 0x140811380
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationDebugObject(
        HANDLE DebugObject,
        DEBUGOBJECTINFOCLASS InformationClass,
        PVOID Information,
        ULONG InformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r11
  char *v8; // rcx
  __int64 v9; // rdx
  PULONG v10; // rcx
  NTSTATUS result; // eax
  int v12; // esi
  char *v13; // rdi
  unsigned int v14; // edx
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
  {
    v10 = ReturnLength;
LABEL_14:
    if ( v10 )
      *v10 = 0;
    goto LABEL_16;
  }
  if ( InformationLength )
  {
    if ( ((unsigned __int8)Information & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)Information + InformationLength;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < Information )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    v9 = 0x7FFFFFFF0000LL;
  }
  v10 = ReturnLength;
  if ( ReturnLength )
  {
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      v9 = (__int64)ReturnLength;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    goto LABEL_14;
  }
LABEL_16:
  if ( InformationClass != DebugObjectKillProcessOnExitInformation )
    return -1073741811;
  if ( InformationLength == 4 )
  {
    v12 = *(_DWORD *)Information;
    if ( (*(_DWORD *)Information & 0xFFFFFFFE) != 0 )
    {
      return -1073741811;
    }
    else
    {
      result = ObReferenceObjectByHandle(DebugObject, 4u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
      if ( result >= 0 )
      {
        v13 = (char *)Object;
        ExAcquireFastMutex((PFAST_MUTEX)((char *)Object + 24));
        v14 = *((_DWORD *)v13 + 24) | 2;
        if ( (v12 & 1) == 0 )
          v14 = *((_DWORD *)v13 + 24) & 0xFFFFFFFD;
        *((_DWORD *)v13 + 24) = v14;
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v13 + 24));
        ObfDereferenceObject(v13);
        return 0;
      }
    }
  }
  else
  {
    if ( v10 )
      *v10 = 4;
    return -1073741820;
  }
  return result;
}
