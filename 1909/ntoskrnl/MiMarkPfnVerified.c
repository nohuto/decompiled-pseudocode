/*
 * XREFs of MiMarkPfnVerified @ 0x14008D844
 * Callers:
 *     MiCopyPage @ 0x14002C9C0 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x14004F990 (MiRevertValidPte.c)
 *     MiGatherMappedPages @ 0x14007B5D8 (MiGatherMappedPages.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiAllocateWsle @ 0x1400AE730 (MiAllocateWsle.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 *     MmChangeImageProtection @ 0x1406A5850 (MmChangeImageProtection.c)
 *     MiFillPerSessionProtos @ 0x1408987B4 (MiFillPerSessionProtos.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A15380 (MiInitializeBootLoadedDriverPfns.c)
 *     MiValidateBootDriverLargePagePfns @ 0x140A3D17C (MiValidateBootDriverLargePagePfns.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1400DDE20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeSetPagePrivilege @ 0x1402A44D8 (KeSetPagePrivilege.c)
 */

unsigned __int8 __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // di
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // bp
  char v6; // dl
  unsigned __int8 result; // al
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v12[0] = 0LL;
  v12[1] = 0LL;
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
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x200000000000000LL) == 0 && (MiFlags & 0x8000) != 0 )
      v12[0] = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
    v8 = v2 & 1;
    v2 &= ~1u;
    v9 = 4 * v8 + 2;
    if ( !v8 )
      v2 = v6;
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
    MiGetPagePrivilege(BugCheckParameter2, 1, v12);
    result = KeSetPagePrivilege(v4, v12, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v5;
    __writecr8(v5);
  }
  return result;
}
