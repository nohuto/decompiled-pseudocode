/*
 * XREFs of SdbpMatchDeviceString @ 0x140923AB8
 * Callers:
 *     SdbpMatchCpu @ 0x140775F18 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140775F6C (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x140775FC0 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140776014 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x14070E0C0 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall SdbpMatchDeviceString(__int64 a1, const wchar_t *a2, unsigned int a3, __int16 a4)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v6 = 0;
  FirstTag = SdbFindFirstTag(a1, a3, a4);
  if ( FirstTag )
  {
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( StringTagPtr && a2 )
      return wcsicmp(StringTagPtr, a2) == 0;
  }
  else
  {
    return 1;
  }
  return v6;
}
