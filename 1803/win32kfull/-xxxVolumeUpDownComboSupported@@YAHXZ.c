/*
 * XREFs of ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01B3D5C
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01B3CD8 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 xxxVolumeUpDownComboSupported(void)
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( gPlatformRole != 8 )
    return 0LL;
  v1 = 0;
  CBaseInput::EnumDevices(
    gpHidInput,
    &v1,
    (bool (*)(struct DEVICEINFO *const, void *))lambda_4018fcb82f048512f6b00150f3d0306c_::_lambda_invoker_cdecl_);
  result = 1LL;
  if ( v1 > 1 )
    return 0LL;
  return result;
}
