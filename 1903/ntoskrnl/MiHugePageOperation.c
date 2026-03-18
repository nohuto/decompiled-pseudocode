/*
 * XREFs of MiHugePageOperation @ 0x1402C21D0
 * Callers:
 *     MiGetHugeRangeFromNode @ 0x1402C1DC8 (MiGetHugeRangeFromNode.c)
 *     MiHotAddHugeRange @ 0x1408898B0 (MiHotAddHugeRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002A890 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiPageToNode @ 0x1400A02E4 (MiPageToNode.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiDeleteUltraThreadContext @ 0x1400F584C (MiDeleteUltraThreadContext.c)
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x14012372C (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeZeroPages @ 0x1401C7A10 (KeZeroPages.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiEndDpcGang @ 0x1402E8728 (MiEndDpcGang.c)
 *     MiInitializeDpcGang @ 0x1402E8814 (MiInitializeDpcGang.c)
 *     MiStartDpcGang @ 0x1402E897C (MiStartDpcGang.c)
 */

void __fastcall MiHugePageOperation(int a1)
{
  unsigned __int64 v2; // r14
  int v3; // eax
  signed __int32 v4; // eax
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *MmInternal; // r15
  unsigned __int64 UltraMapping; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // eax
  __int64 v12; // rdx
  int v13; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int32 *v15; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+28h] [rbp-D8h]
  _QWORD v17[38]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v18[16]; // [rsp+160h] [rbp+60h] BYREF

  memset(v17, 0, sizeof(v17));
  v15 = 0LL;
  v16 = 0LL;
  memset(v18, 0, sizeof(v18));
  v2 = (unsigned __int64)(a1 & 0x3FFFF) << 18;
  v3 = MiPageToNode(v2, 0);
  MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], v3 + 1, (__int64)&v15);
  v4 = _InterlockedExchangeAdd(v15, 1u);
  CurrentIrql = 17;
  MmInternal = 0LL;
  if ( (unsigned int)MiCreateUltraThreadContext((__int64)v18, (unsigned int)v16 & v4 | HIDWORD(v16), 1) )
  {
    UltraMapping = MiGetUltraMapping(v18, 0, 0x40000LL, 0);
    v8 = (_QWORD *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
  }
  else
  {
    v8 = 0LL;
    UltraMapping = MmMapIoSpaceEx(v2 << 12, 0x40000000LL, 4u);
    if ( UltraMapping )
      goto LABEL_19;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
    UltraMapping = MiGetUltraMapping(MmInternal + 1544, 0, 0x40000LL, 0);
    v8 = (_QWORD *)(((UltraMapping >> 27) & 0x1FFFF8) - 0x90482600000LL);
    MmInternal[1543] = (unsigned __int64)v8;
  }
  if ( v8 )
  {
    MiMakeValidPte((unsigned __int64)v8, v2, -2080374780);
    if ( MiPteInShadowRange((unsigned __int64)v8) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v10 = 1;
        if ( !HIBYTE(word_140465BEC) )
        {
LABEL_15:
          if ( (v9 & 1) != 0 )
            v9 |= 0x8000000000000000uLL;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        goto LABEL_15;
      }
    }
    *v8 = v9;
    if ( v10 )
      MiWritePteShadow((__int64)v8);
  }
LABEL_19:
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeZeroPages((__m128i *)UltraMapping, 0x40000000uLL);
  }
  else
  {
    v11 = MiPageToNode(v2, 0);
    MiInitializeDpcGang(v17, v11, 1LL);
    HIDWORD(v17[13]) |= 8u;
    v17[0] = v2;
    v17[1] = 0x40000LL;
    v17[11] = UltraMapping;
    MiStartDpcGang(v17);
    MiEndDpcGang(v17);
  }
  if ( !v8 )
  {
    MmUnmapIoSpace((PVOID)UltraMapping, 0x40000000uLL);
    return;
  }
  if ( MiPteInShadowRange((unsigned __int64)v8) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( !HIBYTE(word_140465BEC) )
      {
LABEL_28:
        if ( (v12 & 1) != 0 )
          v12 |= 0x8000000000000000uLL;
      }
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
    {
      goto LABEL_28;
    }
  }
  *v8 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)v8);
  if ( CurrentIrql == 17 )
  {
    MiDeleteUltraThreadContext((__int64)v18);
  }
  else
  {
    MmInternal[1543] = 0LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
}
