/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C009A120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x1C001E0CC (WPP_RECORDER_SF_ii.c)
 *     PcisuppIsPciDevice @ 0x1C0099F54 (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1C009B3F0 (IrqArbpFindBootConfig.c)
 *     ArbGetNextAllocationRange @ 0x1C00A18C0 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B693C (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C00B6D6C (IrqArbpFindIrqInAlternatives.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // dx
  __int64 v7; // r9
  _DWORD *v8; // rdi
  void *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  char result; // al
  int BootConfig; // eax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  _QWORD *v18; // r8
  int IrqInAlternatives; // eax
  __int64 v20; // r11
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+20h] [rbp-30h]
  __int64 v24; // [rsp+28h] [rbp-28h]
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v26; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v27; // [rsp+90h] [rbp+40h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2[4] + 32LL);
  if ( *(PVOID *)(v4 + 8) == AcpiDriverObject && (*(_DWORD *)(*(_QWORD *)(v4 + 64) + 8LL) & 0x2000000) != 0 )
    return ArbGetNextAllocationRange(a1, a2);
  v5 = a2[5];
  if ( v5 )
    v6 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL);
  else
    v6 = *(_WORD *)(*(_QWORD *)(a2[7] + 40LL) + 4LL);
  if ( (v6 & 0x20) != 0 )
    goto LABEL_31;
  if ( (int)PcisuppIsPciDevice(v4, (bool *)&v26) < 0 )
    return 0;
  if ( !(_BYTE)v26 )
  {
LABEL_31:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  v8 = (_DWORD *)v3[9];
  if ( !v3[5] )
    *v8 = 4096;
LABEL_9:
  v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = *v8;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x14u,
              0xAu,
              (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
              v24);
            v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
          }
          if ( *v8 != 4096 )
            break;
          if ( IrqArbGlobalDistributionDisposition == 1 )
          {
            *v8 = 4100;
          }
          else if ( IrqArbGlobalDistributionDisposition == 2 )
          {
            *v8 = 4098;
          }
          else
          {
            *v8 = 4097;
          }
        }
        if ( *v8 != 4097 )
          break;
        *v8 = 4099;
        v16 = LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v25, &v28, 0);
        v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
        if ( v16 >= 0 )
        {
          v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
          if ( v25 )
          {
            v21 = *(unsigned int *)(v25 + 40);
            v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
            if ( (_DWORD)v21 != -1 )
            {
              v27 = IrqArbIrqFromGsiv(v21, &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
              if ( (int)IrqArbpFindIrqInAlternatives(v22, v3, v27, &v26) >= 0 )
                goto LABEL_41;
              goto LABEL_9;
            }
          }
        }
      }
      v10 = (unsigned int)(*v8 - 4098);
      if ( *v8 == 4098 )
      {
        *v8 = 4099;
        v27 = IrqArbGlobalStackingIrq;
        if ( (int)IrqArbpFindIrqInAlternatives(v10, v3, (unsigned int)IrqArbGlobalStackingIrq, &v26) >= 0 )
        {
          v3[2] = v20;
          goto LABEL_42;
        }
        goto LABEL_9;
      }
      if ( *v8 != 4099 )
        break;
      *v8 = 4100;
      BootConfig = IrqArbpFindBootConfig(a1, v3, &v27);
      v9 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
      if ( BootConfig >= 0 )
      {
        IrqInAlternatives = IrqArbpFindIrqInAlternatives(v15, v3, v27, &v26);
        if ( IrqInAlternatives >= 0 )
        {
          v12 = v27;
LABEL_41:
          v3[2] = v12;
LABEL_42:
          v3[5] = v3[7] + ((unsigned __int64)v26 << 6);
          goto LABEL_18;
        }
        goto LABEL_9;
      }
    }
    if ( *v8 == 4100 )
    {
      *v8 = 4101;
      v11 = (_QWORD *)v3[7];
      v3[5] = v11;
      v3[2] = *v11;
      v12 = v11[1];
      goto LABEL_18;
    }
  }
  while ( *v8 != 4101 );
  v17 = *((_DWORD *)v3 + 12);
  v18 = (_QWORD *)(v3[5] + 64LL);
  v3[5] = v18;
  if ( (unsigned __int64)v18 >= v3[7] + ((unsigned __int64)v17 << 6) )
    return 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v17;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0xBu,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      v24);
    v18 = (_QWORD *)v3[5];
  }
  v3[2] = *v18;
  v12 = v18[1];
LABEL_18:
  v3[3] = v12;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)v9, v12, v7, v23);
  result = 1;
  ++IrqArbPciAlternativeRotation;
  return result;
}
