/*
 * XREFs of WmipRegistrationWorker @ 0x140718C70
 * Callers:
 *     <none>
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x140099D28 (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x140158EF8 (IoControlPnpDeviceActionQueue.c)
 *     WmipEnterSMCritSection @ 0x14032BB58 (WmipEnterSMCritSection.c)
 *     WmipLeaveSMCritSection @ 0x14032BB84 (WmipLeaveSMCritSection.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipRegisterOrUpdateDS @ 0x14071145C (WmipRegisterOrUpdateDS.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // ecx
  char v5; // dl
  __int64 result; // rax

  do
  {
    WmipEnterSMCritSection();
    v0 = WmipRegWorkList;
    v1 = *((_QWORD *)WmipRegWorkList + 3);
    if ( v1 && *(PDEVICE_OBJECT *)(v1 + 16) != WmipServiceDeviceObject )
    {
      WmipLeaveSMCritSection();
      IoControlPnpDeviceActionQueue(1);
      IoControlPnpDeviceActionQueue(0);
      WmipEnterSMCritSection();
    }
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList
      || (v2 = *(_QWORD *)WmipRegWorkList, *(PVOID *)(*(_QWORD *)WmipRegWorkList + 8LL) != WmipRegWorkList) )
    {
      __fastfail(3u);
    }
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v2 + 8) = &WmipRegWorkList;
    WmipLeaveSMCritSection();
    v3 = v0[3];
    if ( v3 )
    {
      v4 = *((_DWORD *)v0 + 4);
      if ( v4 )
      {
        if ( v4 != 1 )
        {
LABEL_12:
          WmipUnreferenceRegEntry(v3);
          goto LABEL_13;
        }
        v5 = 1;
      }
      else
      {
        v5 = 0;
      }
      WmipRegisterOrUpdateDS(v0[3], v5);
      goto LABEL_12;
    }
LABEL_13:
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
