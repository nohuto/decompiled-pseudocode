/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800901A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180020CE0 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 */

char __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  __int64 v2; // rax
  char v3; // bl
  LegacyInputSinkData *LegacyInputSinkData; // rax
  const struct _LUID *Luid; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v2 = *((_QWORD *)this + 14);
  v3 = 0;
  if ( !v2 || !*(_BYTE *)(v2 + 384) || (int)NtQueryCompositionInputSinkLuid(a2, &v8) < 0 )
    return 0;
  LegacyInputSinkData = InputSite::GetLegacyInputSinkData(*((InputSite **)this + 14));
  Luid = LegacyInputSinkData::GetLuid(LegacyInputSinkData);
  if ( v9 == Luid->HighPart )
    return v8 == Luid->LowPart;
  return v3;
}
