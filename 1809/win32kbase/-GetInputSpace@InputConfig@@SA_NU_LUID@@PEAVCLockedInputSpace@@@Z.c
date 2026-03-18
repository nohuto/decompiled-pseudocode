/*
 * XREFs of ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C0153548
 * Callers:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0112364 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0113408 (RIMSetPointerDeviceInputSpace.c)
 * Callees:
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

char __fastcall InputConfig::GetInputSpace(struct _LUID a1, struct CLockedInputSpace *a2)
{
  PERESOURCE *v2; // rsi
  DWORD LowPart; // ebx
  char v4; // di
  PERESOURCE v6; // rax
  struct _ERESOURCE *i; // rcx
  POWNER_ENTRY *p_OwnerTable; // rax
  PERESOURCE *v10[2]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE v11; // [rsp+30h] [rbp-18h]
  struct _ERESOURCE *v12; // [rsp+38h] [rbp-10h]
  LONG HighPart; // [rsp+54h] [rbp+Ch]

  HighPart = a1.HighPart;
  v2 = (PERESOURCE *)gpInputConfig;
  LowPart = a1.LowPart;
  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v10, a2);
  v6 = *v2;
  v10[1] = v2;
  v11 = v6;
  for ( i = (struct _ERESOURCE *)v6->SystemResourcesList.Flink; ; i = (struct _ERESOURCE *)i->SystemResourcesList.Flink )
  {
    v12 = i;
    if ( v6 == (PERESOURCE)v2 )
      break;
    p_OwnerTable = &v6->OwnerTable;
    if ( !p_OwnerTable )
      break;
    if ( LowPart == *(_DWORD *)p_OwnerTable && HighPart == *((_DWORD *)p_OwnerTable + 1) )
    {
      *(_QWORD *)a2 = p_OwnerTable;
      v4 = 1;
      break;
    }
    v6 = i;
    v11 = i;
  }
  CEResourceLockExclusive::~CEResourceLockExclusive(v10);
  return v4;
}
