/*
 * XREFs of PiDrvDbDestroyNode @ 0x140878824
 * Callers:
 *     PiDrvDbRegisterNode @ 0x140756450 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

void __fastcall PiDrvDbDestroyNode(char *P)
{
  void *v2; // rcx
  char **v3; // rax
  PVOID *v4; // rcx
  void *v5; // rcx

  if ( (*((_DWORD *)P + 16) & 0x10) != 0 )
  {
    v2 = (void *)*((_QWORD *)P + 9);
    if ( v2 )
      ZwClose(v2);
  }
  v3 = *(char ***)P;
  if ( *(_QWORD *)P )
  {
    if ( v3[1] != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = (char *)v4;
  }
  RtlFreeAnsiString((PUNICODE_STRING)P + 1);
  RtlFreeAnsiString((PUNICODE_STRING)P + 2);
  RtlFreeAnsiString((PUNICODE_STRING)P + 3);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 504));
  if ( P[192] )
    ExDeleteResourceLite((PERESOURCE)(P + 88));
  v5 = (void *)*((_QWORD *)P + 59);
  if ( v5 )
    ZwClose(v5);
  ExFreePoolWithTag(P, 0);
}
