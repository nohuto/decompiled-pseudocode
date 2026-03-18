/*
 * XREFs of PnpPrepareDriverLoading @ 0x14067F038
 * Callers:
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x1409CBA80 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DAE0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PpCheckInDriverDatabase @ 0x14067F0FC (PpCheckInDriverDatabase.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
 *     PnpSetBlockedDriverEvent @ 0x1408332E0 (PnpSetBlockedDriverEvent.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, void *a3, int a4, _DWORD *a5)
{
  int v7; // ebx
  PIMAGE_NT_HEADERS v9; // rax
  unsigned int v10; // ebx
  _DWORD *P; // [rsp+30h] [rbp-48h]
  _QWORD v13[2]; // [rsp+38h] [rbp-40h] BYREF

  v7 = (int)a3;
  *a5 = 0;
  v9 = RtlImageNtHeader(a3);
  if ( !v9 )
    return 3221225473LL;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v10 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v7, v9->OptionalHeader.SizeOfImage, a4, (__int64)v13);
  if ( v10 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(v13);
  if ( (int)IopGetRegistryValue(a2) >= 0 )
  {
    if ( P[1] == 4 && P[3] == 4 )
      *a5 = *(_DWORD *)((char *)P + (unsigned int)P[2]);
    ExFreePoolWithTag(P, 0);
  }
  return v10;
}
