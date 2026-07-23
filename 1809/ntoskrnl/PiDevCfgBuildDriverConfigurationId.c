/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x1406F6CB0
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x140287A04 (RtlUnicodeStringExHandleOtherFlags.c)
 *     PnpIsNullGuid @ 0x1405911B0 (PnpIsNullGuid.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  unsigned int v4; // ebx
  NTSTATUS v7; // ebx
  unsigned __int16 Length; // si
  UNICODE_STRING v9; // xmm0
  wchar_t *Buffer; // r8
  size_t v12; // rdx
  int v13; // r14d
  wchar_t *v14; // r9
  __int16 v15; // cx
  size_t v16; // rax
  const wchar_t *v17; // rcx
  __int64 v18; // r9
  size_t v19; // r10
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-60h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-58h]
  __int64 dwFlags; // [rsp+30h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING RemainingString; // [rsp+60h] [rbp-20h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+70h] [rbp-10h] BYREF
  wchar_t *v26; // [rsp+C0h] [rbp+40h] BYREF
  size_t v27; // [rsp+D0h] [rbp+50h] BYREF
  size_t pcchNewDestLength; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1 + 40;
  v3 = a1 + 72;
  v4 = *(unsigned __int16 *)(a1 + 72) + *(unsigned __int16 *)(a1 + 40) + 4;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v4 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( !PnpIsNullGuid((void *)(a1 + 188)) )
    v4 += 72;
  if ( (unsigned __int64)v4 + 2 > 0xFFFE )
  {
    v7 = -1073741562;
    goto LABEL_13;
  }
  DestinationString.Length = v4;
  DestinationString.MaximumLength = v4 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v4 + 2));
  if ( !DestinationString.Buffer )
  {
    v7 = -1073741670;
    goto LABEL_13;
  }
  v7 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v3);
  if ( v7 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v7 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", a1 + 88);
      if ( v7 < 0 )
        goto LABEL_13;
      Length = *(_WORD *)(a1 + 88) + 2 + DestinationString.Length;
      DestinationString.Length = Length;
    }
    else
    {
      Length = DestinationString.Length;
    }
    if ( !PnpIsNullGuid((void *)(a1 + 188)) )
    {
      if ( !*(_QWORD *)(a1 + 96) )
      {
        Buffer = 0LL;
        v12 = 0LL;
        v13 = 0;
        v7 = -1073741811;
        if ( (RemainingString.Length & 1) != 0
          || (RemainingString.MaximumLength & 1) != 0
          || RemainingString.Length > RemainingString.MaximumLength
          || RemainingString.MaximumLength == 0xFFFF
          || !RemainingString.Buffer && (RemainingString.Length || RemainingString.MaximumLength) )
        {
          v13 = -1073741811;
        }
        else
        {
          Buffer = RemainingString.Buffer;
          v12 = (unsigned __int64)RemainingString.MaximumLength >> 1;
        }
        if ( v13 >= 0 )
        {
          v14 = Buffer;
          v15 = v12;
          v16 = 0LL;
          if ( v12 )
          {
            v17 = L",";
            v18 = 0x7FFFLL;
            v19 = v12;
            v13 = 0;
            while ( v18 && *v17 )
            {
              *(const wchar_t *)((char *)v17 + (char *)Buffer - (char *)L",") = *v17;
              --v18;
              ++v17;
              ++v16;
              if ( !--v19 )
              {
                if ( v18 && *v17 )
                  v13 = -2147483643;
                break;
              }
            }
            pcchNewDestLength = v16;
            v15 = v12 - v16;
            v14 = &Buffer[v16];
            v26 = v14;
            v27 = v12 - v16;
            if ( v13 < 0 )
            {
              RtlUnicodeStringExHandleOtherFlags(Buffer, v12, (size_t)Buffer, &pcchNewDestLength, &v26, &v27, 0x800u);
              v14 = v26;
              v15 = v27;
              LOWORD(v16) = pcchNewDestLength;
            }
          }
          else
          {
            if ( !Buffer )
              goto LABEL_13;
            v13 = -2147483643;
          }
          RemainingString.Length = 2 * v16;
          if ( (int)(v13 + 0x80000000) < 0 || v13 == -2147483643 )
          {
            RemainingString.Length = 0;
            RemainingString.MaximumLength = 2 * v15;
            RemainingString.Buffer = v14;
          }
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_13;
        Length += 2;
        DestinationString.Length = Length;
      }
      RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
      LODWORD(dwFlags) = *(unsigned __int16 *)(a1 + 124);
      LODWORD(pcchRemaining) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
      LODWORD(ppszDestEnd) = TimeFields.Year;
      v7 = RtlUnicodeStringPrintf(
             &RemainingString,
             L",%02d/%02d/%04d,%u.%u.%u.%u",
             (unsigned int)TimeFields.Month,
             (unsigned int)TimeFields.Day,
             ppszDestEnd,
             pcchRemaining,
             dwFlags,
             *(unsigned __int16 *)(a1 + 122),
             *(unsigned __int16 *)(a1 + 120));
      if ( v7 < 0 )
        goto LABEL_13;
      DestinationString.Length = RemainingString.Length + Length;
    }
    v9 = DestinationString;
    *(_QWORD *)&DestinationString.Length = 0LL;
    *a2 = v9;
    DestinationString.Buffer = 0LL;
  }
LABEL_13:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v7;
}
