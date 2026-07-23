/*
 * XREFs of MmProcessWorkingSetControl @ 0x14085FFE0
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     VmpPauseResumeNotify @ 0x1408B19D8 (VmpPauseResumeNotify.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiEmptyWorkingSet @ 0x1402A7CF4 (MiEmptyWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1402A7D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiLogWsEmptyControl @ 0x1402CBB90 (MiLogWsEmptyControl.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PsSwapProcessWorkingSet @ 0x140889A1C (PsSwapProcessWorkingSet.c)
 *     SmStoreCompressionStart @ 0x1408AC960 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1408AC9DC (SmStoreCompressionStop.c)
 */

__int64 __fastcall MmProcessWorkingSetControl(
        ULONG_PTR BugCheckParameter1,
        __int64 *a2,
        unsigned int a3,
        KPROCESSOR_MODE a4)
{
  __int64 result; // rax
  unsigned int v7; // edi
  _KPROCESS *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // [rsp+40h] [rbp-88h]
  int v12; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v14[48]; // [rsp+58h] [rbp-70h] BYREF

  Object = (PVOID)BugCheckParameter1;
  if ( a3 < 0xC )
    return 3221225476LL;
  v7 = 0;
  v11 = *a2;
  v12 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 3 )
    return 3221225561LL;
  if ( HIDWORD(v11) >= 2 )
    return 3221225485LL;
  if ( !HIDWORD(v11) && !SeSinglePrivilegeCheck(SeDebugPrivilege, a4) )
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
    v8 = (_KPROCESS *)Object;
    if ( KeGetCurrentThread()->ApcState.Process == Object )
    {
      LODWORD(Object) = 0;
    }
    else
    {
      LODWORD(Object) = 1;
      KiStackAttachProcess(v8, 0LL, (__int64)v14);
    }
    if ( HIDWORD(v11) )
    {
      if ( (v12 & 0xFFFFFFE0) != 0 )
        goto LABEL_16;
      if ( (v12 & 1) == ((v12 & 2) == 0) || (v12 & 8) != 0 && (v12 & 2) == 0 || (v12 & 0x10) != 0 && (v12 & 8) == 0 )
      {
        v9 = -1073741637;
        goto LABEL_32;
      }
      MiLogWsEmptyControl((__int64)&v8[1].IdealNode[12]);
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 8) != 0 )
          SmStoreCompressionStart();
        v9 = MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[1].IdealNode[12]);
        if ( (v12 & 8) != 0 )
        {
          LOBYTE(v7) = (v12 & 0x10) != 0;
          SmStoreCompressionStop(v7);
        }
        goto LABEL_32;
      }
      v10 = MiEmptyWorkingSet((__int64)&v8[1].IdealNode[12], (v12 & 4) != 0);
    }
    else
    {
      if ( (v12 & 0xFFFFFFFE) != 0 )
      {
LABEL_16:
        v9 = -1073741811;
LABEL_32:
        if ( (_DWORD)Object == 1 )
          KiUnstackDetachProcess((__int64)v14, 0LL);
        ObfDereferenceObjectWithTag(v8, 0x73576D4Du);
        return v9;
      }
      v10 = PsSwapProcessWorkingSet(v8);
    }
    v9 = v10;
    goto LABEL_32;
  }
  return result;
}
