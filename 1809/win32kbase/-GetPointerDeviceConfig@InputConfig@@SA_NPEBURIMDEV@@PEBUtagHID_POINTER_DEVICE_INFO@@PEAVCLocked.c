/*
 * XREFs of ?GetPointerDeviceConfig@InputConfig@@SA_NPEBURIMDEV@@PEBUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01535E8
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

char __fastcall InputConfig::GetPointerDeviceConfig(
        const struct RIMDEV *a1,
        const struct tagHID_POINTER_DEVICE_INFO *a2,
        struct CLockedInputSpace *a3,
        struct CLockedInputSpaceRegion *a4)
{
  char v4; // di
  __int64 v8; // rax
  PERESOURCE *v9; // rbx
  struct CEResource *v10; // rdx
  PERESOURCE v11; // rax
  PERESOURCE i; // r15
  POWNER_ENTRY *p_OwnerTable; // rbx
  PERESOURCE p_ExclusiveWaiters; // rax
  PERESOURCE *p_NumberOfSharedWaiters; // r12
  PERESOURCE Flink; // rdx
  POWNER_ENTRY *v17; // rcx
  PERESOURCE *v19[3]; // [rsp+20h] [rbp-40h] BYREF
  PERESOURCE *v20[5]; // [rsp+38h] [rbp-28h] BYREF
  CInputConfig *v21; // [rsp+98h] [rbp+38h]

  v4 = 0;
  if ( *((_DWORD *)a2 + 6) == 7 )
  {
    v4 = 1;
    v8 = *((_QWORD *)gpInputConfig + 3);
    *(_QWORD *)a3 = v8;
    *(_QWORD *)a4 = v8 + 24;
  }
  else
  {
    v9 = (PERESOURCE *)gpInputConfig;
    v21 = gpInputConfig;
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v20, a2);
    v11 = *v9;
    v20[1] = v9;
    for ( i = (PERESOURCE)v11->SystemResourcesList.Flink; ; i = (PERESOURCE)i->SystemResourcesList.Flink )
    {
      v20[3] = (PERESOURCE *)i;
      v20[2] = (PERESOURCE *)v11;
      if ( v11 == (PERESOURCE)v9 )
        break;
      p_OwnerTable = &v11->OwnerTable;
      if ( v11 == (PERESOURCE)-16LL )
        break;
      if ( v11[11].ContentionCount )
      {
        if ( *((_DWORD *)a1 + 298) )
        {
          if ( *((_DWORD *)a1 + 302) == 4 )
          {
            if ( (*(_DWORD *)&v11->ActiveCount & 1) != 0 )
            {
              p_ExclusiveWaiters = v11 + 6;
LABEL_26:
              *(_QWORD *)a3 = p_OwnerTable;
              v4 = 1;
              *(_QWORD *)a4 = p_ExclusiveWaiters;
              break;
            }
          }
          else
          {
            p_NumberOfSharedWaiters = (PERESOURCE *)&v11[11].NumberOfSharedWaiters;
            CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v19, v10);
            Flink = *p_NumberOfSharedWaiters;
            v19[1] = (PERESOURCE *)(p_OwnerTable + 150);
            while ( 1 )
            {
              v17 = 0LL;
              v19[2] = (PERESOURCE *)Flink;
              if ( Flink != (PERESOURCE)p_NumberOfSharedWaiters )
                v17 = &Flink->OwnerTable;
              if ( !v17 )
                break;
              if ( ((_DWORD)v17[2] & 2) != 0
                && *((_DWORD *)v17 + 9) == *((_DWORD *)a1 + 431)
                && *((_DWORD *)v17 + 10) == *((_DWORD *)a1 + 432)
                && *((_DWORD *)v17 + 11) == *((_DWORD *)a1 + 434) )
              {
                *(_QWORD *)a3 = p_OwnerTable;
                v4 = 1;
                *(_QWORD *)a4 = v17;
                break;
              }
              Flink = (PERESOURCE)Flink->SystemResourcesList.Flink;
            }
            CEResourceLockExclusive::~CEResourceLockExclusive(v19);
            if ( v4 )
              break;
          }
        }
        else if ( (*(_DWORD *)&v11->ActiveCount & 1) != 0 )
        {
          p_ExclusiveWaiters = (PERESOURCE)&v11->ExclusiveWaiters;
          goto LABEL_26;
        }
      }
      v9 = (PERESOURCE *)v21;
      v11 = i;
    }
    CEResourceLockExclusive::~CEResourceLockExclusive(v20);
  }
  return v4;
}
