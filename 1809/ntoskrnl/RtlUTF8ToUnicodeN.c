/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x1406BEB10
 * Callers:
 *     EtwpApplyContainerFilter @ 0x140584694 (EtwpApplyContainerFilter.c)
 *     RtlMultiByteToUnicodeN @ 0x1405ABE90 (RtlMultiByteToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x1405ABF50 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiCharToUnicodeChar @ 0x14068E7B0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x1406F83B0 (RtlOemToUnicodeN.c)
 *     RtlCustomCPToUnicodeN @ 0x140892110 (RtlCustomCPToUnicodeN.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x1402F6288 (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  NTSTATUS v5; // edi
  const CHAR *v6; // rbp
  unsigned __int64 v7; // rax
  unsigned int v8; // edx
  PWSTR v11; // r10
  WCHAR *v12; // r14
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  WCHAR *v16; // r11
  unsigned int v17; // ecx
  unsigned int v18; // edx
  char v20; // dl
  int v21; // edx
  unsigned int v22; // ecx
  WCHAR v23; // dx
  unsigned int v24; // eax
  unsigned int v25; // edx
  CHAR v26; // r8
  unsigned int v27; // edx
  int v28; // edx
  unsigned int v29; // edx
  __int64 v30; // rax

  v5 = 0;
  v6 = &UTF8StringSource[UTF8StringByteCount];
  v7 = (unsigned __int64)UnicodeStringMaxByteCount >> 1;
  v8 = 0;
  v11 = UnicodeStringDestination;
  v12 = &UnicodeStringDestination[v7];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( !UnicodeStringDestination )
  {
    if ( UnicodeStringActualByteCount )
      return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
    else
      return -1073741811;
  }
  while ( 1 )
  {
    if ( UTF8StringSource >= v6 )
      goto LABEL_25;
    v13 = *UTF8StringSource++;
    if ( !v8 )
    {
      LOWORD(v8) = v13;
      if ( v13 <= 0x7F )
        goto LABEL_6;
LABEL_58:
      if ( (v8 & 0x40) != 0 )
      {
        if ( (v8 & 0x20) != 0 )
        {
          v24 = v8 & 0xF;
          if ( (v8 & 0x10) == 0 )
          {
            v8 = v24 | 0x48228000;
            continue;
          }
          if ( v24 <= 4 )
          {
            v8 = v24 | 0x504D0C00;
            continue;
          }
        }
        else
        {
          v25 = v8 & 0x1F;
          if ( v25 > 1 )
          {
            v8 = v25 | 0x800000;
            continue;
          }
        }
      }
      goto LABEL_46;
    }
    if ( (v13 & 0xC0) != 0x80 )
    {
      --UTF8StringSource;
LABEL_46:
      v5 = 263;
      LOWORD(v8) = -3;
      goto LABEL_6;
    }
    v8 = (v8 << 6) | v13 & 0x3F;
    if ( (v8 & 0x20000000) == 0 )
    {
      if ( (v8 & 0x10000000) != 0 )
      {
        if ( (v8 & 0x800000) != 0 || (v8 & 0x1F0) - 16 <= 0xF0 )
          continue;
      }
      else if ( (v8 & 0x3E0) != 0 && (v8 & 0x3E0) != 0x360 )
      {
        continue;
      }
      goto LABEL_46;
    }
    if ( (v8 & 0x101F0000) > 0x10000000 )
      break;
LABEL_6:
    if ( v11 >= v12 )
      goto LABEL_79;
    *v11++ = v8;
    v14 = v6 - UTF8StringSource;
    v15 = v12 - v11;
    if ( (unsigned __int64)(v6 - UTF8StringSource) > 0xD )
    {
      if ( v14 < v15 )
        v15 = v6 - UTF8StringSource;
      v16 = &v11[v15 - 7];
      if ( v11 >= v16 )
        goto LABEL_19;
LABEL_11:
      v17 = *UTF8StringSource++;
      if ( v17 > 0x7F )
        goto LABEL_33;
      *v11++ = v17;
      if ( ((unsigned __int8)UTF8StringSource & 1) == 0 )
        goto LABEL_13;
      v17 = *UTF8StringSource++;
      if ( v17 > 0x7F )
        goto LABEL_33;
      *v11++ = v17;
LABEL_13:
      if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
        goto LABEL_16;
      v17 = *(unsigned __int16 *)UTF8StringSource;
      if ( (v17 & 0x8080) == 0 )
      {
        UTF8StringSource += 2;
        *v11 = v17 & 0x7F;
        v11[1] = (v17 >> 8) & 0x7F;
        v11 += 2;
LABEL_16:
        while ( v11 < v16 )
        {
          v18 = *((_DWORD *)UTF8StringSource + 1);
          v17 = *(_DWORD *)UTF8StringSource;
          if ( ((*(_DWORD *)UTF8StringSource | v18) & 0x80808080) != 0 )
            goto LABEL_29;
          UTF8StringSource += 8;
          *v11 = v17 & 0x7F;
          v11[1] = (v17 >> 8) & 0x7F;
          v11[2] = BYTE2(v17) & 0x7F;
          v11[3] = HIBYTE(v17) & 0x7F;
          v11[4] = v18 & 0x7F;
          v11[5] = (v18 >> 8) & 0x7F;
          v11[6] = BYTE2(v18) & 0x7F;
          v11[7] = HIBYTE(v18) & 0x7F;
          v11 += 8;
        }
LABEL_19:
        v8 = 0;
        continue;
      }
LABEL_29:
      ++UTF8StringSource;
      if ( (unsigned __int8)v17 > 0x7Fu )
      {
LABEL_33:
        v20 = *UTF8StringSource++;
        if ( (v17 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
        {
LABEL_39:
          UTF8StringSource -= 2;
          goto LABEL_19;
        }
        v21 = v20 & 0x3F;
        if ( (v17 & 0x20) != 0 )
        {
          v26 = *UTF8StringSource;
          v27 = ((v17 & 0xF) << 6) | v21;
          if ( (v17 & 0x10) != 0 )
          {
            if ( (v27 >> 4) - 1 > 0xF )
              goto LABEL_39;
            if ( (v26 & 0xC0) != 0x80 )
              goto LABEL_39;
            v28 = v26 & 0x3F | (v27 << 6);
            if ( (UTF8StringSource[1] & 0xC0) != 0x80 )
              goto LABEL_39;
            v29 = UTF8StringSource[1] & 0x3F | (v28 << 6);
            *v11++ = ((v29 >> 10) & 0x7FF) - 10304;
            v23 = (v29 & 0x3FF) - 9216;
            v30 = 2LL;
          }
          else
          {
            if ( (v27 & 0x3E0) == 0 || (v27 & 0x3E0) == 0x360 || (v26 & 0xC0) != 0x80 )
              goto LABEL_39;
            v23 = v26 & 0x3F | ((_WORD)v27 << 6);
            v30 = 1LL;
          }
          UTF8StringSource += v30;
          --v16;
        }
        else
        {
          v22 = v17 & 0x1F;
          if ( v22 <= 1 )
            goto LABEL_39;
          v23 = ((_WORD)v22 << 6) | v21;
        }
        *v11 = v23;
        --v16;
      }
      else
      {
        *v11 = (unsigned __int8)v17;
      }
      if ( ++v11 >= v16 )
        goto LABEL_19;
      goto LABEL_11;
    }
    if ( v15 >= v14 )
    {
      while ( UTF8StringSource < v6 )
      {
        v8 = *UTF8StringSource++;
        if ( v8 > 0x7F )
          goto LABEL_58;
        *v11++ = v8;
      }
      v8 = 0;
LABEL_25:
      if ( v8 )
      {
        v5 = 263;
        if ( v11 < v12 )
          *v11++ = -3;
        else
          v5 = -1073741789;
      }
      if ( UnicodeStringActualByteCount )
        *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
      return v5;
    }
    v8 = 0;
  }
  if ( v11 < v12 )
  {
    *v11++ = ((v8 >> 10) & 0x7FF) - 10304;
    LOWORD(v8) = (v8 & 0x3FF) - 9216;
    goto LABEL_6;
  }
LABEL_79:
  if ( UnicodeStringActualByteCount )
    *UnicodeStringActualByteCount = 2 * (v11 - UnicodeStringDestination);
  return -1073741789;
}
