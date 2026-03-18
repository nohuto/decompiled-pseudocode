/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x140866F9C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140867B68 (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceMigrationNode(char *P)
{
  void *v2; // rcx
  UNICODE_STRING *v3; // rdi
  __int64 v4; // rsi

  v2 = (void *)*((_QWORD *)P + 5);
  if ( v2 )
    ZwClose(v2);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 24));
  v3 = (UNICODE_STRING *)(P + 48);
  v4 = 2LL;
  do
  {
    RtlFreeAnsiString(v3++);
    --v4;
  }
  while ( v4 );
  RtlFreeAnsiString((PUNICODE_STRING)(P + 104));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 120));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 136));
  RtlFreeAnsiString((PUNICODE_STRING)P + 10);
  ExFreePoolWithTag(P, 0);
}
