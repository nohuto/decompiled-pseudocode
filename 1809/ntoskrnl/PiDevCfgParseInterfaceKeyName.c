/*
 * XREFs of PiDevCfgParseInterfaceKeyName @ 0x140289580
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParseInterfaceKeyName(__int64 a1, GUID *a2, __int64 *a3)
{
  unsigned __int16 v5; // ax
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 v9; // cx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_WORD *)a1 < 0x4Cu )
    goto LABEL_7;
  GuidString.Buffer = *(wchar_t **)(a1 + 8);
  v5 = *(_WORD *)(a1 + 2);
  GuidString.Length = 76;
  GuidString.MaximumLength = v5;
  v6 = RtlGUIDFromString(&GuidString, a2);
  v7 = 0LL;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_WORD *)(v8 + 76);
    if ( v9 == 35 )
    {
      v7 = (v8 + 78) & -(__int64)(*(_WORD *)(v8 + 78) != 0);
LABEL_6:
      *a3 = v7;
      return v6 >= 0;
    }
    if ( !v9 )
      goto LABEL_6;
LABEL_7:
    v6 = -1073741823;
  }
  return v6 >= 0;
}
