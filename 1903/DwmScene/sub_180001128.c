/*
 * XREFs of sub_180001128 @ 0x180001128
 * Callers:
 *     sub_180118AF0 @ 0x180118AF0 (sub_180118AF0.c)
 *     sub_180118C70 @ 0x180118C70 (sub_180118C70.c)
 *     sub_180118E00 @ 0x180118E00 (sub_180118E00.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_180119310 @ 0x180119310 (sub_180119310.c)
 *     sub_180119500 @ 0x180119500 (sub_180119500.c)
 *     sub_1801198C0 @ 0x1801198C0 (sub_1801198C0.c)
 *     sub_180119CB0 @ 0x180119CB0 (sub_180119CB0.c)
 *     sub_180119EA0 @ 0x180119EA0 (sub_180119EA0.c)
 *     sub_18011A250 @ 0x18011A250 (sub_18011A250.c)
 *     sub_18011A580 @ 0x18011A580 (sub_18011A580.c)
 *     sub_18011A730 @ 0x18011A730 (sub_18011A730.c)
 *     sub_18011AA80 @ 0x18011AA80 (sub_18011AA80.c)
 *     sub_18011AC80 @ 0x18011AC80 (sub_18011AC80.c)
 *     sub_18011B180 @ 0x18011B180 (sub_18011B180.c)
 *     sub_18011B330 @ 0x18011B330 (sub_18011B330.c)
 *     sub_18011B5A0 @ 0x18011B5A0 (sub_18011B5A0.c)
 *     sub_18011BB10 @ 0x18011BB10 (sub_18011BB10.c)
 *     sub_18011BCD0 @ 0x18011BCD0 (sub_18011BCD0.c)
 *     sub_18011C240 @ 0x18011C240 (sub_18011C240.c)
 *     sub_18011C370 @ 0x18011C370 (sub_18011C370.c)
 *     sub_18011C4C0 @ 0x18011C4C0 (sub_18011C4C0.c)
 *     sub_18011C5F0 @ 0x18011C5F0 (sub_18011C5F0.c)
 *     sub_18011C720 @ 0x18011C720 (sub_18011C720.c)
 * Callees:
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
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
