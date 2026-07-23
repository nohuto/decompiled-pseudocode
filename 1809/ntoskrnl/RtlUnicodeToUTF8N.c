/*
 * XREFs of RtlUnicodeToUTF8N @ 0x1406C08F0
 * Callers:
 *     EtwpQueryPartitionRegistryInformation @ 0x140185E74 (EtwpQueryPartitionRegistryInformation.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402ED070 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToMultiByteSize @ 0x14067D4E0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToOemN @ 0x14067D520 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteN @ 0x140699260 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToCustomCPN @ 0x140892270 (RtlUnicodeToCustomCPN.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C1C8C (EtwpGetAutoLoggerEventNameFilter.c)
 * Callees:
 *     CountUnicodeToUTF8 @ 0x14013233C (CountUnicodeToUTF8.c)
 */

NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // edi
  unsigned int v6; // r10d
  int v8; // ebx
  CHAR *v9; // rsi
  const WCHAR *v10; // rbp
  int v11; // edx
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  NTSTATUS result; // eax
  const WCHAR *i; // r10
  unsigned int v17; // edx
  int v18; // r8d
  __int64 v19; // rax
  CHAR v20; // al
  CHAR v21; // al
  unsigned int v22; // eax
  unsigned int v23; // r8d
  int v24; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8((unsigned int *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = &UTF8StringDestination[UTF8StringMaxByteCount];
  v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  while ( 1 )
  {
    do
    {
      if ( UnicodeStringSource >= v10 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      v11 = *UnicodeStringSource;
      if ( v6 )
      {
        if ( (unsigned int)(v11 - 56320) <= 0x3FF )
        {
          v6 = v11 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
    }
    v12 = 1LL;
    if ( v6 > 0x7F )
    {
      v19 = 1LL;
      if ( v6 > 0x7FF )
        v19 = (v6 > 0xFFFF) + 2LL;
      v12 = v19 + 1;
    }
    if ( UTF8StringDestination > &v9[-v12] )
    {
      v5 = -1073741789;
      goto LABEL_19;
    }
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
        {
          *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
          v21 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v21 = (v6 >> 12) | 0xE0;
        }
        *UTF8StringDestination++ = v21;
        v20 = (v6 >> 6) & 0x3F | 0x80;
      }
      else
      {
        v20 = (v6 >> 6) | 0xC0;
      }
      *UTF8StringDestination++ = v20;
      LOBYTE(v6) = v6 & 0x3F | 0x80;
    }
    *UTF8StringDestination++ = v6;
    v13 = v10 - UnicodeStringSource;
    v14 = v9 - UTF8StringDestination;
    if ( v13 > 0xD )
    {
      if ( v14 < v13 )
        v13 = v9 - UTF8StringDestination;
      for ( i = &UnicodeStringSource[v13 - 5]; ; --i )
      {
LABEL_30:
        while ( 2 )
        {
          if ( UnicodeStringSource >= i )
            goto LABEL_31;
          v17 = *UnicodeStringSource++;
          if ( (unsigned __int16)v17 <= 0x7Fu )
          {
            *UTF8StringDestination++ = v17;
            if ( ((unsigned __int8)UnicodeStringSource & 2) != 0 )
            {
              v17 = *UnicodeStringSource++;
              if ( (unsigned __int16)v17 > 0x7Fu )
                break;
              *UTF8StringDestination++ = v17;
            }
            if ( UnicodeStringSource >= i )
              goto LABEL_31;
            while ( 1 )
            {
              v17 = *(_DWORD *)UnicodeStringSource;
              v18 = *((_DWORD *)UnicodeStringSource + 1);
              if ( ((v18 | *(_DWORD *)UnicodeStringSource) & 0xFF80FF80) != 0 )
                break;
              *UTF8StringDestination = v17;
              UnicodeStringSource += 4;
              UTF8StringDestination[2] = v18;
              UTF8StringDestination[1] = BYTE2(v17);
              UTF8StringDestination[3] = BYTE2(v18);
              UTF8StringDestination += 4;
              if ( UnicodeStringSource >= i )
                goto LABEL_30;
            }
            v17 = (unsigned __int16)v17;
            ++UnicodeStringSource;
            if ( (unsigned __int16)v17 <= 0x7Fu )
            {
              *UTF8StringDestination++ = v17;
              continue;
            }
          }
          break;
        }
        if ( v17 > 0x7FF )
        {
          if ( v17 - 55296 <= 0x7FF )
          {
            if ( v17 > 0xDBFF )
            {
              --UnicodeStringSource;
              goto LABEL_31;
            }
            v24 = *UnicodeStringSource++;
            if ( (unsigned int)(v24 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              goto LABEL_31;
            }
            v17 = v24 - 56613888 + (v17 << 10);
            *UTF8StringDestination++ = (v17 >> 18) | 0xF0;
            v23 = v17 & 0x3F000 | 0x80000;
          }
          else
          {
            v23 = v17 | 0xE0000;
          }
          *UTF8StringDestination = v23 >> 12;
          --i;
          ++UTF8StringDestination;
          v22 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v22 = v17 | 0x3000;
        }
        *UTF8StringDestination = v22 >> 6;
        UTF8StringDestination[1] = v17 & 0x3F | 0x80;
        UTF8StringDestination += 2;
      }
    }
    if ( v14 >= v13 )
      break;
LABEL_31:
    v6 = 0;
  }
  while ( UnicodeStringSource < v10 )
  {
    v6 = *UnicodeStringSource++;
    if ( (unsigned __int16)v6 > 0x7Fu )
      goto LABEL_8;
    *UTF8StringDestination++ = v6;
  }
LABEL_19:
  result = v5;
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
