/*
 * XREFs of SeAuditProcessExit @ 0x1408DB804
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     SepAdtLogAuditRecord @ 0x14012D67C (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14066BAC4 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1408E27D0 (SepAuditFailed.c)
 */

void __fastcall SeAuditProcessExit(PEPROCESS Process, unsigned int a2)
{
  __int64 v3; // rsi
  int AllocatedFullProcessImageName; // eax
  _QWORD *v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P[0] = 0LL;
  v3 = a2;
  memset(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v5 = PsReferencePrimaryToken(Process);
    LODWORD(Src[2]) = 524422;
    Src[0] = 0x125100000005LL;
    v6 = (__int64 *)v5[19];
    Src[10] = &SeSubsystemName;
    Src[12] = v5[3];
    v7 = *v6;
    Src[20] = Process[1].Header.WaitListHead.Flink;
    LODWORD(Src[3]) = 4;
    LODWORD(v6) = *(unsigned __int8 *)(v7 + 1);
    Src[6] = v7;
    Src[7] = 0x2000000001LL;
    Src[11] = 0x800000005LL;
    HIDWORD(Src[3]) = 4 * (_DWORD)v6 + 8;
    Src[26] = P[0];
    Src[15] = 0x40000000ALL;
    HIDWORD(Src[23]) = *(unsigned __int16 *)P[0] + 16;
    Src[16] = v3;
    Src[19] = 0x80000000BLL;
    LODWORD(Src[23]) = 2;
    LODWORD(Src[1]) = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject(v5);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
