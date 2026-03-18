/*
 * XREFs of Register_RestoreRyzenFeatureBitsPostReset @ 0x1C0003A08
 * Callers:
 *     Register_ControllerReset @ 0x1C00200E4 (Register_ControllerReset.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall Register_RestoreRyzenFeatureBitsPostReset(__int64 a1)
{
  __m128i *v1; // rax
  int Ulong; // eax
  int v4; // eax
  int v5; // eax
  __int64 result; // rax
  int v7; // eax
  int v8; // eax
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(__m128i **)(a1 + 8);
  Interval.QuadPart = 0LL;
  if ( _mm_srli_si128(v1[21], 8).m128i_i8[0] < 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      Debug_FreAssertMsg(
        "MMIO Offset 0xC100 is unexpectedly out of range",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2664LL);
    }
    else
    {
      Ulong = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, Ulong & 0xFF0FFFFF);
    }
  }
  if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0] & 0x100) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC110u )
    {
      Debug_FreAssertMsg(
        "MMIO Offset 0xC10C is unexpectedly out of range",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
        2704LL);
    }
    else
    {
      v4 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v4 & 0xFF0FFFFF);
      v5 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49420LL, v5 & 0xFBFFFFFF);
    }
  }
  result = _mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u64[0];
  if ( (result & 0x200) != 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < 0xC104u )
    {
      return Debug_FreAssertMsg(
               "MMIO Offset 0xC100 is unexpectedly out of range",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
               2753LL);
    }
    else
    {
      v7 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v7 | 0xF00000u);
      Interval.QuadPart = -200LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v8 = XilRegister_ReadUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL);
      return XilRegister_WriteUlong(a1, *(_QWORD *)(a1 + 24) + 49408LL, v8 & 0xFF0FFFFF);
    }
  }
  return result;
}
