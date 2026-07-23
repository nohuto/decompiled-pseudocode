/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x18005F3A0
 * Callers:
 *     RtlMultiByteToUnicodeSize @ 0x1800220B0 (RtlMultiByteToUnicodeSize.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlAnsiStringToUnicodeString @ 0x180024B70 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x18005D810 (RtlMultiByteToUnicodeN.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 *     RtlCustomCPToUnicodeN @ 0x1800E35C0 (RtlCustomCPToUnicodeN.c)
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
  NTSTATUS v5; // ebp
  PWSTR v8; // rax
  const CHAR *v9; // rbx
  WCHAR *v10; // r14
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  WCHAR *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  char v19; // r8
  int v20; // r8d
  unsigned int v21; // edx
  WCHAR v22; // r8
  CHAR v23; // r11
  unsigned int v24; // r8d
  __int64 v25; // rcx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  CHAR v28; // dl
  int v29; // r8d

  v5 = 0;
  v8 = UnicodeStringDestination;
  v9 = &UTF8StringSource[UTF8StringByteCount];
  v10 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v11 = 0;
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( UTF8StringSource >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
          goto LABEL_13;
        }
        v12 = *UTF8StringSource++;
        if ( !v11 )
        {
          LOWORD(v11) = v12;
          if ( v12 <= 0x7F )
          {
LABEL_6:
            if ( v8 >= v10 )
              goto LABEL_79;
            *v8++ = v11;
            v13 = v9 - UTF8StringSource;
            v14 = v10 - v8;
            if ( (unsigned __int64)(v9 - UTF8StringSource) <= 0xD )
            {
              if ( v14 < v13 )
              {
                v11 = 0;
                continue;
              }
              while ( UTF8StringSource < v9 )
              {
                v11 = *UTF8StringSource++;
                if ( v11 > 0x7F )
                  goto LABEL_54;
                *v8++ = v11;
              }
LABEL_13:
              if ( UnicodeStringActualByteCount )
                *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
              return v5;
            }
            if ( v13 < v14 )
              v14 = v9 - UTF8StringSource;
            v16 = &v8[v14 - 7];
            if ( v8 >= v16 )
              goto LABEL_29;
            while ( 1 )
            {
              v17 = *UTF8StringSource++;
              if ( v17 > 0x7F )
                break;
              *v8++ = v17;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v17 = *UTF8StringSource++;
                if ( v17 > 0x7F )
                  break;
                *v8++ = v17;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_24;
              v17 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v17 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v8 = v17 & 0x7F;
                v8[1] = (v17 >> 8) & 0x7F;
                v8 += 2;
LABEL_24:
                while ( v8 < v16 )
                {
                  v18 = *((_DWORD *)UTF8StringSource + 1);
                  v17 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
                    goto LABEL_42;
                  UTF8StringSource += 8;
                  *v8 = v17 & 0x7F;
                  v8[1] = (v17 >> 8) & 0x7F;
                  v8[2] = BYTE2(v17) & 0x7F;
                  v8[3] = HIBYTE(v17) & 0x7F;
                  v8[4] = v18 & 0x7F;
                  v8[5] = (v18 >> 8) & 0x7F;
                  v8[6] = BYTE2(v18) & 0x7F;
                  v8[7] = HIBYTE(v18) & 0x7F;
                  v8 += 8;
                }
LABEL_29:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_42:
              ++UTF8StringSource;
              if ( (unsigned __int8)v17 > 0x7Fu )
                break;
              *v8 = (unsigned __int8)v17;
LABEL_38:
              if ( ++v8 >= v16 )
              {
                v11 = 0;
                goto LABEL_3;
              }
            }
            v19 = *UTF8StringSource++;
            if ( (v17 & 0x40) == 0 || (v19 & 0xC0) != 0x80 )
            {
LABEL_28:
              UTF8StringSource -= 2;
              goto LABEL_29;
            }
            v20 = v19 & 0x3F;
            if ( (v17 & 0x20) != 0 )
            {
              v23 = *UTF8StringSource;
              v24 = ((v17 & 0xF) << 6) | v20;
              if ( (v17 & 0x10) != 0 )
              {
                if ( (v24 >> 4) - 1 > 0xF )
                  goto LABEL_28;
                if ( (v23 & 0xC0) != 0x80 )
                  goto LABEL_28;
                v28 = UTF8StringSource[1];
                v29 = v23 & 0x3F | (v24 << 6);
                if ( (v28 & 0xC0) != 0x80 )
                  goto LABEL_28;
                *v8++ = (((v28 & 0x3F | (unsigned int)(v29 << 6)) >> 10) & 0x7FF) - 10304;
                v25 = 2LL;
                v22 = (v28 & 0x3F | ((_WORD)v29 << 6) & 0x3FF) - 9216;
              }
              else
              {
                if ( (v24 & 0x3E0) == 0 || (v24 & 0x3E0) == 0x360 || (v23 & 0xC0) != 0x80 )
                  goto LABEL_28;
                v22 = v23 & 0x3F | ((_WORD)v24 << 6);
                v25 = 1LL;
              }
              UTF8StringSource += v25;
              --v16;
            }
            else
            {
              v21 = v17 & 0x1F;
              if ( v21 <= 1 )
                goto LABEL_28;
              v22 = ((_WORD)v21 << 6) | v20;
            }
            *v8 = v22;
            --v16;
            goto LABEL_38;
          }
LABEL_54:
          if ( (v11 & 0x40) != 0 )
          {
            if ( (v11 & 0x20) != 0 )
            {
              v26 = v11 & 0xF;
              if ( (v11 & 0x10) == 0 )
              {
                v11 = v26 | 0x48228000;
                continue;
              }
              if ( v26 <= 4 )
              {
                v11 = v26 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v27 = v11 & 0x1F;
              if ( v27 > 1 )
              {
                v11 = v27 | 0x800000;
                continue;
              }
            }
          }
LABEL_66:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v12 & 0xC0) != 0x80 )
      {
        --UTF8StringSource;
        goto LABEL_66;
      }
      v11 = (v11 << 6) | v12 & 0x3F;
      if ( (v11 & 0x20000000) == 0 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          if ( (v11 & 0x800000) != 0 || (v11 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v11 & 0x3E0) != 0 )
        {
          if ( (v11 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        goto LABEL_66;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_79:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v8 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return sub_18005F76C(
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
