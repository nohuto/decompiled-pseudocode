/*
 * XREFs of ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800DC6E4
 * Callers:
 *     ?Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x180166CB0 (-Parse@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUIS.c)
 * Callees:
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180059990 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     SpatialInteractionDevices::ReadBatteryLevel @ 0x1800DD004 (SpatialInteractionDevices--ReadBatteryLevel.c)
 *     SpatialInteractionDevices::ReadLocalOrientation @ 0x1800DD040 (SpatialInteractionDevices--ReadLocalOrientation.c)
 *     SpatialInteractionDevices::ReadPoseOrientation @ 0x1800DD0D8 (SpatialInteractionDevices--ReadPoseOrientation.c)
 *     SpatialInteractionDevices::ReadPosePosition @ 0x1800DD104 (SpatialInteractionDevices--ReadPosePosition.c)
 *     SpatialInteractionDevices::ReadThumbstick @ 0x1800DD12C (SpatialInteractionDevices--ReadThumbstick.c)
 *     SpatialInteractionDevices::ReadTouchpad @ 0x1800DD1B8 (SpatialInteractionDevices--ReadTouchpad.c)
 *     SpatialInteractionDevices::ReadTrigger @ 0x1800DD244 (SpatialInteractionDevices--ReadTrigger.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@std@@@std@@@2@AEBE@Z @ 0x1800DD890 (-find@-$_Tree@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@.c)
 */

__int64 __fastcall SpatialInteractionDevices::ParseInputReport(
        SpatialInteractionDevices *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        struct SpatialInteractionDevices::HID_REPORT *a3,
        struct SpatialInteractionDevices::InputReport *a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // r10
  USHORT v9; // r15
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  ULONG v14; // edx
  char v15; // r12
  struct _USAGE_AND_PAGE *v16; // r8
  USHORT v17; // dx
  NTSTATUS Usages; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ULONG UsageLength; // [rsp+80h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  LOBYTE(UsageLength) = **((_BYTE **)a2 + 1);
  std::_Tree<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::find(
    (char *)this + 248,
    &v24,
    &UsageLength);
  v7 = v24;
  if ( v24 != *v8 )
  {
    v9 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(v24 + 40) + 143LL) )
    {
      SpatialInteractionDevices::ReadPosePosition(this, a2, a3);
      SpatialInteractionDevices::ReadPoseOrientation(this, a2, a3);
      if ( *((_BYTE *)a3 + 29)
        && *((_BYTE *)a3 + 28)
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 3)) & _xmm) <= 0.001
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 4)) & _xmm) <= 0.001
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 5)) & _xmm) <= 0.001
        && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a3 + 6)) & _xmm) <= 0.001 )
      {
        *((_WORD *)a3 + 14) = 0;
      }
      SpatialInteractionDevices::ReadLocalOrientation(this, *(_QWORD *)(v7 + 40), a2, a3);
      SpatialInteractionDevices::ReadTouchpad(this, *(_QWORD *)(v7 + 40), a2, a3);
      SpatialInteractionDevices::ReadThumbstick(this, *(_QWORD *)(v7 + 40), a2, a3);
      SpatialInteractionDevices::ReadTrigger(this, *(_QWORD *)(v7 + 40), a2, a3);
      SpatialInteractionDevices::ReadBatteryLevel(this, *(_QWORD *)(v7 + 40), a2, a3);
      v10 = 0;
      *((_DWORD *)a3 + 8) = *((_DWORD *)this + 60);
      *((_DWORD *)a3 + 9) = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 144LL);
      v11 = *(_QWORD *)(v7 + 40);
      v12 = *(_QWORD *)(v11 + 160);
      v13 = *(_QWORD *)(v11 + 152);
      if ( (v12 - v13) / 12 )
      {
        v14 = 0;
        v15 = 1;
        UsageLength = 0;
        while ( v13 != v12 )
        {
          if ( v15 || v9 != *(_WORD *)v13 )
          {
            v9 = *(_WORD *)v13;
            v16 = (struct _USAGE_AND_PAGE *)*((_QWORD *)this + 34);
            v17 = *(_WORD *)v13;
            UsageLength = *((_DWORD *)this + 66);
            v15 = 0;
            Usages = HidP_GetUsagesEx(
                       HidP_Input,
                       v17,
                       v16,
                       &UsageLength,
                       *((PHIDP_PREPARSED_DATA *)this + 7),
                       *((PCHAR *)a2 + 1),
                       *(_DWORD *)a2);
            if ( Usages < 0 )
              return wil::details::in1diag3::Return_NtStatus(
                       retaddr,
                       (void *)0x291,
                       (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
                       (const char *)(unsigned int)Usages);
            v14 = UsageLength;
          }
          v19 = 0LL;
          if ( v14 )
          {
            v20 = *((_QWORD *)this + 34);
            while ( *(_WORD *)(v20 + 4 * v19) != *(_WORD *)(v13 + 4)
                 || *(_WORD *)(v20 + 4 * v19 + 2) != *(_WORD *)(v13 + 2) )
            {
              v19 = (unsigned int)(v19 + 1);
              if ( (unsigned int)v19 >= v14 )
                goto LABEL_23;
            }
            v10 |= *(_DWORD *)(v13 + 8);
          }
LABEL_23:
          v13 += 12LL;
        }
      }
      *((_DWORD *)a3 + 10) = v10;
    }
  }
  return 0LL;
}
