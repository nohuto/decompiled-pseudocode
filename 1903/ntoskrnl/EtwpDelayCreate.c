/*
 * XREFs of EtwpDelayCreate @ 0x1406B8E58
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     EtwpSavePersistedLogger @ 0x140907A28 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpCreateDirectoryFile @ 0x1406B8F38 (EtwpCreateDirectoryFile.c)
 *     EtwpCreateNtFileName @ 0x1406B9078 (EtwpCreateNtFileName.c)
 */

__int64 __fastcall EtwpDelayCreate(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5, char a6)
{
  __int64 v8; // rcx
  int v9; // eax
  WCHAR *v10; // rsi
  int v11; // edi
  __int16 *i; // rbx
  __int16 v14; // ax
  int v15; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-40h] BYREF
  int v18; // [rsp+98h] [rbp+10h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  P = 0LL;
  v9 = EtwpCreateNtFileName(v8, &P, &v18);
  v10 = (WCHAR *)P;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v11 = EtwpCreateDirectoryFile((PCWSTR)P, a1, &IoStatusBlock, (unsigned __int8)*a3);
    if ( v11 == -1073741766 && a6 == 1 && v18 == 24 )
    {
      for ( i = (__int16 *)(v10 + 12); ; ++i )
      {
        v14 = *i;
        if ( *i == 92 )
          break;
        if ( !v14 )
          goto LABEL_22;
      }
      while ( v14 )
      {
        v14 = *++i;
        if ( *i == 92 )
        {
          v15 = (unsigned __int8)*a3;
          *i = 0;
          v11 = EtwpCreateDirectoryFile(v10, 0LL, &IoStatusBlock, v15);
          if ( v11 < 0 )
            goto LABEL_3;
          *i = 92;
          v14 = 92;
        }
      }
LABEL_22:
      v11 = EtwpCreateDirectoryFile(v10, a1, &IoStatusBlock, (unsigned __int8)*a3);
    }
  }
LABEL_3:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v11 >= 0 && *a3 == 1 && IoStatusBlock.Information == 2 )
    *a3 = 0;
  return (unsigned int)v11;
}
