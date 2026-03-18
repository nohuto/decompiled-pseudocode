/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C0160E10
 * Callers:
 *     GreCreateHalftonePalette @ 0x1C029B37C (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C029BC50 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
