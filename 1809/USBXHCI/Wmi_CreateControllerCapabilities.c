/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C0039E98
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0010730 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E30 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     Register_GetAllExtendedCapability @ 0x1C001CE50 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C001CF54 (Register_GetExtendedCapabilityTotalSize.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1)
{
  __int64 v2; // rsi
  int ExtendedCapabilityTotalSize; // ebp
  PVOID PoolWithTag; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int *v11; // r14
  unsigned int Ulong; // eax
  unsigned __int8 v13; // bl
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // r9d
  __int64 v20; // r8
  unsigned int v21; // edx

  if ( !a1[2] )
  {
    v2 = *(_QWORD *)(*a1 + 88);
    if ( *(_BYTE *)(*a1 + 473) && KeGetCurrentIrql() )
      Debug_FreAssertMsg(
        (__int64)"Code Path Requires Passive Level",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\wmi.c",
        155);
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(v2);
    *((_DWORD *)a1 + 2) = ExtendedCapabilityTotalSize + 184;
    PoolWithTag = ExAllocatePoolWithTag(
                    *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                    (unsigned int)(ExtendedCapabilityTotalSize + 184),
                    0x49434858u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)a1 + 2));
      *(_DWORD *)a1[2] = *(_DWORD *)(*a1 + 180);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 184);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 188);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 192);
      v5 = *a1;
      v6 = a1[2];
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(*a1 + 240);
      *(_BYTE *)(v6 + 20) = *(_BYTE *)(v5 + 244);
      v7 = *a1;
      v8 = a1[2];
      *(_DWORD *)(v8 + 21) = *(_DWORD *)(*a1 + 245);
      *(_BYTE *)(v8 + 25) = *(_BYTE *)(v7 + 249);
      v9 = *a1;
      v10 = a1[2];
      *(_DWORD *)(v10 + 26) = *(_DWORD *)(*a1 + 250);
      *(_BYTE *)(v10 + 30) = *(_BYTE *)(v9 + 254);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 264);
      v11 = *(unsigned int **)(v2 + 24);
      if ( v11 )
      {
        Ulong = XilRegister_ReadUlong(v2, *(unsigned int **)(v2 + 24));
        v13 = Ulong;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(Ulong);
        *(_DWORD *)(a1[2] + 52) = BYTE2(Ulong);
        v14 = XilRegister_ReadUlong(v2, v11 + 1);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v14;
        *(_DWORD *)(a1[2] + 60) = (v14 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v14);
        v15 = XilRegister_ReadUlong(v2, v11 + 2);
        *(_DWORD *)(a1[2] + 68) = v15 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v15 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v15 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v15 >> 11) | v15 & 0x3E00000) >> 16;
        v16 = XilRegister_ReadUlong(v2, v11 + 3);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v16;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v16);
        v17 = XilRegister_ReadUlong(v2, v11 + 4);
        *(_DWORD *)(a1[2] + 92) = v17 & 1;
        *(_DWORD *)(a1[2] + 96) = (v17 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v17 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v17 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v17 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v17 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v17 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v17 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v17 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v17 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v17 >> 10) & 1;
        *(_DWORD *)(a1[2] + 136) = (v17 >> 11) & 1;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v17 >> 12;
        if ( v13 >= 0x20u )
        {
          v18 = XilRegister_ReadUlong(v2, v11 + 7);
          v19 = 1;
          v20 = 148LL;
          *(_DWORD *)(a1[2] + 144) = v18 & 1;
          do
          {
            v21 = v18 >> v19++;
            *(_DWORD *)(v20 + a1[2]) = v21 & 1;
            v20 += 4LL;
          }
          while ( v20 < 172 );
        }
      }
      *(_DWORD *)(a1[2] + 172) = *(_DWORD *)(*(_QWORD *)(*a1 + 128) + 16LL) != 0;
      if ( ExtendedCapabilityTotalSize )
        Register_GetAllExtendedCapability(v2, a1[2] + 176);
    }
    else
    {
      WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72), 2u, 0xFu, 0xBu, (__int64)&WPP_4c695d7d48f63a3aa515b3e68c7e1326_Traceguids);
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}
