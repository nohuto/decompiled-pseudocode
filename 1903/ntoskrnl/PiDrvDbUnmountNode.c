/*
 * XREFs of PiDrvDbUnmountNode @ 0x14087ADCC
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1405BE420 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1402A15A0 (PiDrvDbFindNode.c)
 */

__int64 __fastcall PiDrvDbUnmountNode(PCWSTR SourceString)
{
  int Node; // ecx
  int v2; // ecx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  RtlInitUnicodeString(&String2, SourceString);
  Node = PiDrvDbFindNode(&String2, &v5);
  if ( Node >= 0 )
  {
    v2 = *(_DWORD *)(v5 + 64);
    if ( (v2 & 1) != 0 )
      return (unsigned int)-1073741790;
    else
      return (unsigned int)((v2 & 0x10) != 0 ? -1073741637 : -1073741790);
  }
  return (unsigned int)Node;
}
