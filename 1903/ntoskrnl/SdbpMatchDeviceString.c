/*
 * XREFs of SdbpMatchDeviceString @ 0x140924058
 * Callers:
 *     SdbpMatchCpu @ 0x140772938 (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x14077298C (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1407729E0 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140772A34 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x14070C2E0 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
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
