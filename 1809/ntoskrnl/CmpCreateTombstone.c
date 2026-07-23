/*
 * XREFs of CmpCreateTombstone @ 0x14026D34C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CEBC (CmDeleteLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1405AD984 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x1405AE6F8 (CmpFreeKeyByCell.c)
 *     HvUnlockHiveFlusherShared @ 0x1405B05D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1405B0600 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 *     CmUnlockHiveSecurity @ 0x1406D1DA8 (CmUnlockHiveSecurity.c)
 *     CmpGetPhaseAccessBit @ 0x1407F13B8 (CmpGetPhaseAccessBit.c)
 *     CmpIncrementKcbSequenceNumber @ 0x1407F2334 (CmpIncrementKcbSequenceNumber.c)
 *     CmpAssignSecurityDescriptor @ 0x1407F59B0 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x1407F66C4 (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmLockHiveSecurityExclusive @ 0x1407FA70C (CmLockHiveSecurityExclusive.c)
 *     HvpGetCellContextInitialize @ 0x1407FA888 (HvpGetCellContextInitialize.c)
 *     CmpAddSubKey @ 0x1407FFC80 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x1408021B4 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpCreateTombstone(__int64 a1, __int64 a2)
{
  __int64 KcbAtLayerHeight; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int16 v6; // dx
  int v7; // ebx
  unsigned int v8; // r12d
  unsigned int Cell; // eax
  char *v10; // rdi
  unsigned int v11; // r14d
  int v12; // ebx
  unsigned int v13; // ecx
  __int64 SecurityDescriptorForKcbStack; // rbx
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  unsigned __int16 v17; // dx
  __int64 v18; // rcx
  __int64 v19; // rdx
  void *v21; // [rsp+70h] [rbp+8h] BYREF
  char v22; // [rsp+78h] [rbp+10h] BYREF
  char v23; // [rsp+80h] [rbp+18h] BYREF

  v21 = 0LL;
  HvpGetCellContextInitialize(&v23);
  HvpGetCellContextInitialize(&v22);
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2);
  v4 = *(_QWORD *)(KcbAtLayerHeight + 64);
  v5 = 0LL;
  if ( *(__int16 *)(KcbAtLayerHeight + 58) >= 0 )
  {
    do
      v5 = CmpGetKcbAtLayerHeight(a2);
    while ( *(_DWORD *)(v5 + 32) == -1 && (__int16)(v6 - 1) >= 0 );
  }
  v7 = *(_DWORD *)(v5 + 32) >> 31;
  if ( *(int *)(v4 + 32) < 0 )
    v7 = 1;
  HvLockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  v8 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL) + 76;
  Cell = HvAllocateCell(*(_QWORD *)(KcbAtLayerHeight + 24), v8, v7, (unsigned int)&v21, (__int64)&v23);
  v10 = (char *)v21;
  v11 = Cell;
  if ( Cell == -1 )
  {
    v12 = -1073741670;
  }
  else
  {
    memset(v21, 0, v8);
    *(_WORD *)v10 = 27502;
    v10[12] = CmpGetPhaseAccessBit();
    v10[13] = v10[13] & 0xFC | 1;
    *((_WORD *)v10 + 1) = 0;
    if ( (**(_DWORD **)(KcbAtLayerHeight + 72) & 1) != 0 )
      *((_WORD *)v10 + 1) = 32;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v4 + 32);
    *((_DWORD *)v10 + 7) = -1;
    *((_DWORD *)v10 + 8) = -1;
    *((_DWORD *)v10 + 10) = -1;
    *((_DWORD *)v10 + 11) = -1;
    *((_DWORD *)v10 + 12) = -1;
    *((_WORD *)v10 + 37) = 0;
    *((_DWORD *)v10 + 13) &= 0xFFF0FFFF;
    v10[55] = 0;
    *((_DWORD *)v10 + 13) &= 0xFF0FFFFF;
    v13 = *(unsigned __int16 *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 24LL);
    *((_WORD *)v10 + 36) = v13;
    memmove(v10 + 76, (const void *)(*(_QWORD *)(KcbAtLayerHeight + 72) + 26LL), v13);
    SecurityDescriptorForKcbStack = CmpGetSecurityDescriptorForKcbStack(a2, 0LL);
    CmLockHiveSecurityExclusive(*(_QWORD *)(KcbAtLayerHeight + 24));
    v12 = CmpAssignSecurityDescriptor(*(_QWORD *)(KcbAtLayerHeight + 24), v11, v10, SecurityDescriptorForKcbStack);
    CmUnlockHiveSecurity(*(_QWORD *)(KcbAtLayerHeight + 24));
    if ( v12 >= 0 )
    {
      if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32), 0LL) )
      {
        if ( (unsigned __int8)CmpAddSubKey(*(_QWORD *)(v4 + 24), *(unsigned int *)(v4 + 32), v11) )
        {
          CmpIncrementKcbSequenceNumber(KcbAtLayerHeight);
          *(_DWORD *)(KcbAtLayerHeight + 32) = v11;
          v11 = -1;
          CmpRebuildKcbCacheFromNode(v15);
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v4 + 24) + 8LL))(
                  *(_QWORD *)(v4 + 24),
                  *(unsigned int *)(v4 + 32),
                  &v22);
          CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v4 + 24), v16, *(unsigned int *)(v4 + 32));
          v17 = 2 * *((_WORD *)v10 + 36);
          if ( (v10[2] & 0x20) == 0 )
            v17 = *((_WORD *)v10 + 36);
          if ( (unsigned __int16)*(_DWORD *)(v16 + 52) < (unsigned int)v17 )
            *(_WORD *)(v16 + 52) = v17;
          CmpIncrementKcbSequenceNumber(v4);
          v18 = *(_QWORD *)(v4 + 24);
          *(_WORD *)(v4 + 168) = *(_WORD *)(v16 + 52);
          (*(void (__fastcall **)(__int64, char *))(v18 + 16))(v18, &v22);
          LOBYTE(v19) = 1;
          CmpCleanUpSubKeyInfo(v4, v19);
          v12 = 0;
        }
        else
        {
          v12 = -1073741670;
        }
      }
      else
      {
        v12 = -1073741443;
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v23);
  if ( v11 != -1 )
    CmpFreeKeyByCell(*(_QWORD *)(KcbAtLayerHeight + 24));
  HvUnlockHiveFlusherShared(*(_QWORD *)(KcbAtLayerHeight + 24));
  return (unsigned int)v12;
}
