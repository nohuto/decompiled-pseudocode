/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x1406FB80C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x1406FB80C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406FCABC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086BB08 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x1406FB80C (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rcx
  _QWORD **v7; // rdi
  _QWORD *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax

  v3 = (_QWORD **)(a1 + 224);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v13 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
LABEL_25:
      __fastfail(3u);
    *v3 = v13;
    v13[1] = v3;
    PiDevCfgFreeDriverNode(v4, a2);
  }
  v5 = (_QWORD **)(a1 + 208);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 )
      goto LABEL_25;
    v14 = (_QWORD *)*v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 )
      goto LABEL_25;
    *v5 = v14;
    v14[1] = v5;
    PiDevCfgFreeDriverNode(v6, a2);
  }
  v7 = (_QWORD **)(a1 + 368);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 )
      goto LABEL_25;
    v15 = (_QWORD *)*v8;
    if ( *(_QWORD **)(*v8 + 8LL) != v8 )
      goto LABEL_25;
    *v7 = v15;
    v15[1] = v7;
    PiDevCfgFreeDriverNode(v8, a2);
  }
  v9 = *(void **)(a1 + 144);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 16);
  if ( v10 )
    ZwClose(v10);
  v11 = *(void **)(a1 + 24);
  if ( v11 )
    ZwClose(v11);
  v12 = *(void **)(a1 + 32);
  if ( v12 )
    ZwClose(v12);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 56));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 40));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 72));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 88));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 128));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 160));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 256));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 392));
  ExFreePoolWithTag((PVOID)a1, 0);
}
