/*
 * XREFs of RtlUnicodeToUTF8N @ 0x1800543B0
 * Callers:
 *     RtlUnicodeToOemN @ 0x180061F00 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x1800624A0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1800624E0 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToCustomCPN @ 0x1800E3BB0 (RtlUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800E3F30 (UpcaseUnicodeToUTF8NHelper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // ebp
  unsigned int v6; // r10d
  int v8; // edi
  PCHAR v9; // rax
  const WCHAR *v10; // rbx
  CHAR *v11; // rsi
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  const WCHAR *v17; // r10
  unsigned int v18; // edx
  int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  __int64 v22; // rcx
  CHAR v23; // cl
  _BYTE *v24; // rax
  int v25; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8(
               (PCHAR)UnicodeStringSource,
               UnicodeStringByteCount,
               UTF8StringActualByteCount,
               UnicodeStringSource,
               UnicodeStringByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v9 = UTF8StringDestination;
  v10 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  v11 = &UTF8StringDestination[UTF8StringMaxByteCount];
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( UnicodeStringSource >= v10 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      v12 = *UnicodeStringSource;
      if ( v6 )
      {
        if ( (unsigned int)(v12 - 56320) <= 0x3FF )
        {
          v6 = v12 + (v6 << 10) - 56613888;
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
    v13 = 1LL;
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        v22 = 1LL;
        if ( v6 > 0xFFFF )
          v22 = 2LL;
        v13 = v22 + 1;
      }
      ++v13;
    }
    if ( v9 > &v11[-v13] )
    {
      *UTF8StringActualByteCount = (_DWORD)v9 - v8;
      return -1073741789;
    }
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *v9++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *v9++ = (v6 >> 18) | 0xF0;
          v23 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v23 = (v6 >> 12) | 0xE0;
        }
        *v9 = v23;
        v24 = v9 + 1;
        *v24 = (v6 >> 6) & 0x3F | 0x80;
        v9 = v24 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *v9++ = v6;
    v14 = v10 - UnicodeStringSource;
    v15 = v11 - v9;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v11 - v9;
      v17 = &UnicodeStringSource[v14 - 5];
      while ( 2 )
      {
        if ( UnicodeStringSource >= v17 )
          goto LABEL_31;
        v18 = *UnicodeStringSource++;
        if ( v18 > 0x7F )
          goto LABEL_32;
        *v9++ = v18;
        if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
          goto LABEL_28;
        v18 = *UnicodeStringSource++;
        if ( v18 > 0x7F )
          goto LABEL_32;
        *v9++ = v18;
LABEL_28:
        if ( UnicodeStringSource >= v17 )
          goto LABEL_31;
        while ( 1 )
        {
          v18 = *(_DWORD *)UnicodeStringSource;
          v19 = *((_DWORD *)UnicodeStringSource + 1);
          if ( ((v19 | *(_DWORD *)UnicodeStringSource) & 0xFF80FF80) != 0 )
            break;
          *v9 = v18;
          UnicodeStringSource += 4;
          v9[2] = v19;
          v9[1] = BYTE2(v18);
          v9[3] = BYTE2(v19);
          v9 += 4;
          if ( UnicodeStringSource >= v17 )
            goto LABEL_31;
        }
        v18 = (unsigned __int16)v18;
        ++UnicodeStringSource;
        if ( (unsigned __int16)v18 > 0x7Fu )
        {
LABEL_32:
          if ( v18 > 0x7FF )
          {
            if ( v18 - 55296 <= 0x7FF )
            {
              if ( v18 > 0xDBFF )
              {
                --UnicodeStringSource;
                goto LABEL_31;
              }
              v25 = *UnicodeStringSource++;
              if ( (unsigned int)(v25 - 56320) > 0x3FF )
              {
                UnicodeStringSource -= 2;
                v6 = 0;
                goto LABEL_5;
              }
              v18 = v25 - 56613888 + (v18 << 10);
              *v9++ = (v18 >> 18) | 0xF0;
              v21 = v18 & 0x3F000 | 0x80000;
            }
            else
            {
              v21 = v18 | 0xE0000;
            }
            *v9 = v21 >> 12;
            --v17;
            ++v9;
            v20 = v18 & 0xFC0 | 0x2000;
          }
          else
          {
            v20 = v18 | 0x3000;
          }
          --v17;
          *v9++ = v20 >> 6;
          LOBYTE(v18) = v18 & 0x3F | 0x80;
        }
        *v9++ = v18;
        continue;
      }
    }
    if ( v15 >= v14 )
      break;
LABEL_31:
    v6 = 0;
  }
  while ( UnicodeStringSource < v10 )
  {
    v6 = *UnicodeStringSource++;
    if ( v6 > 0x7F )
      goto LABEL_8;
    *v9++ = v6;
  }
LABEL_19:
  *UTF8StringActualByteCount = (_DWORD)v9 - v8;
  return v5;
}
