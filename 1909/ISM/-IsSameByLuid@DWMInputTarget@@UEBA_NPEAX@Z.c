/*
 * XREFs of ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800C7400
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180001E00 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1800C77B8 (--8@YA_NAEBU_LUID@@0@Z.c)
 */

bool __fastcall DWMInputTarget::IsSameByLuid(DWMInputTarget *this, void *a2)
{
  __int64 v2; // rax
  const struct _LUID *Luid; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( !v2 || !*(_BYTE *)(v2 + 384) || (int)NtQueryCompositionInputSinkLuid(a2, &v8) < 0 )
    return 0;
  if ( !*(_BYTE *)(*((_QWORD *)this + 14) + 384LL) )
  {
    v7 = 0uLL;
    pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  Luid = LegacyInputSinkData::GetLuid((LegacyInputSinkData *)(*((_QWORD *)this + 14) + 32LL));
  return operator==(&v8, Luid);
}
