/*
 * XREFs of ?ProcessSectionAttributes@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C0207360
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010C210 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C010F510 (-CreateVidMmAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessSectionAttributes(PVOID Object, struct _DXGK_ALLOCATIONINFO *a2)
{
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  UINT Alignment; // eax
  __int64 SectionInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  HANDLE SectionHandle; // [rsp+80h] [rbp+18h] BYREF

  ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType();
  v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, ObjectType, 0, &SectionHandle);
  if ( v5 >= 0 )
  {
    SectionInformation = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v5 = ZwQuerySection(SectionHandle, SectionBasicInformation, &SectionInformation, 0x18uLL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = v13;
      v7 = a2->Flags.Value | 4;
      v8 = v13 & 0x50000000;
      if ( (v13 & 0x50000000) != 0 )
        v7 = a2->Flags.Value & 0xFFFFFFFB;
      a2->Flags.Value = v7;
      if ( (v6 & 0x8000000) != 0 )
      {
        if ( (v6 & 0x80000) != 0 )
        {
          Alignment = a2->Alignment;
          if ( !Alignment || (_WORD)Alignment )
            a2->Alignment = 0x10000;
        }
      }
      else
      {
        v9 = WdLogNewEntry5_WdWarning(v8, v7, v6);
        *(_QWORD *)(v9 + 24) = 3790LL;
        WdLogEvent5_WdWarning(v9);
        v5 = -1073741811;
      }
    }
    ObCloseHandle(SectionHandle, 0);
  }
  return (unsigned int)v5;
}
