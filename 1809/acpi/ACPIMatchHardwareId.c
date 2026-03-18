/*
 * XREFs of ACPIMatchHardwareId @ 0x1C009E30C
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C002B070 (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009AADC (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  const WCHAR *v10; // rbx
  int v12; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp+6Fh] BYREF

  *a3 = 0;
  memset(v14, 0, 0x48uLL);
  LOWORD(v14[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v14[2] = 1;
  v7 = ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v14, (unsigned __int64 *)&SourceString);
  if ( v7 >= 0 )
  {
    v10 = SourceString;
    while ( v10 && *v10 )
    {
      RtlInitUnicodeString(&DestinationString, v10);
      v10 += (unsigned __int64)DestinationString.MaximumLength >> 1;
      if ( RtlEqualUnicodeString(&DestinationString, String2, 1u) )
      {
        *a3 = 1;
        break;
      }
    }
    ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  WPP_RECORDER_SF_SqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v8, v9, v12, String2->Buffer);
  return (unsigned int)v7;
}
