/*
 * XREFs of ?AppendAllocationListToResourceOrDevice@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@1@Z @ 0x1C00FFC90
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0011A28 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0020824 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::AppendAllocationListToResourceOrDevice(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        struct DXGALLOCATION *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 i; // rcx
  DXGPUSHLOCK *v11[5]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, this + 20, 0);
  if ( a2 )
  {
    v9 = *((_QWORD *)a2 + 3);
    if ( v9 )
    {
      for ( i = *(_QWORD *)(v9 + 64); i; i = *(_QWORD *)(i + 64) )
        v9 = i;
      *(_QWORD *)(v9 + 64) = a3;
      *((_QWORD *)a3 + 7) = v9;
    }
    else
    {
      *((_QWORD *)a2 + 3) = a3;
    }
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v11);
    *((_QWORD *)a4 + 8) = this[6];
    this[6] = a3;
    v8 = *((_QWORD *)a4 + 8);
    if ( v8 )
      *(_QWORD *)(v8 + 56) = a4;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
