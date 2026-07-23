/*
 * XREFs of SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430
 * Callers:
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BB094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     ObpIsKernelHandle @ 0x140088EC8 (ObpIsKernelHandle.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepSecurityDescriptorStrictLength @ 0x1408A4F04 (SepSecurityDescriptorStrictLength.c)
 *     SepAuditFailed @ 0x1408A59E0 (SepAuditFailed.c)
 */

void __fastcall SepAdtSecurityDescriptorChangedAuditAlarm(
        __int64 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9)
{
  _KPROCESS *CurrentThreadProcess; // rax
  int AllocatedFullProcessImageName; // ebx
  __int16 v15; // ax
  int v16; // edx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  bool IsKernelHandle; // al
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  __int64 v26; // r11
  int v27; // eax
  __int64 v28; // r11
  PVOID P; // [rsp+28h] [rbp-E0h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+30h] [rbp-D8h]
  _QWORD Src[132]; // [rsp+38h] [rbp-D0h] BYREF

  P = 0LL;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  Flink = CurrentThreadProcess[1].Header.WaitListHead.Flink;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)CurrentThreadProcess, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    memset(Src, 0, 0x418uLL);
    if ( (a8 & 8) != 0 )
    {
      Src[0] = 0x132B00000006LL;
      v15 = 140;
    }
    else
    {
      if ( (a8 & 0x20) != 0 )
      {
        HIDWORD(Src[0]) = 4911;
      }
      else
      {
        HIDWORD(Src[0]) = 4913;
        if ( (a8 & 0x40) == 0 )
          HIDWORD(Src[0]) = 4670;
      }
      LODWORD(Src[0]) = 3;
      v15 = 142;
    }
    v16 = *a2;
    LOWORD(Src[2]) = v15;
    v17 = v16 + 16;
    WORD1(Src[2]) = 8;
    v18 = *(unsigned __int8 *)(a6 + 1);
    LODWORD(Src[3]) = 4;
    Src[6] = a6;
    LODWORD(Src[7]) = 1;
    HIDWORD(Src[7]) = v17;
    HIDWORD(Src[3]) = 4 * v18 + 8;
    v19 = *a1;
    Src[10] = a2;
    Src[11] = 0x800000005LL;
    if ( v19 )
      Src[12] = *(_QWORD *)(v19 + 24);
    else
      Src[12] = *(_QWORD *)(a1[2] + 24);
    v20 = *a3 + 16;
    LODWORD(Src[15]) = 1;
    HIDWORD(Src[15]) = v17;
    Src[18] = a2;
    LODWORD(Src[19]) = 1;
    HIDWORD(Src[19]) = v20;
    Src[22] = a3;
    if ( a4 )
    {
      v21 = *a4;
      LODWORD(Src[23]) = 2;
      HIDWORD(Src[23]) = v21 + 16;
      Src[26] = a4;
    }
    Src[27] = 0x80000000BLL;
    IsKernelHandle = ObpIsKernelHandle(a5, 0);
    v25 = v24 ^ 0xFFFFFFFF80000000uLL;
    LODWORD(Src[31]) = 24;
    if ( !IsKernelHandle )
      v25 = v23;
    Src[28] = v25 & 0xFFFFFFFFFFFFFFFCuLL;
    HIDWORD(Src[31]) = SepSecurityDescriptorStrictLength(a7);
    Src[33] = 4LL;
    Src[34] = a7;
    Src[32] = v26;
    LODWORD(Src[35]) = 24;
    HIDWORD(Src[35]) = SepSecurityDescriptorStrictLength(a9);
    Src[40] = Flink;
    v27 = *(unsigned __int16 *)P + 16;
    Src[46] = P;
    HIDWORD(Src[43]) = v27;
    Src[38] = a9;
    Src[36] = v28;
    Src[37] = 4LL;
    Src[39] = 0x80000000BLL;
    LODWORD(Src[43]) = 2;
    LODWORD(Src[1]) = 11;
    SepAdtLogAuditRecord(Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AllocatedFullProcessImageName < 0 )
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
}
