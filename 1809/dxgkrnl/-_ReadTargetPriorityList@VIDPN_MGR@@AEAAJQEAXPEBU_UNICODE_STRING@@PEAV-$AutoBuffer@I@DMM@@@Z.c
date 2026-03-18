/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0152A48
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C004C250 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C004D744 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // rax
  void *v15; // rcx
  char *v16; // rdi
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  SIZE_T v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  void **v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+38h] [rbp-38h]
  void **v24; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v29; // [rsp+94h] [rbp+24h]

  v29 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v12 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v26 = 0LL;
    v22 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v24 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v23 = 0LL;
    v27 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v22, ResultLength);
    v16 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v17 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v19 = v17;
      if ( v17 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = v19;
        WdLogEvent5_WdError(v20);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v22);
        return (unsigned int)v19;
      }
      v19 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v19);
      v15 = *(void **)(a4 + 32);
      if ( v15 )
      {
        memmove(v15, v16 + 12, v19);
        LODWORD(v19) = 0;
        goto LABEL_12;
      }
    }
    v21 = WdLogNewEntry5_WdLowResource(v15);
    WdLogEvent5_WdLowResource(v21);
    LODWORD(v19) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v14);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = v12;
  return 3221226021LL;
}
