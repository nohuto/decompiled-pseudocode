/*
 * XREFs of ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C007F81C
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007FBB0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     memcmp @ 0x1C0041250 (memcmp.c)
 */

__int64 __fastcall ndisIMQueueDeviceInstance(
        struct _NDIS_M_DRIVER_BLOCK *a1,
        const struct _UNICODE_STRING *a2,
        void *a3)
{
  const struct _UNICODE_STRING *v4; // r14
  unsigned int v6; // ebx
  _NDIS_PENDING_IM_INSTANCE *PoolWithTag; // rax
  int v8; // edx
  _NDIS_PENDING_IM_INSTANCE *v9; // rdi
  _UNICODE_STRING *p_Name; // r12
  unsigned __int16 v11; // ax
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rax
  _NDIS_PENDING_IM_INSTANCE *v13; // rsi
  unsigned __int16 Length; // r13
  char v16; // [rsp+30h] [rbp-48h]
  _NDIS_PENDING_IM_INSTANCE *v17; // [rsp+88h] [rbp+10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      49,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      v16,
      (char)a3);
  }
  PoolWithTag = (_NDIS_PENDING_IM_INSTANCE *)ExAllocatePoolWithTag(NonPagedPoolNx, v4->Length + 34LL, 0x6964444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Context = a3;
    p_Name = &PoolWithTag->Name;
    v11 = v4->Length + 2;
    v9->Name.Length = 0;
    v9->Name.MaximumLength = v11;
    v9->Name.Buffer = (wchar_t *)&v9[1];
    RtlUpcaseUnicodeString(&v9->Name, v4, 0);
    PendingDeviceList = a1->PendingDeviceList;
    v17 = PendingDeviceList;
    v13 = PendingDeviceList;
    if ( PendingDeviceList )
    {
      Length = p_Name->Length;
      while ( Length != v13->Name.Length || memcmp(v9->Name.Buffer, v13->Name.Buffer, Length) )
      {
        v13 = v13->Next;
        if ( !v13 )
        {
          PendingDeviceList = v17;
          goto LABEL_11;
        }
      }
      ExFreePoolWithTag(v9, 0);
      v6 = 65539;
    }
    else
    {
LABEL_11:
      v9->Next = PendingDeviceList;
      a1->PendingDeviceList = v9;
    }
  }
  else
  {
    v6 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1u,
      0x32u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      (char)v4,
      (char)a3,
      v6);
  return v6;
}
