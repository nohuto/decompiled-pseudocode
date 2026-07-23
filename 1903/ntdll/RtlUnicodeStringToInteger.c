/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180074480
 * Callers:
 *     sub_180015FD0 @ 0x180015FD0 (sub_180015FD0.c)
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 *     RtlGetIntegerAtom @ 0x18005B7B0 (RtlGetIntegerAtom.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     RtlGetUILanguageInfo @ 0x180083E70 (RtlGetUILanguageInfo.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 *     sub_1800FD330 @ 0x1800FD330 (sub_1800FD330.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  NTSTATUS v5; // r9d
  ULONG v6; // r10d
  PWCH Buffer; // r8
  int v8; // edx
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // cx
  WCHAR *v11; // r14
  int v12; // r15d
  int v13; // r11d
  ULONG v14; // eax
  __int16 v16; // ax

  v5 = 0;
  v6 = 0;
  if ( !String->Length || (String->Length & 1) != 0 )
  {
LABEL_49:
    v5 = -1073741811;
    goto LABEL_25;
  }
  Buffer = String->Buffer;
  v8 = String->Length >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *Buffer++;
      if ( v9 > 0x20u )
        break;
      if ( !v8 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v8 = -1;
  }
  v10 = v9;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( v8 )
    {
      --v8;
      v10 = *Buffer++;
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = Buffer;
  v12 = v8;
  if ( Base )
  {
    switch ( Base )
    {
      case 0xAu:
        v13 = 0;
        goto LABEL_12;
      case 2u:
        v13 = 1;
        goto LABEL_12;
      case 8u:
        v13 = 3;
        goto LABEL_12;
      case 0x10u:
        v13 = 4;
        goto LABEL_12;
    }
    goto LABEL_49;
  }
  Base = 10;
  v13 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v16 = *Buffer++;
      switch ( v16 )
      {
        case 'x':
          Base = 16;
          v13 = 4;
          break;
        case 'o':
          Base = 8;
          v13 = 3;
          break;
        case 'b':
          Base = 2;
          v13 = 1;
          break;
        default:
          v8 = v12;
          Buffer = v11;
          break;
      }
      if ( v8 )
        goto LABEL_19;
    }
    v10 = 0;
  }
LABEL_12:
  while ( v10 )
  {
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 65) <= 5u )
      {
        v14 = v10 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          break;
        v14 = v10 - 87;
      }
    }
    else
    {
      v14 = v10 - 48;
    }
    if ( v14 >= Base )
      break;
    v6 = v13 ? v14 | (v6 << v13) : v14 + Base * v6;
    if ( !v8 )
      break;
LABEL_19:
    --v8;
    v10 = *Buffer++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_25:
  *Value = v6;
  return v5;
}
