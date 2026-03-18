/*
 * XREFs of RtlpGetRegistryHandle @ 0x1405C38F8
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1406AEEB0 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlWriteRegistryValue @ 0x1406E41C0 (RtlWriteRegistryValue.c)
 *     RtlCheckRegistryKey @ 0x1406E95B0 (RtlCheckRegistryKey.c)
 *     RtlDeleteRegistryValue @ 0x14073CC20 (RtlDeleteRegistryValue.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x140764D88 (RtlSetActiveTimeBias.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140764F90 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCreateRegistryKey @ 0x140789BE0 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1408D315C (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140694B10 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v12; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v14; // eax
  struct _KPRCB *v15; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v17; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING KeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  *(_QWORD *)&KeyPath.Length = 0LL;
  KeyPath.Buffer = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
  }
  else
  {
    v9 = (unsigned int)a1;
    LODWORD(v9) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v9 = (unsigned int)a1;
    if ( (unsigned int)v9 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v12 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v12 )
        goto LABEL_6;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v12 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v12
        || (Size = L->Size,
            AllocateEx = L->AllocateEx,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v12 = (wchar_t *)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
      {
LABEL_6:
        *(_DWORD *)v12 = CurrentPrcb->Number;
      }
      Destination.Buffer = v12;
      if ( v12 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v9 )
          goto LABEL_13;
        if ( (_DWORD)v9 == 5 && RtlFormatCurrentUserKeyPath(&KeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &KeyPath);
          RtlFreeAnsiString(&KeyPath);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v9]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_13:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v14 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v14 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v14;
            }
          }
        }
        v15 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v17 = v15->PPLookasideList[8].P;
        ++v17->TotalFrees;
        if ( LOWORD(v17->ListHead.Alignment) < v17->Depth
          || (++v17->FreeMisses,
              v17 = v15->PPLookasideList[8].L,
              ++v17->TotalFrees,
              LOWORD(v17->ListHead.Alignment) < v17->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v17->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v17->FreeMisses;
          ((void (__fastcall *)(wchar_t *))v17->FreeEx)(Buffer);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
