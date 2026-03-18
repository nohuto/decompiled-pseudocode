/*
 * XREFs of MmProcessWorkingSetControl @ 0x1406F7278
 * Callers:
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x1408ED540 (VmpPauseResumeNotify.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401434AC (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x1401436A4 (MiLogWsEmptyControl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiEmptyWorkingSet @ 0x1402BF248 (MiEmptyWorkingSet.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SmStoreCompressionStop @ 0x1406F7488 (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x1406F756C (SmStoreCompressionStart.c)
 *     PsSwapProcessWorkingSet @ 0x1408C601C (PsSwapProcessWorkingSet.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  unsigned int v8; // edi
  __int64 result; // rax
  _KPROCESS *v10; // r14
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-88h]
  int v14; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v16[48]; // [rsp+58h] [rbp-70h] BYREF

  Object = (PVOID)BugCheckParameter1;
  memset(v16, 0, sizeof(v16));
  if ( a3 < 0xC )
    return 3221225476LL;
  v8 = 0;
  v13 = *a2;
  v14 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v13) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v13) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
    return 3221225569LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             0x2000,
             (__int64)PsProcessType,
             a4,
             0x73576D4Du,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v10 = (_KPROCESS *)Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      LODWORD(Object) = 0;
    }
    else
    {
      LODWORD(Object) = 1;
      KiStackAttachProcess(v10, 0, (__int64)v16);
    }
    if ( HIDWORD(v13) )
    {
      if ( (v14 & 0xFFFFFFE0) == 0 )
      {
        if ( (v14 & 1) != ((v14 & 2) == 0)
          && ((v14 & 8) == 0 || (v14 & 2) != 0)
          && ((v14 & 0x10) == 0 || (v14 & 8) != 0) )
        {
          MiLogWsEmptyControl((__int64)&v10[1].IdealNode[6]);
          if ( (v14 & 1) != 0 )
          {
            if ( (v14 & 8) != 0 )
              SmStoreCompressionStart();
            v11 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v10[1].IdealNode[6]);
            if ( (v14 & 8) != 0 )
            {
              LOBYTE(v8) = (v14 & 0x10) != 0;
              SmStoreCompressionStop(v8);
            }
            goto LABEL_19;
          }
          v12 = MiEmptyWorkingSet((__int64)&v10[1].IdealNode[6], (v14 & 4) != 0);
          goto LABEL_36;
        }
        v11 = -1073741637;
LABEL_19:
        if ( (_DWORD)Object == 1 )
          KiUnstackDetachProcess((struct _KTHREAD *)v16, 0);
        ObfDereferenceObjectWithTag(v10, 0x73576D4Du);
        return v11;
      }
    }
    else if ( (v14 & 0xFFFFFFFE) == 0 )
    {
      v12 = PsSwapProcessWorkingSet(v10);
LABEL_36:
      v11 = v12;
      goto LABEL_19;
    }
    v11 = -1073741811;
    goto LABEL_19;
  }
  return result;
}
