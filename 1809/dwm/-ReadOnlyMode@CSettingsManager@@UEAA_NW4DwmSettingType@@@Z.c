/*
 * XREFs of ?ReadOnlyMode@CSettingsManager@@UEAA_NW4DwmSettingType@@@Z @ 0x140004F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSettingsManager::ReadOnlyMode(__int64 a1, int a2)
{
  bool v4; // zf
  unsigned __int8 v5; // si

  AcquireSRWLockShared((PSRWLOCK)(a1 + 40));
  if ( a2 )
    v4 = *(_QWORD *)(a1 + 16) == 0LL;
  else
    v4 = *(_QWORD *)(a1 + 8) == 0LL;
  v5 = v4 | *(_BYTE *)(a1 + 24);
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 40));
  return v5;
}
