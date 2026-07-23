/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180068120
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     RtlAnsiStringToUnicodeString @ 0x180025AA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeSize @ 0x180026750 (RtlMultiByteToUnicodeSize.c)
 *     RtlMultiByteToUnicodeN @ 0x180058120 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x18006A3C0 (RtlOemToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18006C080 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x1800E6340 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // r14d
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v10; // r10
  const CHAR *v11; // r11
  WCHAR *v12; // rbp
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  WCHAR *v17; // r8
  unsigned int v18; // ecx
  unsigned int v19; // edx
  char v20; // dl
  int v21; // edx
  unsigned int v22; // ecx
  WCHAR v23; // dx
  CHAR v24; // bl
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // edx
  CHAR v29; // cl
  int v30; // edx

  v5 = 0;
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v10 = UnicodeStringDestination;
  v11 = &UTF8StringSource[UTF8StringByteCount];
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( UTF8StringSource >= v11 )
        {
          if ( v8 )
          {
            v5 = 263;
            if ( v10 < v12 )
              *v10++ = -3;
            else
              v5 = -1073741789;
          }
          goto LABEL_13;
        }
        v13 = *UTF8StringSource++;
        if ( !v8 )
        {
          LOWORD(v8) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( v10 >= v12 )
              goto LABEL_78;
            *v10++ = v8;
            v14 = v11 - UTF8StringSource;
            v15 = v12 - v10;
            if ( (unsigned __int64)(v11 - UTF8StringSource) <= 0xD )
            {
              if ( v15 < v14 )
              {
                v8 = 0;
                continue;
              }
              while ( UTF8StringSource < v11 )
              {
                v8 = *UTF8StringSource++;
                if ( v8 > 0x7F )
                  goto LABEL_51;
                *v10++ = v8;
              }
LABEL_13:
              if ( UnicodeStringActualByteCount )
                *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
              return v5;
            }
            if ( v14 < v15 )
              v15 = v11 - UTF8StringSource;
            v17 = &v10[v15 - 7];
            if ( v10 >= v17 )
              goto LABEL_34;
            while ( 1 )
            {
              v18 = *UTF8StringSource++;
              if ( v18 > 0x7F )
                goto LABEL_27;
              *v10++ = v18;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v18 = *UTF8StringSource++;
                if ( v18 > 0x7F )
                  goto LABEL_27;
                *v10++ = v18;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_24;
              v18 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v18 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v10 = v18 & 0x7F;
                v10[1] = (v18 >> 8) & 0x7F;
                v10 += 2;
LABEL_24:
                while ( v10 < v17 )
                {
                  v19 = *((_DWORD *)UTF8StringSource + 1);
                  v18 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                    goto LABEL_37;
                  UTF8StringSource += 8;
                  *v10 = v18 & 0x7F;
                  v10[1] = (v18 >> 8) & 0x7F;
                  v10[2] = BYTE2(v18) & 0x7F;
                  v10[3] = HIBYTE(v18) & 0x7F;
                  v10[4] = v19 & 0x7F;
                  v10[5] = (v19 >> 8) & 0x7F;
                  v10[6] = BYTE2(v19) & 0x7F;
                  v10[7] = HIBYTE(v19) & 0x7F;
                  v10 += 8;
                }
LABEL_34:
                v8 = 0;
                goto LABEL_3;
              }
LABEL_37:
              ++UTF8StringSource;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v10 = (unsigned __int8)v18;
                goto LABEL_33;
              }
LABEL_27:
              v20 = *UTF8StringSource++;
              if ( (v18 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_63:
                UTF8StringSource -= 2;
                goto LABEL_34;
              }
              v21 = v20 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v24 = *UTF8StringSource;
                v25 = ((v18 & 0xF) << 6) | v21;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_63;
                  if ( (v24 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  v29 = UTF8StringSource[1];
                  v30 = v24 & 0x3F | (v25 << 6);
                  if ( (v29 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  *v10++ = (((v29 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v26 = 2LL;
                  v23 = (v29 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v24 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  v23 = v24 & 0x3F | ((_WORD)v25 << 6);
                  v26 = 1LL;
                }
                UTF8StringSource += v26;
                --v17;
              }
              else
              {
                v22 = v18 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_63;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v10 = v23;
              --v17;
LABEL_33:
              if ( ++v10 >= v17 )
                goto LABEL_34;
            }
          }
LABEL_51:
          if ( (v8 & 0x40) != 0 )
          {
            if ( (v8 & 0x20) != 0 )
            {
              v27 = v8 & 0xF;
              if ( (v8 & 0x10) == 0 )
              {
                v8 = v27 | 0x48228000;
                continue;
              }
              if ( v27 <= 4 )
              {
                v8 = v27 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v28 = v8 & 0x1F;
              if ( v28 > 1 )
              {
                v8 = v28 | 0x800000;
                continue;
              }
            }
          }
LABEL_65:
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        --UTF8StringSource;
        goto LABEL_65;
      }
      v8 = (v8 << 6) | v13 & 0x3F;
      if ( (v8 & 0x20000000) == 0 )
      {
        if ( (v8 & 0x10000000) != 0 )
        {
          if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v8 & 0x3E0) != 0 )
        {
          if ( (v8 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v8) = -3;
          goto LABEL_6;
        }
        goto LABEL_65;
      }
      break;
    }
    if ( (v8 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v10 < v12 )
    {
      *v10++ = ((v8 >> 10) & 0x7FF) - 10304;
      LOWORD(v8) = (v8 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_78:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v10 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode(
             (PWSTR)UTF8StringSource,
             UTF8StringByteCount,
             UnicodeStringActualByteCount,
             UTF8StringSource,
             UTF8StringByteCount);
  }
  else
  {
    return -1073741811;
  }
}
