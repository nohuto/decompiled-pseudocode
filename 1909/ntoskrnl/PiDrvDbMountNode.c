/*
 * XREFs of PiDrvDbMountNode @ 0x140878294
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x1405BE8F0 (PiPnpRtlObjectActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PiDrvDbFindNode @ 0x1402A1300 (PiDrvDbFindNode.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

__int64 __fastcall PiDrvDbMountNode(PCWSTR SourceString)
{
  unsigned int v2; // ebx
  UNICODE_STRING String2; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+18h] BYREF

  v7 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&String2, SourceString);
  if ( (int)PiDrvDbFindNode(&String2, &v7) < 0 )
    v2 = -1073741637;
  else
    v2 = (*(_DWORD *)(v7 + 64) & 1) != 0 ? -1073741790 : 0x40000000;
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  return v2;
}
