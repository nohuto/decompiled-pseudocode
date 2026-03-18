/*
 * XREFs of RIMVirtGetProductString @ 0x1C011A0E0
 * Callers:
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     wcscmp_0 @ 0x1C00AE91A (wcscmp_0.c)
 */

__int64 __fastcall RIMVirtGetProductString(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  v4 = -1073741811;
  v5 = Win32AllocPool(*(unsigned __int16 *)(a2 + 554), 0x77647352u);
  *(_QWORD *)(a1 + 320) = v5;
  if ( v5 )
  {
    *(_WORD *)(a1 + 314) = *(_WORD *)(a2 + 554);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 312), (PCUNICODE_STRING)(a2 + 552));
    if ( !wcscmp_0(*(const wchar_t **)(a1 + 320), L"VHidPen") )
      *(_DWORD *)(a1 + 308) |= 0x10000u;
    return 0;
  }
  return v4;
}
