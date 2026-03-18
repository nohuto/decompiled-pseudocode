/*
 * XREFs of NtDxgkEndTrackedWorkload @ 0x1C0260DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0042A80 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C026003C (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z @ 0x1C0260354 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAU_D3DKMT_ENDTRACKEDWORKLOAD@@@Z.c)
 */

__int64 __fastcall NtDxgkEndTrackedWorkload(unsigned int *a1)
{
  unsigned int v1; // ebx
  struct _KTHREAD **Current; // rax
  struct _D3DKMT_ENDTRACKEDWORKLOAD *v3; // rdx
  unsigned int v4; // ebx
  DXGTRACKEDWORKLOAD *v6; // [rsp+38h] [rbp+10h] BYREF
  struct DXGTRACKEDWORKLOAD *v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v1 = *a1;
  v7 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)&v6, v1, Current, &v7);
  if ( v7 )
    v4 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(v7, v3);
  else
    v4 = -1073741811;
  if ( v6 )
    DXGTRACKEDWORKLOAD::Release(v6);
  return v4;
}
