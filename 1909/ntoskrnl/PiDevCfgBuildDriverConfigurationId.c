/*
 * XREFs of PiDevCfgBuildDriverConfigurationId @ 0x1406FE968
 * Callers:
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14014512C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401451DC (RtlUnicodeStringPrintfEx.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14029D670 (RtlUnicodeStringExHandleOtherFlags.c)
 *     PnpIsNullGuid @ 0x1405B6474 (PnpIsNullGuid.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgBuildDriverConfigurationId(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // r15
  int v3; // ebx
  __int64 v4; // rdi
  unsigned int v6; // ebx
  NTSTATUS v8; // ebx
  unsigned __int16 Length; // di
  UNICODE_STRING v10; // xmm0
  wchar_t *Buffer; // r8
  size_t v13; // rdx
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
  v3 = *(unsigned __int16 *)(a1 + 40);
  v4 = a1 + 72;
  *(_QWORD *)&RemainingString.Length = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = *(unsigned __int16 *)(a1 + 72) + v3 + 4;
  DestinationString.Buffer = 0LL;
  RemainingString.Buffer = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    v6 += *(unsigned __int16 *)(a1 + 88) + 2;
  if ( !PnpIsNullGuid((void *)(a1 + 188)) )
    v6 += 72;
  if ( (unsigned __int64)v6 + 2 > 0xFFFE )
  {
    v8 = -1073741562;
    goto LABEL_13;
  }
  DestinationString.Length = v6;
  DestinationString.MaximumLength = v6 + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(v6 + 2));
  if ( !DestinationString.Buffer )
  {
    v8 = -1073741670;
    goto LABEL_13;
  }
  v8 = RtlUnicodeStringPrintfEx(&DestinationString, &RemainingString, 0x800u, L"%wZ:%wZ", v2, v4);
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      v8 = RtlUnicodeStringPrintfEx(&RemainingString, &RemainingString, 0x800u, L",%wZ", a1 + 88);
      if ( v8 < 0 )
        goto LABEL_13;
      Length = *(_WORD *)(a1 + 88) + 2 + DestinationString.Length;
      DestinationString.Length = Length;
    }
    else
    {
      Length = DestinationString.Length;
    }
    if ( PnpIsNullGuid((void *)(a1 + 188)) )
    {
LABEL_12:
      v10 = DestinationString;
      *(_QWORD *)&DestinationString.Length = 0LL;
      *a2 = v10;
      DestinationString.Buffer = 0LL;
      goto LABEL_13;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
LABEL_46:
      RtlTimeToTimeFields((PLARGE_INTEGER)(a1 + 112), &TimeFields);
      LODWORD(dwFlags) = *(unsigned __int16 *)(a1 + 124);
      LODWORD(pcchRemaining) = (unsigned __int16)HIWORD(*(_DWORD *)(a1 + 124));
      LODWORD(ppszDestEnd) = TimeFields.Year;
      v8 = RtlUnicodeStringPrintf(
             &RemainingString,
             L",%02d/%02d/%04d,%u.%u.%u.%u",
             (unsigned int)TimeFields.Month,
             (unsigned int)TimeFields.Day,
             ppszDestEnd,
             pcchRemaining,
             dwFlags,
             *(unsigned __int16 *)(a1 + 122),
             *(unsigned __int16 *)(a1 + 120));
      if ( v8 < 0 )
        goto LABEL_13;
      DestinationString.Length = RemainingString.Length + Length;
      goto LABEL_12;
    }
    Buffer = 0LL;
    v13 = 0LL;
    v8 = 0;
    if ( (RemainingString.Length & 1) != 0
      || (RemainingString.MaximumLength & 1) != 0
      || RemainingString.Length > RemainingString.MaximumLength
      || RemainingString.MaximumLength == 0xFFFF )
    {
      v8 = -1073741811;
LABEL_44:
      if ( v8 < 0 )
        goto LABEL_13;
      Length += 2;
      DestinationString.Length = Length;
      goto LABEL_46;
    }
    if ( !RemainingString.Buffer && (RemainingString.Length || RemainingString.MaximumLength) )
    {
      v8 = -1073741811;
    }
    else
    {
      Buffer = RemainingString.Buffer;
      v13 = (unsigned __int64)RemainingString.MaximumLength >> 1;
    }
    if ( v8 >= 0 )
    {
      v14 = Buffer;
      v15 = v13;
      v16 = 0LL;
      if ( v13 )
      {
        v17 = L",";
        v18 = 0x7FFFLL;
        v19 = v13;
        v8 = 0;
        do
        {
          if ( !v18 )
            break;
          if ( !*v17 )
            break;
          *(const wchar_t *)((char *)v17 + (char *)Buffer - (char *)L",") = *v17;
          --v18;
          ++v17;
          ++v16;
          --v19;
        }
        while ( v19 );
        if ( !v19 && v18 && *v17 )
          v8 = -2147483643;
        pcchNewDestLength = v16;
        v15 = v13 - v16;
        v14 = &Buffer[v16];
        v26 = v14;
        v27 = v13 - v16;
        if ( v8 < 0 )
        {
          RtlUnicodeStringExHandleOtherFlags(Buffer, v13, (size_t)Buffer, &pcchNewDestLength, &v26, &v27, 0x800u);
          v14 = v26;
          v15 = v27;
          LOWORD(v16) = pcchNewDestLength;
        }
      }
      else
      {
        v8 = Buffer != 0LL ? -2147483643 : -1073741811;
      }
      RemainingString.Length = 2 * v16;
      if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      {
        RemainingString.Length = 0;
        RemainingString.MaximumLength = 2 * v15;
        RemainingString.Buffer = v14;
      }
      goto LABEL_44;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&DestinationString);
  return (unsigned int)v8;
}
