/*
 * XREFs of EtwpDelayCreate @ 0x14069B2B4
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpCreateDirectoryFile @ 0x14069B394 (EtwpCreateDirectoryFile.c)
 *     EtwpCreateNtFileName @ 0x14069B4E4 (EtwpCreateNtFileName.c)
 */

__int64 __fastcall EtwpDelayCreate(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, char a5, char a6)
{
  __int64 v8; // rcx
  int v9; // eax
  WCHAR *v10; // rsi
  int v11; // edi
  int v12; // eax
  __int16 *i; // rbx
  __int16 v15; // ax
  int v16; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-40h] BYREF
  int v19; // [rsp+98h] [rbp+10h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  P = 0LL;
  v9 = EtwpCreateNtFileName(v8, &P, &v19);
  v10 = (WCHAR *)P;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = EtwpCreateDirectoryFile((PCWSTR)P, a1, &IoStatusBlock, (unsigned __int8)*a3);
    v11 = v12;
    if ( a6 == 1 && v12 == -1073741766 && v19 == 24 )
    {
      for ( i = (__int16 *)(v10 + 12); ; ++i )
      {
        v15 = *i;
        if ( *i == 92 )
          break;
        if ( !v15 )
          goto LABEL_22;
      }
      while ( v15 )
      {
        v15 = *++i;
        if ( *i == 92 )
        {
          v16 = (unsigned __int8)*a3;
          *i = 0;
          v11 = EtwpCreateDirectoryFile(v10, 0LL, &IoStatusBlock, v16);
          if ( v11 < 0 )
            goto LABEL_3;
          *i = 92;
          v15 = 92;
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
