/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C01DACDC
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C0111F60 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C0215EA0 (NtUserGetPointerDevice.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C01D9F18 (PHIDTtoPT.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C01DA0F0 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  __int64 *v6; // rax
  __int16 v7; // cx
  __int64 result; // rax

  v2 = 0LL;
  if ( *(_QWORD *)(a2 + 320) )
    RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)(a1 + 38), 0x410uLL, (PCUNICODE_STRING)(a2 + 312));
  else
    *(_WORD *)(a1 + 38) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 728);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2);
  v6 = *(__int64 **)(v5 + 1200);
  if ( v6 )
    v2 = *v6;
  *(_QWORD *)(a1 + 24) = v2;
  v7 = *(_WORD *)(a2 + 712) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v7 = *(_WORD *)(a2 + 712);
  *(_WORD *)(a1 + 36) = v7;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 960) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}
