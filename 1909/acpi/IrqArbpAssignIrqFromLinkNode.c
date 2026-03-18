/*
 * XREFs of IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B9C
 * Callers:
 *     IrqArbpFindSuitableRangePci @ 0x1C009C72C (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C001DD80 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D70C (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1C009C6A4 (IcGetPossibleInput.c)
 *     IcIsInputValid @ 0x1C009C898 (IcIsInputValid.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 *     IrqArbIrqFromGsiv @ 0x1C00B693C (IrqArbIrqFromGsiv.c)
 */

__int64 __fastcall IrqArbpAssignIrqFromLinkNode(__int64 a1, _QWORD *a2, __int64 a3)
{
  int PossibleResources; // ebx
  _DWORD *v5; // rdi
  unsigned int v6; // ebp
  int v7; // r11d
  int v8; // r12d
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r14
  unsigned int v12; // ebx
  int v13; // eax
  unsigned __int64 v14; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v20 = a1;
  P = 0LL;
  PossibleResources = LinkNodeGetPossibleResources(a3, &P, &v20);
  v5 = P;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x1Bu,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      P);
  if ( PossibleResources < 0 )
    goto LABEL_14;
  v6 = v5[4];
  v7 = 0;
  if ( !v6 )
  {
LABEL_13:
    PossibleResources = -1073741275;
    goto LABEL_14;
  }
  v8 = (unsigned __int8)IrqArbPciAlternativeRotation;
  v9 = v20;
  while ( 1 )
  {
    v10 = (v8 + v7) % v6;
    v11 = 5 * v10;
    v12 = v5[5 * (unsigned int)v10 + 7];
    if ( v12 >= 0x10 || (v13 = (unsigned __int16)PciExclusionMask, !_bittest(&v13, v12)) )
    {
      if ( (int)IcGetPossibleInput(v12, v10, &v20) < 0 || v9 == (_BYTE)v20 )
      {
        v14 = (unsigned int)v5[v11 + 7];
        if ( v14 >= a2[2] && v14 <= a2[3] )
          break;
      }
    }
    if ( ++v7 >= v6 )
      goto LABEL_13;
  }
  if ( !IcIsInputValid(v12) )
  {
    PossibleResources = -1073741823;
LABEL_14:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = PossibleResources;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x14u,
        0x1Du,
        (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
        v19);
    }
    goto LABEL_16;
  }
  v17 = (unsigned int)IrqArbIrqFromGsiv(v16);
  v18 = a2[5];
  *a2 = v17;
  a2[1] = v17;
  *(_QWORD *)(v18 + 16) = 1LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v19) = v5[v11 + 7];
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0x1Cu,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
      v19);
  }
  PossibleResources = 0;
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)PossibleResources;
}
