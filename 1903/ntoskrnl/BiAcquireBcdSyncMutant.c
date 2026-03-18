/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x14073E050
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140728B98 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14073C588 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14092E478 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092E510 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14092E56C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenMutant @ 0x1401C24B0 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
