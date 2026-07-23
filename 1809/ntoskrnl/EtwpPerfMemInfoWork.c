/*
 * XREFs of EtwpPerfMemInfoWork @ 0x1408B9B60
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpLogMemInfoWs @ 0x1408B92AC (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpPerfMemInfoWork(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[4];
  ExFreePoolWithTag(a1, 0);
  EtwpLogMemInfoWs(0LL, v1);
}
