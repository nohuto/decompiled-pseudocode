/*
 * XREFs of HvlEnlightenProcessor @ 0x140178780
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1402722A0 (HvlpInitializeBootProcessor.c)
 *     PopHandleNextState @ 0x14056A410 (PopHandleNextState.c)
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x14027212C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpGetLpcbByLpIndex @ 0x14027219C (HvlpGetLpcbByLpIndex.c)
 *     HvlpSetupSchedulerAssist @ 0x1402730EC (HvlpSetupSchedulerAssist.c)
 *     HvlpGetRegister64 @ 0x140278CF8 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x140278DE4 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x140818B98 (HvlpDiscoverTopologyLocal.c)
 */

void __fastcall HvlEnlightenProcessor(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int v2; // edx
  unsigned int v3; // r8d
  char v4; // cl
  PHYSICAL_ADDRESS v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // r10
  __int64 LpcbByLpIndex; // rsi
  unsigned int v11; // r11d
  unsigned int LpIndexFromProcessorIndex; // eax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  PHYSICAL_ADDRESS v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  if ( HvlHypervisorConnected && (!a1 || (HvlpFlags & 2) == 0) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a1 )
    {
      HvlpGetRegister64(589827LL, &v17);
      v2 = v17;
      v3 = (unsigned int)v17 >> 6;
      v4 = v17 & 0x3F;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number] = (unsigned int)v17 >> 6;
      HvlpVirtualProcessorMapping[2 * CurrentPrcb->Number + 1] = v4;
      if ( v2 != CurrentPrcb->Number )
        HvlpVirtualProcessorsIdentityMapped = 0;
      if ( v3 < 0x10 )
      {
        if ( v3 > (((unsigned int)HvlpFlags >> 8) & 0xF) )
          HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v3 << 8)) & 0xF00;
      }
      else
      {
        HvlEnlightenments &= ~0x80u;
        HvlpEnlightenments &= ~0x80u;
      }
    }
    if ( (HvlpFlags & 0x80000) != 0 )
    {
      v16.QuadPart = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843LL, &v16);
        v5 = v16;
        v6 = v16.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v7 = MmMapIoSpaceEx(v6, 4096LL, 4u);
        else
          v7 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_1403FF460)(v6, 1LL, 4LL);
        CurrentPrcb->VirtualApicAssist = (void *)v7;
      }
      else
      {
        v5.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v5.QuadPart | 1);
    }
    HvlpSetupSchedulerAssist(CurrentPrcb);
    v9 = HvlpFlags;
    LpcbByLpIndex = 0LL;
    v11 = ((unsigned int)HvlpFlags >> 1) & 1;
    if ( v11 )
    {
      LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
    }
    if ( v11 && (v9 & 0x20) != 0 )
    {
      HvlpGetRegister64(655379LL, &v18);
      v13 = v18 & 0xFFFFFFFFFFFFF000uLL;
      if ( CurrentPrcb->Number )
        v14 = MmMapIoSpaceEx(v13, 4096LL, 4u);
      else
        v14 = ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_1403FF460)(v13, 1LL);
      *(_QWORD *)(LpcbByLpIndex + 40) = v14;
    }
    if ( (HvlpFlags & 0x20) != 0 )
    {
      v15 = ((unsigned __int64)((HvlpFlags & 0x10) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v15);
      HvlpSetRegister64(655361LL, v15);
      HvlpSetRegister64(655364LL, v15);
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(v8, *(unsigned int *)(LpcbByLpIndex + 8), LpcbByLpIndex + 16, LpcbByLpIndex + 20);
    }
  }
}
