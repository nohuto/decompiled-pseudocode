/*
 * XREFs of IoCheckEaBufferValidity @ 0x14060E080
 * Callers:
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckEaBufferValidity(PFILE_FULL_EA_INFORMATION EaBuffer, ULONG EaLength, PULONG ErrorOffset)
{
  ULONG v3; // r10d
  PFILE_FULL_EA_INFORMATION v4; // r9
  int v5; // eax
  __int64 EaNameLength; // rdx
  ULONG v7; // r11d
  __int64 NextEntryOffset; // rdx

  v3 = EaLength;
  v4 = EaBuffer;
  if ( EaLength > 0x7FFFFFFF )
  {
    *ErrorOffset = 0;
  }
  else
  {
    v5 = (int)EaBuffer;
    if ( EaLength < 8 )
    {
LABEL_11:
      *ErrorOffset = v5 - (_DWORD)EaBuffer;
    }
    else
    {
      while ( 1 )
      {
        EaNameLength = v4->EaNameLength;
        v7 = v4->EaValueLength + EaNameLength + 9;
        if ( v3 < v7 || v4->EaName[EaNameLength] )
          break;
        NextEntryOffset = v4->NextEntryOffset;
        if ( !(_DWORD)NextEntryOffset )
          return 0;
        if ( ((v7 + 3) & 0xFFFFFFFC) != (_DWORD)NextEntryOffset
          || (int)NextEntryOffset < 0
          || v3 < (unsigned int)NextEntryOffset )
        {
          break;
        }
        v4 = (PFILE_FULL_EA_INFORMATION)((char *)v4 + NextEntryOffset);
        v3 -= NextEntryOffset;
        v5 = (int)v4;
        if ( v3 < 8 )
          goto LABEL_11;
      }
      *ErrorOffset = (_DWORD)v4 - (_DWORD)EaBuffer;
    }
  }
  return -2147483628;
}
