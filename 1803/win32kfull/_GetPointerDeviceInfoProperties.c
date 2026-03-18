/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x1C00E0C34
 * Callers:
 *     NtUserGetPointerDevices @ 0x1C00E09B0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x1C0130930 (NtUserGetPointerDevice.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C00E0CE8 (PHIDTtoPT.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C00E0D18 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // r9d
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 *v8; // rax
  __int16 v9; // cx

  v2 = 0LL;
  if ( *(_QWORD *)(a2 + 288) )
  {
    v5 = RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)(a1 + 38), 0x410uLL, (PCUNICODE_STRING)(a2 + 280));
  }
  else
  {
    *(_WORD *)(a1 + 38) = 0;
    v5 = 0;
  }
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 696);
    *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2, a2, v6);
    v8 = *(__int64 **)(v7 + 856);
    if ( v8 )
      v2 = *v8;
    *(_QWORD *)(a1 + 24) = v2;
    v9 = *(_WORD *)(a2 + 680) - 1;
    if ( *(_DWORD *)(a2 + 24) != 7 )
      v9 = *(_WORD *)(a2 + 680);
    *(_WORD *)(a1 + 36) = v9;
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4LL);
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 224);
  }
  return (unsigned int)v5;
}
