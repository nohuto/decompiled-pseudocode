/*
 * XREFs of MiCompactServiceTable @ 0x1407195C8
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MiSetImageProtection @ 0x1400DA5A4 (MiSetImageProtection.c)
 *     KeCompactServiceTable @ 0x14017396C (KeCompactServiceTable.c)
 *     RtlFindExportedRoutineByName @ 0x14067A080 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiCompactServiceTable(__int64 a1)
{
  int *ExportedRoutineByName; // rdi
  unsigned int *v3; // r14
  unsigned __int8 *v4; // rbp
  int *v5; // rsi
  unsigned int *v6; // r15
  unsigned __int8 *v7; // r12
  unsigned int v8; // r13d
  unsigned int v10; // [rsp+60h] [rbp+8h]

  ExportedRoutineByName = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTable");
  if ( !ExportedRoutineByName )
    return 3221225594LL;
  v3 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimit");
  if ( !v3 )
    return 3221225594LL;
  v4 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTable");
  if ( !v4 )
    return 3221225594LL;
  v5 = (int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceTableFilter");
  if ( !v5 )
    return 3221225594LL;
  v6 = (unsigned int *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pServiceLimitFilter");
  if ( !v6 )
    return 3221225594LL;
  v7 = (unsigned __int8 *)RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "W32pArgumentTableFilter");
  if ( !v7 )
    return 3221225594LL;
  v8 = 4 * *v3;
  MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v8, 4u);
  v10 = 4 * *v6;
  MiSetImageProtection(a1, (unsigned __int64)v5, v10, 4u);
  KeCompactServiceTable(v5, v7, *v6, 3LL, *(_QWORD *)(a1 + 48));
  KeCompactServiceTable(ExportedRoutineByName, v4, *v3, 1LL, *(_QWORD *)(a1 + 48));
  if ( *(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 144) )
  {
    MiSetImageProtection(a1, (unsigned __int64)ExportedRoutineByName, v8, 0x100u);
    MiSetImageProtection(a1, (unsigned __int64)v5, v10, 0x100u);
  }
  return 0LL;
}
