/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C0159404
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0138B9C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0139164 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C013951C (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C014D5A4 (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C014DDDC (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C0152C3C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C015339C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01562F8 (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C0159380 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0159498 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01594EC (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 active; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  active = RIMCmActiveContactsBegin((__int64)&v12, a2, a3);
  v6 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v6;
  v7 = RIMCmActiveContactsEnd(v14, a2);
  v8 = *(_OWORD *)v7;
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(_QWORD *)v7;
  v13 = v9;
  v12 = v8;
  if ( (*(_QWORD *)a1 != v10 || *(_DWORD *)(a1 + 8) != DWORD2(v12) || *(_QWORD *)(a1 + 16) != v13)
    && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
  {
    RIMCmActiveContactsNext(a2, a1);
  }
  return a1;
}
