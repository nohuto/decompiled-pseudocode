/*
 * XREFs of CmpCreateRootNode @ 0x1409C5170
 * Callers:
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCopyName @ 0x1405ADDB0 (CmpCopyName.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmpNameSize @ 0x1406A6734 (CmpNameSize.c)
 */

char __fastcall CmpCreateRootNode(__int64 a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // rsi
  unsigned __int16 v5; // ax
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v12 = a1;
  v3 = CmpMasterHive;
  v13 = 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"REGISTRY");
  v5 = CmpNameSize(&DestinationString.Length);
  v6 = HvAllocateCell((ULONG_PTR)v3, (unsigned int)v5 + 76, 0, &v12, &v13);
  *a3 = v6;
  if ( v6 == -1 )
    return 0;
  v7 = v12;
  *(_DWORD *)(v3[8] + 36LL) = v6;
  *(_DWORD *)v7 = 813934;
  v8 = v12;
  *(_QWORD *)(v12 + 4) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v8 + 16) = -1;
  *(_QWORD *)(v8 + 20) = 0LL;
  *(_DWORD *)(v8 + 28) = -1;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFFLL;
  *(_DWORD *)(v8 + 40) = -1;
  *(_DWORD *)(v8 + 44) = -1;
  *(_DWORD *)(v8 + 48) = -1;
  *(_WORD *)(v8 + 74) = 0;
  *(_QWORD *)(v8 + 60) = 0LL;
  *(_WORD *)(v8 + 52) = 0;
  *(_DWORD *)(v8 + 52) &= 0xFF00FFFF;
  *(_BYTE *)(v8 + 55) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  v9 = CmpCopyName((_BYTE *)(v8 + 76), (const void **)&DestinationString);
  *(_WORD *)(v8 + 72) = v9;
  if ( v9 < DestinationString.Length )
    *(_WORD *)(v7 + 2) |= 0x20u;
  ((void (__fastcall *)(_QWORD *, __int64 *))v3[2])(v3, &v13);
  return 1;
}
