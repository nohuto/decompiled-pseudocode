/*
 * XREFs of sub_180001090 @ 0x180001090
 * Callers:
 *     sub_18000112C @ 0x18000112C (sub_18000112C.c)
 *     sub_1800013E4 @ 0x1800013E4 (sub_1800013E4.c)
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_1800017C0 @ 0x1800017C0 (sub_1800017C0.c)
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_1800019A8 @ 0x1800019A8 (sub_1800019A8.c)
 *     sub_180001A78 @ 0x180001A78 (sub_180001A78.c)
 *     sub_180001BC0 @ 0x180001BC0 (sub_180001BC0.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180005CA0 @ 0x180005CA0 (sub_180005CA0.c)
 *     sub_180008510 @ 0x180008510 (sub_180008510.c)
 *     sub_18000C288 @ 0x18000C288 (sub_18000C288.c)
 *     sub_180013E44 @ 0x180013E44 (sub_180013E44.c)
 *     sub_180026D08 @ 0x180026D08 (sub_180026D08.c)
 *     sub_180026E04 @ 0x180026E04 (sub_180026E04.c)
 *     sub_1800273FC @ 0x1800273FC (sub_1800273FC.c)
 *     sub_1800277B0 @ 0x1800277B0 (sub_1800277B0.c)
 *     sub_1800298F4 @ 0x1800298F4 (sub_1800298F4.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180001090(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
