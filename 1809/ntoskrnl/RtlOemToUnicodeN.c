/*
 * XREFs of RtlOemToUnicodeN @ 0x1406F83B0
 * Callers:
 *     FsRtlNotifyUpdateBuffer @ 0x1406A2D54 (FsRtlNotifyUpdateBuffer.c)
 *     RtlOemStringToUnicodeString @ 0x1406F82D0 (RtlOemStringToUnicodeString.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140891210 (RtlOemStringToCountedUnicodeString.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x1406BEB10 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlOemToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH OemString,
        ULONG BytesInOemString)
{
  NTSTATUS v5; // ebx
  PWCH v7; // r10
  ULONG v8; // edx
  ULONG v9; // r11d
  ULONG v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rax
  ULONG *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rsi
  int v18; // edi
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  char v21; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  v7 = UnicodeString;
  if ( BYTE4(NlsMbCodePageTag) )
  {
    v15 = (ULONG *)&v21;
    if ( BytesInUnicodeString )
      v15 = BytesInUnicodeString;
    if ( BytesInOemString )
    {
      v16 = RtlUTF8ToUnicodeN(UnicodeString, MaxBytesInUnicodeString, v15, OemString, BytesInOemString);
    }
    else
    {
      *v15 = 0;
      v16 = 0;
    }
    if ( v16 == -1073741789 )
      return -2147483643;
    return v5;
  }
  else
  {
    v8 = BytesInOemString;
    v9 = MaxBytesInUnicodeString >> 1;
    if ( (_BYTE)NlsMbOemCodePageTag )
    {
      v17 = NlsMbOemCodePageTables;
      v18 = (int)UnicodeString;
      while ( v9 && v8 )
      {
        v19 = *(unsigned __int8 *)OemString;
        --v9;
        --v8;
        v20 = NlsOemLeadByteInfoTable[v19];
        if ( v20 )
        {
          if ( !v8 )
          {
            *v7 = 0;
            LODWORD(v7) = (_DWORD)v7 + 2;
            break;
          }
          ++OemString;
          --v8;
          *v7 = *(_WORD *)(v17 + 2 * (v20 + (unsigned __int64)*(unsigned __int8 *)OemString));
        }
        else
        {
          *v7 = *(_WORD *)(NlsOemToUnicodeData + 2 * v19);
        }
        ++v7;
        ++OemString;
      }
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = (_DWORD)v7 - v18;
    }
    else
    {
      v10 = BytesInOemString;
      if ( v9 < BytesInOemString )
        v10 = v9;
      if ( BytesInUnicodeString )
        *BytesInUnicodeString = 2 * v10;
      v11 = NlsOemToUnicodeData;
      if ( v10 )
      {
        v12 = v10;
        do
        {
          v13 = *(unsigned __int8 *)OemString++;
          *v7++ = *(_WORD *)(v11 + 2 * v13);
          --v12;
        }
        while ( v12 );
      }
    }
    return v9 < v8 ? 0x80000005 : 0;
  }
}
