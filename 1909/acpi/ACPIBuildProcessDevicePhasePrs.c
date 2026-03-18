/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C0029D20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0029E40 (PnpBiosSetFlagsForNotableInterrupts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  char v5; // r8
  void *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // edx

  v1 = *(_QWORD *)(a1 + 56) == 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 16;
  if ( !v1 && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(a1 + 82) == 3 )
    {
      PnpBiosSetFlagsForNotableInterrupts(v3, *(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 104));
      v4 = a1 + 80;
    }
    else
    {
      v4 = a1 + 80;
    }
    dword_1C0082858 = 0;
    pszDest = 0;
    FreeDataBuffs(v4, 1u);
  }
  v5 = 0;
  v6 = &unk_1C006FE7D;
  v7 = &unk_1C006FE7D;
  if ( v3 )
  {
    v8 = v3[1];
    v5 = (char)v3;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (void *)v3[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v3[71];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x24u,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      0,
      v5,
      (__int64)v6,
      (__int64)v7);
  v9 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
  return 0LL;
}
