/*
 * XREFs of NtQuerySystemInformationEx @ 0x1406AA8A0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65C0 (ExRaiseDatatypeMisalignment.c)
 */

int __fastcall NtQuerySystemInformationEx(
        signed int a1,
        LOGICAL_PROCESSOR_RELATIONSHIP *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx

  if ( !a2 || !a3 )
    return -1073741811;
  if ( a1 <= 108 )
  {
    if ( a1 == 108 )
      goto LABEL_31;
    v18 = a1 - 8;
    if ( !v18 )
      goto LABEL_31;
    v19 = v18 - 15;
    if ( !v19 )
      goto LABEL_31;
    v20 = v19 - 19;
    if ( !v20 )
      goto LABEL_31;
    v21 = v20 - 19;
    if ( !v21 )
      goto LABEL_31;
    v22 = v21 - 11;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_31;
      v24 = v23 - 10;
      if ( !v24 )
        goto LABEL_31;
      v25 = v24 - 17;
      if ( !v25 )
        goto LABEL_31;
      if ( v25 != 7 )
        return -1073741821;
    }
    v13 = 3LL;
    goto LABEL_13;
  }
  v8 = a1 - 121;
  if ( !v8 || (v9 = v8 - 20) == 0 || (v10 = v9 - 19) == 0 )
  {
LABEL_31:
    v13 = 1LL;
    goto LABEL_13;
  }
  v11 = v10 - 5;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 - 10;
  if ( !v12 )
    goto LABEL_12;
  v13 = 3LL;
  v14 = v12 - 3;
  if ( !v14 )
    goto LABEL_12;
  v15 = v14 - 2;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
LABEL_12:
      v13 = 7LL;
      goto LABEL_13;
    }
    return -1073741821;
  }
LABEL_13:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (v13 & (unsigned __int64)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (unsigned __int64)a2 + a3;
    if ( v16 > 0x7FFFFFFF0000LL || v16 < (unsigned __int64)a2 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(a1, a2, a3, a4, a5, a6);
}
