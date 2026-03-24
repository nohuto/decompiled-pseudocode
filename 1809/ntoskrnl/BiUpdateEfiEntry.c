/*
 * XREFs of BiUpdateEfiEntry @ 0x1408F4BC8
 * Callers:
 *     BiCreateEfiEntry @ 0x1408F2DA0 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x1408F3560 (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x140196200 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 *     BiGetElement @ 0x1408F10F8 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x1408F2F78 (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x1408F427C (BiModifyBootEntry.c)
 */

__int64 __fastcall BiUpdateEfiEntry(__int64 a1, __int64 a2)
{
  PVOID v2; // r12
  _DWORD *v4; // r15
  _WORD *v5; // r14
  int v6; // ebx
  _DWORD *v7; // r13
  int v8; // eax
  struct _BOOT_ENTRY *v9; // rdi
  unsigned int v10; // eax
  _DWORD *v12; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v13; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  void *Buf2; // [rsp+48h] [rbp-8h] BYREF
  int v17; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buf2 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = BcdOpenObject(a1, (unsigned int *)(a2 + 16), &v18);
  if ( v6 < 0 )
    goto LABEL_13;
  BiGetElement(v18, 0x12000004u, &P, &v17);
  if ( (*(_DWORD *)(a2 + 48) & 8) == 0 )
  {
    BiGetElement(v18, 0x11000001u, &v12, &v17);
    BiGetElement(v18, 0x12000002u, &v13, &v17);
    v4 = v12;
    v5 = v13;
  }
  v7 = *(_DWORD **)(a2 + 40);
  v2 = P;
  v8 = BiCreateMergedBootEntry(v7, (char *)P, v4, v5, &Buf2);
  v6 = v8;
  if ( v8 == -1073741766 )
  {
    v6 = 0;
    goto LABEL_14;
  }
  if ( v8 < 0 )
    goto LABEL_13;
  if ( (v9 = (struct _BOOT_ENTRY *)Buf2, v10 = v7[1], v10 == *((_DWORD *)Buf2 + 1)) && !memcmp(v7, Buf2, v10)
    || (v6 = BiModifyBootEntry(v9), v6 >= 0) )
  {
    ExFreePoolWithTag(v7, 0x4B444342u);
    *(_QWORD *)(a2 + 40) = v9;
  }
  else
  {
    ExFreePoolWithTag(v9, 0x4B444342u);
  }
  if ( v6 < 0 )
LABEL_13:
    BiLogMessage(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
LABEL_14:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v18 )
    BcdCloseObject(v18);
  return (unsigned int)v6;
}
