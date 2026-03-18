/*
 * XREFs of PiDevCfgFreeDeviceMigrationNode @ 0x14082D058
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DC0C (PiDevCfgQueryDeviceMigrationNode.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
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
