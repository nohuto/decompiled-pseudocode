/*
 * XREFs of _CmGetDeviceRelationsList @ 0x14093847C
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x14093852C (_CmGetMatchingFilteredDeviceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     _NtPlugPlayGetDeviceRelationsList @ 0x14093E5E8 (_NtPlugPlayGetDeviceRelationsList.c)
 */

NTSTATUS __fastcall CmGetDeviceRelationsList(int a1, const WCHAR *a2, int a3, int a4, int a5, __int64 a6)
{
  int v8; // ebx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = 4;
  switch ( a3 )
  {
    case 4:
      v8 = 0;
      break;
    case 8:
      v8 = 1;
      break;
    case 16:
      v8 = 2;
      break;
    case 32:
      v8 = 3;
      break;
    case 64:
      break;
    default:
      return -1073741811;
  }
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return NtPlugPlayGetDeviceRelationsList(a1, (unsigned int)&DestinationString, v8, a4, a5, a6);
  return result;
}
