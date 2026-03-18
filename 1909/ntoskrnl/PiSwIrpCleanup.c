/*
 * XREFs of PiSwIrpCleanup @ 0x14074DE7C
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwDispatch @ 0x140721AA0 (PiSwDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PiSwCloseDescendants @ 0x1407330B0 (PiSwCloseDescendants.c)
 *     PiSwFindSwDevice @ 0x1407330E4 (PiSwFindSwDevice.c)
 *     PiSwCloseDevice @ 0x14074DF5C (PiSwCloseDevice.c)
 */

void __fastcall PiSwIrpCleanup(__int64 a1)
{
  IRP *v2; // rsi
  __int64 v3; // rax
  char v4; // di
  const wchar_t *v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 SwDevice; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v2 = 0LL;
  DestinationString.Buffer = 0LL;
  PiSwLock();
  if ( !*(_DWORD *)(a1 + 180) )
    goto LABEL_11;
  v3 = *(_QWORD *)(a1 + 112);
  v4 = 0;
  while ( 1 )
  {
    v5 = *(const wchar_t **)(v3 + 8);
    if ( wcsnicmp(v5, L"SWD\\", 4uLL) )
      break;
    SwDevice = PiSwFindSwDevice(v5);
    if ( !SwDevice )
      goto LABEL_11;
    if ( !*(_DWORD *)(SwDevice + 180) && (*(_DWORD *)(SwDevice + 4) & 2) == 0 )
      goto LABEL_6;
    v3 = *(_QWORD *)(SwDevice + 112);
  }
  RtlInitUnicodeString(&DestinationString, v5);
  v6 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
  if ( v6 )
    ObfDereferenceObject(v6);
  else
LABEL_11:
    v4 = 1;
LABEL_6:
  v7 = *(_QWORD *)(a1 + 144);
  if ( v7 && _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL) )
  {
    v2 = *(IRP **)(a1 + 144);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  *(_DWORD *)(a1 + 4) &= ~1u;
  if ( v4 )
  {
    PiSwCloseDescendants(a1 + 72);
    PiSwCloseDevice(a1);
  }
  PiSwUnlock();
  if ( v2 )
  {
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741536;
    IofCompleteRequest(v2, 0);
  }
}
