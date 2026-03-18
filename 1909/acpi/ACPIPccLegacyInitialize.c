/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C0090F88
 * Callers:
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00910B0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0091A98 (ACPIAmliEvaluateOsc.c)
 *     AcpiPccInitilizeSubspace @ 0x1C00B048C (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r8d
  __int64 v3; // rcx
  char *PoolWithTag; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // ecx
  int v11[4]; // [rsp+30h] [rbp-40h] BYREF
  _WORD v12[23]; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+80h] [rbp+10h] BYREF
  int v14; // [rsp+84h] [rbp+14h]
  int v15; // [rsp+88h] [rbp+18h] BYREF
  int v16; // [rsp+8Ch] [rbp+1Ch]

  v14 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  memset(v12, 0, sizeof(v12));
  v13 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v13);
  if ( v13 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0;
    v16 = 1;
    v3 = *(_QWORD *)(v1 + 712);
    *(_OWORD *)v11 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v3, (int)v11, v2, 2, &v15);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x4D706341u);
    v5 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 4, 0, 0x20CuLL);
      *(_DWORD *)v5 = 1;
      v6 = ACPIAmliEvaluatePcch(*(_QWORD *)(v1 + 712), (unsigned int)v12, (int)v5 + 80, (int)v5 + 64, v5 + 56);
      if ( v6 >= 0 )
      {
        if ( !HIBYTE(v12[1]) && (v12[2] & 4) != 0 && (v12[2] & 8) != 0 && (v12[2] & 0x100) != 0 )
        {
          *(_DWORD *)(v5 + 104) = *(_DWORD *)&v12[19];
          *(_QWORD *)(v5 + 96) = *(_QWORD *)&v12[7];
          v6 = AcpiPccInitilizeSubspace((PVOID)v5);
          if ( v6 >= 0 )
          {
            v8 = *(_QWORD *)(v5 + 32);
            *(_DWORD *)(v5 + 24) = *(_DWORD *)(v5 + 104);
            *(_QWORD *)(v5 + 16) = v8;
            *(_QWORD *)(v5 + 40) = v8 + 12;
            *(_QWORD *)(v5 + 48) = v8 + 14;
            *(_DWORD *)(v5 + 4) = *(_DWORD *)(v8 + 16);
            v9 = *(_DWORD *)(v8 + 20);
            if ( v9 )
              *(_DWORD *)(v5 + 8) = 0x1E8480 / v9;
            v10 = *(_DWORD *)v5;
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
              v10 |= 2u;
            AcpiPccLegacySubspace = v5;
            *(_DWORD *)v5 = v10 & 0xFFFFFFC3 | 8;
            v5 = 0LL;
          }
        }
        else
        {
          v6 = -1073741823;
        }
      }
      if ( v5 )
        ExFreePoolWithTag((PVOID)v5, 0x4D706341u);
    }
    else
    {
      v6 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xAu,
          (__int64)&WPP_aa09a4a2e6b4360d6f89773cef358f13_Traceguids);
    }
  }
  return (unsigned int)v6;
}
