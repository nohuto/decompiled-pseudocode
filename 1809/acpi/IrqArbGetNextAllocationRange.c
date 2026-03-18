/*
 * XREFs of IrqArbGetNextAllocationRange @ 0x1C0091690
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_ii @ 0x1C000F5EC (WPP_RECORDER_SF_ii.c)
 *     PcisuppIsPciDevice @ 0x1C00914E4 (PcisuppIsPciDevice.c)
 *     IrqArbpFindBootConfig @ 0x1C0092A04 (IrqArbpFindBootConfig.c)
 *     ArbGetNextAllocationRange @ 0x1C0094030 (ArbGetNextAllocationRange.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B2E7C (IrqArbIrqFromGsiv.c)
 *     IrqArbpFindIrqInAlternatives @ 0x1C00B326C (IrqArbpFindIrqInAlternatives.c)
 */

char __fastcall IrqArbGetNextAllocationRange(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int16 v6; // dx
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  char result; // al
  __int64 v14; // rcx
  unsigned int v15; // r10d
  int IrqInAlternatives; // eax
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // [rsp+20h] [rbp-30h]
  __int64 v21; // [rsp+28h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF
  int v25; // [rsp+88h] [rbp+38h] BYREF

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
    goto LABEL_27;
  if ( (int)PcisuppIsPciDevice(v4, (bool *)&v23) >= 0 )
  {
    if ( (_BYTE)v23 )
    {
      v7 = (_DWORD *)v3[9];
      if ( !v3[5] )
        *v7 = 4096;
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                LODWORD(v21) = *v7;
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  4u,
                  0x14u,
                  0xAu,
                  (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
                  v21);
                if ( *v7 != 4096 )
                  break;
                if ( IrqArbGlobalDistributionDisposition == 1 )
                {
                  *v7 = 4100;
                }
                else if ( IrqArbGlobalDistributionDisposition == 2 )
                {
                  *v7 = 4098;
                }
                else
                {
                  *v7 = 4097;
                }
              }
              if ( *v7 != 4097 )
                break;
              *v7 = 4099;
              if ( (int)LinkNodeCrackPrt(*(_QWORD *)(v3[4] + 32LL), &v22, &v25, 0) >= 0 )
              {
                if ( v22 )
                {
                  v18 = *(unsigned int *)(v22 + 40);
                  if ( (_DWORD)v18 != -1 )
                  {
                    v24 = IrqArbIrqFromGsiv(v18, &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
                    if ( (int)IrqArbpFindIrqInAlternatives(v19, v3, v24, &v23) >= 0 )
                      goto LABEL_35;
                  }
                }
              }
            }
            v10 = (unsigned int)(*v7 - 4098);
            if ( *v7 != 4098 )
              break;
            *v7 = 4099;
            v24 = IrqArbGlobalStackingIrq;
            if ( (int)IrqArbpFindIrqInAlternatives(v10, v3, (unsigned int)IrqArbGlobalStackingIrq, &v23) >= 0 )
            {
              v3[2] = v17;
              goto LABEL_36;
            }
          }
          if ( *v7 != 4099 )
            break;
          *v7 = 4100;
          if ( (int)IrqArbpFindBootConfig(a1, v3, &v24) >= 0 )
          {
            IrqInAlternatives = IrqArbpFindIrqInAlternatives(v14, v3, v24, &v23);
            if ( IrqInAlternatives >= 0 )
            {
              v12 = v24;
LABEL_35:
              v3[2] = v12;
LABEL_36:
              v3[5] = v3[7] + ((unsigned __int64)v23 << 6);
LABEL_16:
              v3[3] = v12;
              WPP_RECORDER_SF_ii((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v12, v9, v20);
              result = 1;
              ++IrqArbPciAlternativeRotation;
              return result;
            }
          }
        }
        if ( *v7 == 4100 )
        {
          *v7 = 4101;
          v11 = (_QWORD *)v3[7];
          v3[5] = v11;
LABEL_15:
          v3[2] = *v11;
          v12 = v11[1];
          goto LABEL_16;
        }
      }
      while ( *v7 != 4101 );
      v15 = *((_DWORD *)v3 + 12);
      v3[5] += 64LL;
      if ( v3[5] < v3[7] + ((unsigned __int64)v15 << 6) )
      {
        LODWORD(v21) = v15;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0xBu,
          (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
          v21);
        v11 = (_QWORD *)v3[5];
        goto LABEL_15;
      }
      return 0;
    }
LABEL_27:
    a2 = v3;
    return ArbGetNextAllocationRange(a1, a2);
  }
  return 0;
}
