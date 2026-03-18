/*
 * XREFs of PiDevCfgParsePropertyKeyName @ 0x140289318
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1400F5074 (RtlStringCchCopyNW.c)
 *     PnpStringToDwordValue @ 0x14015D1CC (PnpStringToDwordValue.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     wcschr @ 0x1401976B0 (wcschr.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 */

bool __fastcall PiDevCfgParsePropertyKeyName(unsigned __int16 *a1, GUID *a2, unsigned int *a3)
{
  NTSTATUS v6; // ebx
  const wchar_t *v7; // rdi
  __int64 v8; // rbx
  wchar_t *v9; // rax
  __int64 v10; // rsi
  bool v11; // al
  int v12; // ecx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-68h] BYREF
  wchar_t pszDest[12]; // [rsp+30h] [rbp-58h] BYREF

  if ( *a1 < 0x50u )
    goto LABEL_2;
  GuidString.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
  GuidString.MaximumLength = a1[1];
  GuidString.Length = 76;
  v6 = RtlGUIDFromString(&GuidString, a2);
  if ( v6 < 0 )
    return v6 >= 0;
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 76LL) != 44 )
    goto LABEL_2;
  v7 = (const wchar_t *)(*((_QWORD *)a1 + 1) + 78LL);
  v8 = (*a1 >> 1) - 39;
  if ( v7[v8] )
    goto LABEL_2;
  v9 = wcschr(v7, 0x2Cu);
  v10 = (__int64)v9;
  if ( v9 )
  {
    v8 = v9 - v7;
    v10 = (__int64)(v9 + 1);
  }
  v6 = RtlStringCchCopyNW(pszDest, 0xBuLL, v7, (unsigned int)v8);
  if ( v6 >= 0 )
  {
    if ( PnpStringToDwordValue((__int64)pszDest, &a2[1].Data1) )
    {
      if ( a3 )
      {
        *a3 = 1;
        if ( v10 )
        {
          v11 = PnpStringToDwordValue(v10, a3);
          v12 = v6;
          if ( !v11 )
            v12 = -1073741823;
          v6 = v12;
        }
      }
      return v6 >= 0;
    }
LABEL_2:
    v6 = -1073741823;
  }
  return v6 >= 0;
}
