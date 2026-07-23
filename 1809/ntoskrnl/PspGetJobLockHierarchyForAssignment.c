/*
 * XREFs of PspGetJobLockHierarchyForAssignment @ 0x140606D44
 * Callers:
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     <none>
 */

void __fastcall PspGetJobLockHierarchyForAssignment(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r9d
  __int64 v6; // rax
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  __int64 v10; // rax
  int v11; // r9d
  int v12; // r9d

  v5 = a4 - 1;
  if ( !v5 )
    goto LABEL_2;
  v7 = v5 - 1;
  if ( !v7 )
  {
    *(_DWORD *)a5 = 0;
    return;
  }
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_2;
  v9 = v8 - 1;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 944);
    *(_DWORD *)a5 = 2;
    *(_QWORD *)(a5 + 8) = v10;
    *(_BYTE *)(a5 + 16) = 1;
    *(_QWORD *)(a5 + 24) = a1;
    *(_BYTE *)(a5 + 32) = 0;
    return;
  }
  v11 = v9 - 1;
  if ( !v11 )
    goto LABEL_13;
  v12 = v11 - 1;
  if ( !v12 )
  {
LABEL_2:
    v6 = a5;
    *(_DWORD *)a5 = 1;
    *(_QWORD *)(a5 + 8) = a1;
LABEL_3:
    *(_BYTE *)(v6 + 16) = 1;
    return;
  }
  if ( v12 == 1 )
  {
LABEL_13:
    v6 = a5;
    *(_DWORD *)a5 = 2;
    *(_QWORD *)(a5 + 8) = a3;
    *(_QWORD *)(a5 + 24) = a1;
    *(_BYTE *)(a5 + 32) = 0;
    goto LABEL_3;
  }
}
