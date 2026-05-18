/*
 * XREFs of sub_180001128 @ 0x180001128
 * Callers:
 *     sub_180118C00 @ 0x180118C00 (sub_180118C00.c)
 *     sub_180118D80 @ 0x180118D80 (sub_180118D80.c)
 *     sub_180118F10 @ 0x180118F10 (sub_180118F10.c)
 *     sub_180119130 @ 0x180119130 (sub_180119130.c)
 *     sub_180119420 @ 0x180119420 (sub_180119420.c)
 *     sub_180119610 @ 0x180119610 (sub_180119610.c)
 *     sub_1801199D0 @ 0x1801199D0 (sub_1801199D0.c)
 *     sub_180119DC0 @ 0x180119DC0 (sub_180119DC0.c)
 *     sub_180119FB0 @ 0x180119FB0 (sub_180119FB0.c)
 *     sub_18011A360 @ 0x18011A360 (sub_18011A360.c)
 *     sub_18011A690 @ 0x18011A690 (sub_18011A690.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 *     sub_18011AB90 @ 0x18011AB90 (sub_18011AB90.c)
 *     sub_18011AD90 @ 0x18011AD90 (sub_18011AD90.c)
 *     sub_18011B290 @ 0x18011B290 (sub_18011B290.c)
 *     sub_18011B440 @ 0x18011B440 (sub_18011B440.c)
 *     sub_18011B6B0 @ 0x18011B6B0 (sub_18011B6B0.c)
 *     sub_18011BC20 @ 0x18011BC20 (sub_18011BC20.c)
 *     sub_18011BDE0 @ 0x18011BDE0 (sub_18011BDE0.c)
 *     sub_18011C350 @ 0x18011C350 (sub_18011C350.c)
 *     sub_18011C480 @ 0x18011C480 (sub_18011C480.c)
 *     sub_18011C5D0 @ 0x18011C5D0 (sub_18011C5D0.c)
 *     sub_18011C700 @ 0x18011C700 (sub_18011C700.c)
 *     sub_18011C830 @ 0x18011C830 (sub_18011C830.c)
 * Callees:
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

ULONG __fastcall sub_180001128(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONGLONG v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-20h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v6;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData[1].Ptr = (ULONGLONG)v7;
  UserData->Reserved = 2;
  UserData[1].Size = *v7;
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
