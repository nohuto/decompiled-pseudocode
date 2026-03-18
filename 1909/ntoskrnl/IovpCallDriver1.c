/*
 * XREFs of IovpCallDriver1 @ 0x14096D504
 * Callers:
 *     VfBeforeCallDriver @ 0x14096E920 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MdlInvariantPreProcessing1 @ 0x140327F00 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x14032867C (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x14096D394 (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x14096E378 (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x14096E418 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x14096E57C (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x140972D80 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x140972FD4 (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x1409730E4 (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140973660 (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140974ABC (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140974B20 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140974BCC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x140974C20 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x140975048 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x1409752D4 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x140975464 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x140975514 (VfMajorVerifyNewRequest.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x14097DAB8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14097DC38 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x14097E034 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14097EB0C (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x14097EC80 (IovpSessionDataReference.c)
 *     VfPacketCreateAndLock @ 0x14097ECA0 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x140980B50 (VfIrpLogRecordEvent.c)
 */

int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r15
  unsigned __int8 *v10; // r15
  unsigned int ShouldForce; // eax
  __int64 v12; // r12
  unsigned int v13; // ecx
  _QWORD *v14; // r13
  int v15; // eax
  int v16; // edi
  __int64 v17; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdi
  int v22; // ebx
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  void *v28; // rax
  bool v29; // zf
  __int64 v30; // rbx
  int v31; // ebx
  char v32; // al
  __int64 v34; // [rsp+28h] [rbp-80h]
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF
  __int64 v36; // [rsp+48h] [rbp-60h] BYREF
  __int64 started; // [rsp+50h] [rbp-58h]
  int v38; // [rsp+B0h] [rbp+8h]
  unsigned int v39; // [rsp+B8h] [rbp+10h]
  int IsNewRequest; // [rsp+B8h] [rbp+10h]
  int v41; // [rsp+C0h] [rbp+18h] BYREF
  const void *v42; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 168);
  CurrentIrql = KeGetCurrentIrql();
  LODWORD(v4) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 0x40000000 )
      return v4;
    v4 = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v6 = v4;
  }
  else
  {
    v4 = VfIrpDatabaseEntryFindAndLock(*(_QWORD *)(a1 + 168));
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v7 = *(_DWORD *)(v1 + 16);
      if ( v6 )
        LODWORD(v4) = v7 | 0x40000000;
      else
        LODWORD(v4) = v7 | 0x80000000;
      *(_DWORD *)(v1 + 16) = v4;
    }
  }
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 232);
    *(_BYTE *)(v6 + 61) = CurrentIrql;
    *(_BYTE *)(v6 + 60) = CurrentIrql;
    LOBYTE(v5) = CurrentIrql;
    v9 = *(_QWORD *)(v1 + 184);
    started = 0LL;
    v10 = (unsigned __int8 *)(v9 - 72);
    v42 = *(const void **)(a1 + 176);
    ShouldForce = VfPendingShouldForce(v8, v5, v1, (_DWORD)v10, v6, (__int64)v42);
    v12 = *(_QWORD *)(v6 + 240);
    v13 = ShouldForce;
    v14 = *(_QWORD **)(a1 + 160);
    v39 = ShouldForce;
    if ( v12 || (v15 = *(_DWORD *)(v6 + 56), (v15 & 1) != 0) )
    {
      v16 = 0;
      v38 = 0;
    }
    else
    {
      v16 = 1;
      *(_DWORD *)(v6 + 56) = v15 | 1;
      v38 = 1;
      v12 = IovpSessionDataCreate(v14, v6, v13);
    }
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 16) = v6;
    if ( v12 )
    {
      v17 = MEMORY[0xFFFFF78000000014];
      if ( v16 )
      {
        BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
        VfIrpLogRecordEvent(*(unsigned int *)(v6 + 232), BottomDeviceObjectWithTag, v1);
        ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        IovpSessionDataReference(v12);
        v16 = v38;
      }
      if ( *(_QWORD *)(v1 + 104) )
      {
        ViErrorReport1(0x203u, v42, (const void *)v1);
        *(_QWORD *)(v1 + 104) = 0LL;
      }
      if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
        ViErrorReport1(0x205u, v42, (const void *)v1);
      if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
        && (unsigned __int8)(*v10 - 3) <= 1u
        && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPreProcessing1(a1, v6, (__int64)v10);
      }
      *(_DWORD *)(v12 + 56) = IovpExamineDevObjForwarding(v14, *(_QWORD *)(v12 + 48));
      IovpExamineIrpStackForwarding(v6, v16, v19, v1, (__int64)v42, (__int64)v10, (__int64)&v35, (__int64)&v41);
      if ( v39 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 216) = v10;
        started = VfPendingStartLogging(v1);
      }
      IsNewRequest = VfMajorIsNewRequest(v35, v10);
      v20 = IovpAdvanceStackDownwards(v12 + 80, *(_BYTE *)(v1 + 67), (__int64)v10, v35, v41, IsNewRequest, 1, &v36);
      v21 = v36;
      *(_QWORD *)(v36 + 48) = v17;
      if ( v20 )
      {
        v22 = v38;
      }
      else
      {
        *(_DWORD *)(a1 + 24) |= 0x4000000u;
        *(_QWORD *)(a1 + 40) = a1 + 32;
        *(_QWORD *)(a1 + 32) = a1 + 32;
        *(_QWORD *)(v21 + 56) = v17;
        v21 = v36;
        v22 = v38;
        *(_QWORD *)(v36 + 112) = KeGetCurrentThread();
        if ( IsNewRequest )
        {
          *(_OWORD *)(v21 + 80) = *(_OWORD *)(v1 + 48);
          *(_OWORD *)(v21 + 96) = *(_OWORD *)(v1 + 48);
          if ( v38 )
            *(_DWORD *)(v21 + 4) |= 0x8000000u;
        }
      }
      LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v14);
      if ( LowerDeviceObjectWithTag )
        ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
      else
        *(_DWORD *)(v21 + 4) |= 0x10000000u;
      *(_QWORD *)(v21 + 40) = VfGetPristineDispatchRoutine(v14[1], *v10);
      v24 = (_QWORD *)(a1 + 32);
      *(_DWORD *)(v21 + 4) &= ~0x40000000u;
      v25 = (_QWORD *)(v21 + 16);
      v26 = *(_QWORD *)(v21 + 16);
      if ( *(_QWORD *)(v26 + 8) != v21 + 16 )
        __fastfail(3u);
      *v24 = v26;
      *(_QWORD *)(a1 + 40) = v25;
      *(_QWORD *)(v26 + 8) = v24;
      *v25 = v24;
      *(_QWORD *)(a1 + 8) = v21;
      *(_QWORD *)(a1 + 72) = v1;
      v27 = *(_QWORD *)(v1 + 184);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(v27 - 72);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(v27 - 56);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(v27 - 40);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(v27 - 24);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v27 - 8);
      if ( (v10[3] & 1) != 0 )
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
      if ( *v10 == 27 && v10[1] == 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x20000000u;
        v28 = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
        *(_QWORD *)(a1 + 64) = v28;
        ObfDereferenceObjectWithTag(v28, 0x49667256u);
        if ( (unsigned int)IovUtilIsInFdoStack(v14) && !(unsigned int)IovUtilIsDeviceObjectMarked(v14, 3LL) )
          *(_DWORD *)(a1 + 24) |= 0x10000000u;
        VfDevObjMarkDeviceRemoved(v14);
      }
      v29 = v22 == 0;
      v30 = (__int64)v42;
      if ( !v29 )
        VfMajorVerifyNewIrp(v6, v1, (_DWORD)v10, v21, (__int64)v42);
      if ( !IsNewRequest || (*(_DWORD *)(v6 + 56) & 0x80000) != 0 )
      {
        v31 = v35;
      }
      else
      {
        v34 = v30;
        v31 = v35;
        VfMajorVerifyNewRequest(v6, (_DWORD)v14, v35, (_DWORD)v10, v21, v34);
      }
      VfMajorVerifyIrpStackDownward(v6, (_DWORD)v14, v31, (_DWORD)v10, v21, (__int64)v42);
      *(_QWORD *)(v12 + 48) = v14;
      *(_BYTE *)(v6 + 186) = *(_BYTE *)(v1 + 67);
      *(_OWORD *)(*(_QWORD *)(v21 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
      v32 = *(_BYTE *)(v1 + 67);
      if ( v32 > 2 )
      {
        *(_QWORD *)(v1 + 184) -= 72LL;
        *(_BYTE *)(v1 + 67) = v32 - 1;
        *(_BYTE *)(*(_QWORD *)(v1 + 184) - 69LL) |= 0x10u;
        ++*(_BYTE *)(v1 + 67);
        *(_QWORD *)(v1 + 184) += 72LL;
      }
      IovpSessionDataReference(v12);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      if ( VfWdCancelTimeoutTicks )
        ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v6 + 248);
    }
    VfIrpDatabaseEntryReleaseLock(v6);
    LODWORD(v4) = started;
    if ( started )
      LODWORD(v4) = VfPendingFinishLogging(started);
  }
  return v4;
}
