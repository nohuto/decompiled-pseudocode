/*
 * XREFs of RIMCmActiveContactsBeginNoButton @ 0x1C01067A0
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C00E69E4 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F950C (rimCountContactsToDeliverWithFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C00F993C (rimStorePointersInHoldingFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01003F8 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00586E4 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C0058818 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C0106840 (RIMCmActiveContactsNext.c)
 */

__int64 __fastcall RIMCmActiveContactsBeginNoButton(__int64 a1, __int64 a2)
{
  __int64 active; // rax
  __int64 v5; // xmm1_8
  __int64 v6; // rax
  __int128 v7; // xmm2
  __int64 v8; // xmm1_8
  __int64 v9; // rax
  bool v10; // al
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[32]; // [rsp+38h] [rbp-20h] BYREF

  active = RIMCmActiveContactsBegin((__int64)&v12, a2);
  v5 = *(_QWORD *)(active + 16);
  *(_OWORD *)a1 = *(_OWORD *)active;
  *(_QWORD *)(a1 + 16) = v5;
  v6 = RIMCmActiveContactsEnd((__int64)v14, a2);
  v7 = *(_OWORD *)v6;
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)v6;
  v13 = v8;
  v12 = v7;
  v10 = *(_QWORD *)a1 != v9 || *(_DWORD *)(a1 + 8) != DWORD2(v12) || *(_QWORD *)(a1 + 16) != v13;
  if ( v10 && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) & 4) != 0 )
    RIMCmActiveContactsNext(a2, a1);
  return a1;
}
