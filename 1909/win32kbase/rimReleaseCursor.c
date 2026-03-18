/*
 * XREFs of rimReleaseCursor @ 0x1C0159C24
 * Callers:
 *     RIMCmDeactivateContact @ 0x1C01597E0 (RIMCmDeactivateContact.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimReleaseCursor(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r9d
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r10

  v3 = a2;
  v4 = *(unsigned int *)(a1 + 976);
  v5 = (unsigned int)v4;
  v6 = *(_DWORD *)(a1 + 980);
  result = v6;
  if ( (unsigned int)v4 >= v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2, (unsigned int)v4);
    v6 = *(_DWORD *)(a1 + 980);
    result = v6;
    v4 = *(unsigned int *)(a1 + 976);
    v5 = v4;
  }
  v8 = 0LL;
  if ( (_DWORD)result )
  {
    v9 = *(_QWORD *)(a1 + 968);
    while ( 1 )
    {
      result = 3 * v8;
      if ( v3 == *(_DWORD *)(v9 + 12 * v8 + 4) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v6 )
      {
        v5 = (unsigned int)v4;
        goto LABEL_10;
      }
    }
    *(_DWORD *)(v9 + 12 * v8 + 8) = 0;
    v5 = *(unsigned int *)(a1 + 976);
    result = *(_QWORD *)(a1 + 968);
    v4 = 3 * v5;
    if ( *(_DWORD *)(result + 12 * v5 + 8) )
    {
      *(_DWORD *)(a1 + 976) = v8;
      v5 = (unsigned int)v8;
    }
  }
LABEL_10:
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 980) )
    return MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v8, v5);
  return result;
}
