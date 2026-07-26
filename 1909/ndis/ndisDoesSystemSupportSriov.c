/*
 * XREFs of ndisDoesSystemSupportSriov @ 0x1C00328EC
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C0032B80 (WPP_RECORDER_SF_S.c)
 */

char ndisDoesSystemSupportSriov()
{
  const wchar_t *v5; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      129,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids);
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 0x40000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x40000006 )
      {
        _RAX = 1073741830LL;
        __asm { cpuid }
        LOBYTE(_RAX) = _RAX & 0x30;
        ndisSystemSupportsSriov = (_BYTE)_RAX == 48;
      }
    }
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      LOBYTE(_RAX) = WPP_RECORDER_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 8),
                       4,
                       26,
                       130,
                       (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v5 = (const wchar_t *)L"No";
    LOBYTE(_RDX) = 4;
    LOBYTE(_RAX) = WPP_RECORDER_SF_S(
                     *((_QWORD *)WPP_GLOBAL_Control + 8),
                     _RDX,
                     26,
                     131,
                     (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
                     (__int64)v5);
  }
  return _RAX;
}
