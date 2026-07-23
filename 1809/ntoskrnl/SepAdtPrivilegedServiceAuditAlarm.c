/*
 * XREFs of SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14062DE88 (SePrivilegedServiceAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C5A60 (NtPrivilegedServiceAuditAlarm.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405BC990 (SepAdtAuditPrivilegeUseWithContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __fastcall SepAdtPrivilegedServiceAuditAlarm(
        int a1,
        const int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        int *a6,
        char a7)
{
  unsigned __int16 *v8; // r15
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // r14d
  __int64 *v11; // rax
  const int *v12; // r12
  __int64 v13; // rbx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  const int *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  struct _LIST_ENTRY *Flink; // [rsp+50h] [rbp-B0h]
  _QWORD Src[132]; // [rsp+60h] [rbp-A0h] BYREF

  P = 0LL;
  v8 = a3;
  v21 = a2;
  LOBYTE(a2) = a7;
  LOBYTE(a3) = a7 == 0;
  if ( (unsigned __int8)SepAdtAuditPrivilegeUseWithContext((_DWORD)a6, (_DWORD)a2, (_DWORD)a3, a1, (__int64)&v19) )
  {
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
    AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(CurrentThreadProcess, &P);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      if ( a4 )
        v11 = *(__int64 **)(a4 + 152);
      else
        v11 = *(__int64 **)(a5 + 152);
      v12 = &SeSubsystemName;
      v13 = *(_QWORD *)(a5 + 24);
      v22 = *v11;
      if ( v21 )
        v12 = v21;
      memset(Src, 0, 0x418uLL);
      Src[0] = 0x124100000004LL;
      LOWORD(Src[2]) = v19;
      WORD1(Src[2]) = 8;
      if ( !a7 )
        WORD1(Src[2]) = 16;
      LODWORD(Src[3]) = 4;
      Src[6] = v22;
      LODWORD(Src[7]) = 1;
      Src[10] = v12;
      v14 = *(unsigned __int8 *)(v22 + 1);
      v15 = *(unsigned __int16 *)v12 + 16;
      Src[11] = 0x800000005LL;
      HIDWORD(Src[7]) = v15;
      HIDWORD(Src[3]) = 4 * v14 + 8;
      if ( a4 )
        Src[12] = *(_QWORD *)(a4 + 24);
      else
        Src[12] = v13;
      LODWORD(Src[15]) = 1;
      HIDWORD(Src[15]) = v15;
      Src[18] = v12;
      if ( v8 )
      {
        v16 = *v8;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v16 + 16;
        Src[22] = v8;
      }
      if ( a6 )
      {
        v17 = *a6;
        if ( *a6 )
        {
          LODWORD(Src[23]) = 8;
          Src[26] = a6;
          HIDWORD(Src[23]) = 12 * v17 + 8;
        }
      }
      Src[28] = Flink;
      Src[34] = P;
      v18 = *(unsigned __int16 *)P + 16;
      Src[27] = 0x80000000BLL;
      HIDWORD(Src[31]) = v18;
      LODWORD(Src[31]) = 2;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( AllocatedFullProcessImageName < 0 )
      SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
}
