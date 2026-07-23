/*
 * XREFs of BiUpdateEfiEntry @ 0x1408F5E88
 * Callers:
 *     BiCreateEfiEntry @ 0x1408F4060 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x1408F4820 (BiExportBcdObjects.c)
 * Callees:
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 *     BiGetElement @ 0x1408F23B8 (BiGetElement.c)
 *     BiCreateMergedBootEntry @ 0x1408F4238 (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x1408F553C (BiModifyBootEntry.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  PVOID v2; // r12
  _DWORD *v4; // r15
  _WORD *v5; // r14
  NTSTATUS v6; // ebx
  _DWORD *v7; // r13
  int v8; // eax
  _BOOT_ENTRY *v9; // rdi
  unsigned int v10; // eax
  _DWORD *v12; // [rsp+30h] [rbp-20h] BYREF
  _WORD *v13; // [rsp+38h] [rbp-18h] BYREF
  PVOID P; // [rsp+40h] [rbp-10h] BYREF
  void *Buf2; // [rsp+48h] [rbp-8h] BYREF
  int v17; // [rsp+A0h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  Buf2 = 0LL;
  BcdObjectHandle = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v6 < 0 )
    goto LABEL_13;
  BiGetElement(BcdObjectHandle, 0x12000004u, &P, &v17);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u, &v12, &v17);
    BiGetElement(BcdObjectHandle, 0x12000002u, &v13, &v17);
    v4 = v12;
    v5 = v13;
  }
  v7 = *(_DWORD **)a2[2].Data4;
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
  if ( (v9 = (_BOOT_ENTRY *)Buf2, v10 = v7[1], v10 == *((_DWORD *)Buf2 + 1)) && !memcmp(v7, Buf2, v10)
    || (v6 = BiModifyBootEntry(v9), v6 >= 0) )
  {
    ExFreePoolWithTag(v7, 0x4B444342u);
    *(_QWORD *)a2[2].Data4 = v9;
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
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v6;
}
