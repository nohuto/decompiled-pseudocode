/*
 * XREFs of CmpTraceHiveSaveStart @ 0x14082645C
 * Callers:
 *     CmSaveKey @ 0x14083AA9C (CmSaveKey.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x140668850 (CmpConstructNameWithStatus.c)
 */

void __fastcall CmpTraceHiveSaveStart(__int64 a1)
{
  ULONGLONG *v2; // rbx
  ULONG v3; // ecx
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  ULONGLONG *v5; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  __int16 *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]

  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_SAVE_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v4 = 0;
    v5 = 0LL;
    CmpConstructNameWithStatus(a1, &v5);
    v2 = v5;
    if ( v5 )
    {
      v3 = *(unsigned __int16 *)v5;
      UserData.Ptr = v5[1];
      UserData.Size = v3;
      v8 = &v4;
      UserData.Reserved = 0;
      v9 = 2LL;
      EtwWrite(EtwpRegTraceHandle, &EventDescriptor, 0LL, 2u, &UserData);
      CmpFreeTransientPoolWithTag(v2, 0x624E4D43u);
    }
  }
}
