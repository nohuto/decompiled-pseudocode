/*
 * XREFs of ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C016B378
 * Callers:
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C016AC38 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C00534A0 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C00549A0 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::_ReadTargetPriorityList(__int64 a1, void *a2, struct _UNICODE_STRING *a3, __int64 a4)
{
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  SIZE_T v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  void **v26; // [rsp+30h] [rbp-40h] BYREF
  __int128 v27; // [rsp+38h] [rbp-38h]
  void **v28; // [rsp+48h] [rbp-28h]
  PVOID KeyValueInformation; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h]
  int v31; // [rsp+60h] [rbp-10h]
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  int v33; // [rsp+94h] [rbp+24h]

  v33 = HIDWORD(a1);
  ResultLength = 0;
  v7 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  v11 = v7;
  if ( v7 == -2147483643 || v7 == -1073741789 )
  {
    KeyValueInformation = 0LL;
    v30 = 0LL;
    v26 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
    v28 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
    v27 = 0LL;
    v31 = 3;
    DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize((__int64)&v26, ResultLength, v10);
    v18 = (char *)KeyValueInformation;
    if ( KeyValueInformation )
    {
      v19 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, KeyValueInformation, ResultLength, &ResultLength);
      v23 = v19;
      if ( v19 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v21, v20, v22);
        *(_QWORD *)(v24 + 24) = v23;
        WdLogEvent5_WdError(v24);
LABEL_12:
        DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v26);
        return (unsigned int)v23;
      }
      v23 = (ResultLength - 12) & 0xFFFFFFFC;
      DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(a4, v23, v22);
      v15 = *(void **)(a4 + 32);
      if ( v15 )
      {
        memmove(v15, v18 + 12, v23);
        LODWORD(v23) = 0;
        goto LABEL_12;
      }
    }
    v25 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    WdLogEvent5_WdLowResource(v25);
    LODWORD(v23) = -1073741801;
    goto LABEL_12;
  }
  if ( v7 >= 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v13);
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8) + 24) = v11;
  return 3221226021LL;
}
