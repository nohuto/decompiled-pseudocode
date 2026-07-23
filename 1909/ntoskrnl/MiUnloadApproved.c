/*
 * XREFs of MiUnloadApproved @ 0x140747580
 * Callers:
 *     MiDereferenceImports @ 0x1407474EC (MiDereferenceImports.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     RtlFindExportedRoutineByName @ 0x140680C80 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiUnloadApproved(__int64 a1)
{
  __int64 v1; // r8
  void *v2; // r9
  __int16 v3; // ax
  _QWORD *v5; // rax
  int v6; // ecx
  int (*ExportedRoutineByName)(void); // rax

  if ( *(_QWORD *)(a1 + 136) == 1LL )
    return 0LL;
  if ( (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 48)) == 1 )
  {
    v5 = MiSessionLookupImage((unsigned __int64)v2);
    v6 = *((_DWORD *)v5 + 15);
    if ( v6 != 1 )
    {
      *((_DWORD *)v5 + 15) = v6 - 1;
      return 0LL;
    }
  }
  else
  {
    v3 = *(_WORD *)(v1 + 108);
    if ( v3 != 1 )
    {
      *(_WORD *)(v1 + 108) = v3 - 1;
      return 0LL;
    }
  }
  if ( (*(_DWORD *)(v1 + 196) & 0x20) == 0 )
  {
    ExportedRoutineByName = (int (*)(void))RtlFindExportedRoutineByName(v2, "DllUnload");
    if ( !ExportedRoutineByName || ExportedRoutineByName() < 0 )
      return 0LL;
  }
  return 1LL;
}
