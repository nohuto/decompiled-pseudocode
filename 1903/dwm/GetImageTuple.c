/*
 * XREFs of GetImageTuple @ 0x14000887C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140008950 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     memmove_0 @ 0x140004A73 (memmove_0.c)
 */

DWORD __fastcall GetImageTuple(__int64 a1, CHAR *a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  __int16 v6; // cx
  int v7; // ecx
  int v8; // r8d
  DWORD result; // eax
  DWORD v10; // ecx
  DWORD v11; // edx

  v6 = *(__int16 *)((char *)&word_140000018 + (int)off_14000003C);
  if ( v6 == 267 )
  {
    v7 = *(_DWORD *)&byte_140000040[(int)off_14000003C + 16];
    v8 = *(_DWORD *)((char *)&word_140000008 + (int)off_14000003C);
  }
  else if ( v6 == 523 )
  {
    v7 = *(_DWORD *)&byte_140000040[(int)off_14000003C + 16];
    v8 = *(_DWORD *)((char *)&word_140000008 + (int)off_14000003C);
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  *a4 = v8;
  *a5 = v7;
  result = GetModuleFileNameA(&_ImageBase, a2, 0x104u);
  if ( result )
  {
    v10 = result - 1;
    v11 = result - 1;
    if ( result != 1 )
    {
      while ( a2[v11] != 92 )
      {
        if ( !--v11 )
          goto LABEL_12;
      }
      v10 = v11;
    }
LABEL_12:
    if ( v10 != 259 )
      memmove_0(a2, &a2[v10 + 1], 259 - v10);
    return 1;
  }
  return result;
}
