/*
 * XREFs of DrvDbSetRegValueMappedProperty @ 0x140904B78
 * Callers:
 *     DrvDbSetDeviceIdMappedProperty @ 0x140903BA4 (DrvDbSetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140903D7C (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x140904364 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x140904484 (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     _RegRtlSetValue @ 0x1406FDE48 (_RegRtlSetValue.c)
 */

NTSTATUS __fastcall DrvDbSetRegValueMappedProperty(__int64 a1, void *a2, __int64 a3, int a4, int *a5, ULONG a6)
{
  int v6; // ebx
  int *v8; // r9
  ULONG v9; // eax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 != 2 )
        return -1073741811;
      v12 = *(unsigned __int16 *)a5;
    }
    else
    {
      if ( a4 != 17 )
      {
        v8 = a5;
        v9 = a6;
        return RegRtlSetValue(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
      }
      if ( a6 != 1 )
        return -1073741811;
      LOBYTE(v6) = *(_BYTE *)a5 == 0xFF;
      v12 = v6;
    }
    v9 = 4;
    v8 = &v12;
    return RegRtlSetValue(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
  }
  result = RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a3 + 16));
  if ( result >= 0 )
    result = ZwDeleteValueKey(a2, &DestinationString);
  if ( result == -1073741772 )
    return -1073741275;
  return result;
}
