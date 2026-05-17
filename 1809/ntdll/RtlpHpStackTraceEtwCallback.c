/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x180104CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18006461C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlQueryHeapInformation @ 0x18007B040 (RtlQueryHeapInformation.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(__int64 a1, int a2)
{
  signed __int32 *v2; // rax
  signed __int32 *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-58h] BYREF
  __int128 v6; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+50h] [rbp-38h] BYREF

  if ( a2 == 2 )
  {
    v5 = RtlpHpEnvHandle;
    v2 = (signed __int32 *)RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset(v2, 0, 0x4010uLL);
      *v3 = v4;
      v7[1] = -1LL;
      LODWORD(v7[0]) = 2;
      v7[3] = v3;
      v7[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, 5, v7, 0x28uLL, 0LL);
      v6 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v6);
    }
  }
}
