/*
 * XREFs of ExIsMultiSessionSku @ 0x140788314
 * Callers:
 *     PspSiloInitializeIsMultiSessionSku @ 0x1408C5CAC (PspSiloInitializeIsMultiSessionSku.c)
 *     InitSkuSessionParameters @ 0x140A20958 (InitSkuSessionParameters.c)
 * Callees:
 *     ApiSetResolveToHost @ 0x14015441C (ApiSetResolveToHost.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     PsQueryCurrentApiSetSchema @ 0x14070F570 (PsQueryCurrentApiSetSchema.c)
 */

__int64 __fastcall ExIsMultiSessionSku(_BYTE *a1)
{
  __int64 result; // rax
  __int64 CurrentApiSetSchema; // rax
  char v4; // cl
  _QWORD v5[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v7[14]; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v8; // [rsp+D8h] [rbp+6Fh] BYREF

  v5[0] = 4587588LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v5[1] = L"ext-ms-win-session-wtsapi32-l1-1-0";
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 292;
  LODWORD(v7[4]) = 67108868;
  v7[2] = L"NumberOfInitialSessions";
  v7[3] = &v8;
  result = RtlpQueryRegistryValues(2u, L"Session Manager", (__int64)v7, 0LL);
  if ( (int)result >= 0 )
  {
    if ( v8 <= 1 )
    {
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      result = ApiSetResolveToHost(CurrentApiSetSchema, (unsigned __int16 *)v5, 0LL, (char *)&v8, (__int64)v6);
      if ( (int)result >= 0 )
      {
        v4 = v8;
        if ( (_BYTE)v8 )
        {
          v4 = v8;
          if ( !LOWORD(v6[0]) )
            v4 = 0;
        }
        *a1 = v4;
      }
    }
    else
    {
      *a1 = 1;
    }
  }
  return result;
}
