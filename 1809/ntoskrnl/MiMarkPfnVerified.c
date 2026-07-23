/*
 * XREFs of MiMarkPfnVerified @ 0x14000F960
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiAllocateWsle @ 0x140048800 (MiAllocateWsle.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiCopyPage @ 0x1400B1B90 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x1400B22A0 (MiRevertValidPte.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     MmChangeImageProtection @ 0x140652920 (MmChangeImageProtection.c)
 *     MiFillPerSessionProtos @ 0x14085D65C (MiFillPerSessionProtos.c)
 *     MiInitializeSystemImagePage @ 0x1409B9190 (MiInitializeSystemImagePage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B9BD8 (MiInitializeBootLoadedDriverPfns.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 * Callees:
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x14028DE10 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned int v2; // edi
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // rdx
  unsigned __int8 result; // al
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v4 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline(BugCheckParameter2);
  if ( (v2 & 2) != 0 && ((*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7) == 3 )
    v2 &= ~2u;
  v6 = v2;
  if ( (v2 & 2) != 0 && (MiFlags & 0x10000) != 0 )
  {
    v12[1] = 0LL;
    if ( (MiFlags & 0x8000) != 0 )
      v12[0] = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
    v8 = v2 & 1;
    LOBYTE(v2) = v2 & 0xFE;
    v9 = 4 * v8 + 2;
    if ( !v8 )
      LOBYTE(v2) = v6;
    v10 = v9 | 0x40;
    if ( (v2 & 0x20) == 0 )
      v10 = v9;
    if ( (int)KeSetPagePrivilege(v4, v12, v10) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
  }
  result = (*(_QWORD *)(BugCheckParameter2 + 40) >> 54) & 7;
  if ( result != 3 )
  {
    result = 0;
    *(_QWORD *)(BugCheckParameter2 + 40) = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x10000) != 0 )
  {
    MiGetPagePrivilege(BugCheckParameter2);
    result = KeSetPagePrivilege(v4, v12, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb, v6);
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
