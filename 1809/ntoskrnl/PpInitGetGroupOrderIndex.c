/*
 * XREFs of PpInitGetGroupOrderIndex @ 0x1409CCF98
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406F6E14 (PnpRegSzToString.c)
 */

__int16 __fastcall PpInitGetGroupOrderIndex(void *a1)
{
  _WORD *v1; // rbx
  unsigned int v2; // edx
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bp
  wchar_t *v5; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  if ( !PiInitGroupOrderTable )
    return -1;
  if ( !a1 )
    return PiInitGroupOrderTableCount + 1;
  if ( IopGetRegistryValue(a1, L"Group", 0, &P) < 0 )
    return PiInitGroupOrderTableCount;
  v1 = P;
  if ( *((_DWORD *)P + 1) != 1 || (v2 = *((_DWORD *)P + 3)) == 0 )
  {
    ExFreePoolWithTag(P, 0);
    return PiInitGroupOrderTableCount;
  }
  PnpRegSzToString((char *)P + *((unsigned int *)P + 2), v2, (int *)&P);
  v3 = 0;
  v4 = PiInitGroupOrderTableCount;
  String1.MaximumLength = v1[6];
  v5 = (_WORD *)((char *)v1 + *((unsigned int *)v1 + 2));
  String1.Length = (unsigned __int16)P;
  for ( String1.Buffer = v5; v3 < v4; ++v3 )
  {
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)PiInitGroupOrderTable + v3, 1u) )
      break;
  }
  ExFreePoolWithTag(v1, 0);
  return v3;
}
