/*
 * XREFs of AcpiDiagTraceFanEvent @ 0x1C0007720
 * Callers:
 *     ACPIFanPowerCallback @ 0x1C0007680 (ACPIFanPowerCallback.c)
 *     AcpiDiagTraceFanRundown @ 0x1C0049A70 (AcpiDiagTraceFanRundown.c)
 *     AcpiDiagTraceFanStatusChange @ 0x1C0049B1C (AcpiDiagTraceFanStatusChange.c)
 * Callees:
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000ABA0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceFanEvent(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        ULONG a3,
        struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 Length; // ax
  int v9; // ecx
  wchar_t *Buffer; // rax
  __int16 v11; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING v12[2]; // [rsp+38h] [rbp-20h] BYREF

  *(_QWORD *)&v12[0].Length = 0LL;
  v12[0].Buffer = 0LL;
  RtlInitUnicodeString(v12, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, a2)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 712), v12, 1LL) >= 0 )
  {
    a4->Reserved = 0;
    Length = v12[0].Length;
    a4->Size = 2;
    v9 = Length >> 1;
    a4->Ptr = (unsigned __int64)&v11;
    Buffer = v12[0].Buffer;
    a4[1].Reserved = 0;
    v11 = v9;
    a4[1].Ptr = (unsigned __int64)Buffer;
    a4[1].Size = 2 * v9;
    EtwWrite(AcpiDiagHandle, a2, 0LL, a3, a4);
  }
  if ( v12[0].Buffer )
    ExFreePoolWithTag(v12[0].Buffer, 0);
}
