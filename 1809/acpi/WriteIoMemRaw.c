/*
 * XREFs of WriteIoMemRaw @ 0x1C00584EC
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C0058220 (AcpiPccRingDoorbell.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 */

char __fastcall WriteIoMemRaw(_BYTE *a1, int a2, int a3, __int64 a4)
{
  char result; // al
  unsigned __int16 v5; // r9
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  result = 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return result;
    switch ( a3 )
    {
      case 8:
        result = a4;
        __outbyte((unsigned __int16)a1, a4);
        return result;
      case 16:
        result = a4;
        __outword((unsigned __int16)a1, a4);
        return result;
      case 32:
        result = a4;
        __outdword((unsigned __int16)a1, a4);
        return result;
    }
    v5 = 14;
    goto LABEL_15;
  }
  switch ( a3 )
  {
    case 8:
      *a1 = a4;
      break;
    case 16:
      *(_WORD *)a1 = a4;
      break;
    case 32:
      *(_DWORD *)a1 = a4;
      break;
    case 64:
      *(_QWORD *)a1 = a4;
      break;
    default:
      v5 = 15;
LABEL_15:
      LODWORD(v7) = a3;
      return WPP_RECORDER_SF_D(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               0x15u,
               v5,
               (__int64)&WPP_aa09a4a2e6b4360d6f89773cef358f13_Traceguids,
               v7);
  }
  _InterlockedOr(v6, 0);
  return result;
}
