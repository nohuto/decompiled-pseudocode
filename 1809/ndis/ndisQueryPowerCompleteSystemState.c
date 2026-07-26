/*
 * XREFs of ndisQueryPowerCompleteSystemState @ 0x1C0011560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisQueryPowerCompleteSystemState(int a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // r9
  NTSTATUS v6; // eax
  int v7; // ecx
  int v8; // esi

  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(34LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, a2[12]);
  v5 = a2[12];
  if ( (int)v5 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qD(35LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, v5);
    if ( (byte_1C00A2081 & 8) != 0 )
      McTemplateK0jqxq(
        a1,
        (unsigned int)&QueryPowerCompleteSystemState,
        a3 + 4040,
        a3 + 4040,
        *(_DWORD *)(a3 + 4088),
        *(_QWORD *)(a3 + 4056),
        a2[12]);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4152), a2, 0x20u);
    return a2[12];
  }
  else
  {
    v6 = PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(a3 + 3864),
           3u,
           *(POWER_STATE *)(a3 + 3160),
           ndisQueryPowerComplete,
           (PVOID)a3,
           0LL);
    v8 = v6;
    if ( v6 < 0 )
    {
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_qD(36LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3, (unsigned int)v6);
      if ( (byte_1C00A2081 & 8) != 0 )
        McTemplateK0jqxq(
          v7,
          (unsigned int)&QueryPowerCompleteSystemStatePoRequest,
          a3 + 4040,
          a3 + 4040,
          *(_DWORD *)(a3 + 4088),
          *(_QWORD *)(a3 + 4056),
          v8);
    }
    else
    {
      *(_QWORD *)(a3 + 776) = a2;
    }
    if ( v8 < 0 )
    {
      a2[12] = v8;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a3 + 4152), a2, 0x20u);
    }
    else
    {
      v8 = -1073741802;
    }
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(37LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a3);
    return (unsigned int)v8;
  }
}
