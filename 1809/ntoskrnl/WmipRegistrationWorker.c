/*
 * XREFs of WmipRegistrationWorker @ 0x1406C74F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140135440 (IoControlPnpDeviceActionQueue.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipRegisterOrUpdateDS @ 0x1406CAC08 (WmipRegisterOrUpdateDS.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rdi
  int v4; // ecx
  __int64 result; // rax

  do
  {
    IoControlPnpDeviceActionQueue(1);
    IoControlPnpDeviceActionQueue(0);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v0 = WmipRegWorkList;
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList
      || (v1 = *(_QWORD *)WmipRegWorkList, *(PVOID *)(*(_QWORD *)WmipRegWorkList + 8LL) != WmipRegWorkList) )
    {
      __fastfail(3u);
    }
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v1 + 8) = &WmipRegWorkList;
    KeReleaseMutex(&WmipSMMutex, 0);
    v3 = v0[3];
    if ( v3 )
    {
      v4 = *((_DWORD *)v0 + 4);
      if ( v4 )
      {
        if ( v4 != 1 )
          goto LABEL_7;
        LOBYTE(v2) = 1;
      }
      else
      {
        v2 = 0LL;
      }
      WmipRegisterOrUpdateDS(v0[3], v2);
LABEL_7:
      WmipUnreferenceRegEntry(v3);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
