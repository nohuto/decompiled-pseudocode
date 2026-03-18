/*
 * XREFs of NtDxgkEndTrackedWorkload @ 0x1C0297EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049DE8 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0296C14 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C02971AC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEBU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 */

__int64 __fastcall NtDxgkEndTrackedWorkload(unsigned int *a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD **Current; // rax
  const struct _D3DKMT_ENDTRACKEDWORKLOAD *v3; // rdx
  unsigned int v4; // ebx
  PVOID P; // [rsp+38h] [rbp+10h] BYREF
  struct DXGTRACKEDWORKLOAD *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v7 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)&P, v1, Current, &v7);
  if ( v7 )
    v4 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(v7, v3);
  else
    v4 = -1073741811;
  if ( P )
    DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
  return v4;
}
