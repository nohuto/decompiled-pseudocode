/*
 * XREFs of PiDrvDbDestroyNode @ 0x14083E864
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 */

void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx

  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  RtlFreeAnsiString((PUNICODE_STRING)P + 2);
  RtlFreeAnsiString((PUNICODE_STRING)P + 3);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 504));
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v2 = (void *)*((_QWORD *)P + 59);
  if ( v2 )
    ZwClose(v2);
  ExFreePoolWithTag(P, 0);
}
