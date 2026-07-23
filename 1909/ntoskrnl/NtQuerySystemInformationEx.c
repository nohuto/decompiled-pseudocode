/*
 * XREFs of NtQuerySystemInformationEx @ 0x1405C9E60
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  char *v17; // rcx
  __int32 v19; // ecx
  __int32 v20; // ecx
  __int32 v21; // ecx
  __int32 v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass <= SystemProcessorCycleTimeInformation )
  {
    if ( SystemInformationClass == SystemProcessorCycleTimeInformation )
      goto LABEL_31;
    v19 = SystemInformationClass - 8;
    if ( !v19 )
      goto LABEL_31;
    v20 = v19 - 15;
    if ( !v20 )
      goto LABEL_31;
    v21 = v20 - 19;
    if ( !v21 )
      goto LABEL_31;
    v22 = v21 - 19;
    if ( !v22 )
      goto LABEL_31;
    v23 = v22 - 11;
    if ( v23 )
    {
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_31;
      v25 = v24 - 10;
      if ( !v25 )
        goto LABEL_31;
      v26 = v25 - 17;
      if ( !v26 )
        goto LABEL_31;
      if ( v26 != 7 )
        return -1073741821;
    }
    v13 = 3LL;
    goto LABEL_13;
  }
  v8 = SystemInformationClass - 121;
  if ( !v8 || (v9 = v8 - 20) == 0 || (v10 = v9 - 19) == 0 )
  {
LABEL_31:
    v13 = 1LL;
    goto LABEL_13;
  }
  v11 = v10 - 5;
  if ( !v11 || (v12 = v11 - 10) == 0 || (v13 = 3LL, (v14 = v12 - 3) == 0) )
  {
LABEL_12:
    v13 = 7LL;
    goto LABEL_13;
  }
  v15 = v14 - 2;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 && v16 != 28 )
      return -1073741821;
    goto LABEL_12;
  }
LABEL_13:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v13 & (unsigned __int64)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < InputBuffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(
           (unsigned int)SystemInformationClass,
           InputBuffer,
           InputBufferLength,
           SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
