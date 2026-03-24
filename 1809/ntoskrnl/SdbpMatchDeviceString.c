/*
 * XREFs of SdbpMatchDeviceString @ 0x1408E79A4
 * Callers:
 *     SdbpMatchCpu @ 0x14072372C (SdbpMatchCpu.c)
 *     SdbpMatchBios @ 0x140723780 (SdbpMatchBios.c)
 *     SdbpMatchOem @ 0x1407237D4 (SdbpMatchOem.c)
 *     SdbpMatchAcpi @ 0x140723828 (SdbpMatchAcpi.c)
 * Callees:
 *     _wcsicmp @ 0x140195930 (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x14067D180 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x140721710 (SdbGetStringTagPtr.c)
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
