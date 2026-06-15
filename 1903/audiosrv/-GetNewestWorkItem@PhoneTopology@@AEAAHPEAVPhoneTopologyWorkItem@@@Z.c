/*
 * XREFs of ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x18014892C
 * Callers:
 *     ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801480D0 (-GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180148300 (-GetCellularRxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 *     ?GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x1801485F0 (-GetCellularTxMute@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??4PhoneTopologyWorkItem@@QEAAAEBV0@AEBV0@@Z @ 0x180147554 (--4PhoneTopologyWorkItem@@QEAAAEBV0@AEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::GetNewestWorkItem(PhoneTopology *this, struct PhoneTopologyWorkItem *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD **)(v4 + 16);
      if ( v5[268] == *((_DWORD *)a2 + 268) && v5[3] == *((_DWORD *)a2 + 3) )
        break;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_5;
    }
    PhoneTopologyWorkItem::operator=(a2, v5);
    v6 = 1;
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
