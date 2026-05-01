/*
 * XREFs of ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180016818
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001699C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, void **a2)
{
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v5; // [rsp+48h] [rbp-31h] BYREF
  struct _RM_ACTIVITY_HOST *v6; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-9h] BYREF
  void *v9; // [rsp+80h] [rbp+7h]
  int v10; // [rsp+88h] [rbp+Fh]
  int v11; // [rsp+8Ch] [rbp+13h]
  _DWORD *v12; // [rsp+90h] [rbp+17h]
  __int64 v13; // [rsp+98h] [rbp+1Fh]
  __int64 *v14; // [rsp+A0h] [rbp+27h]
  __int64 v15; // [rsp+A8h] [rbp+2Fh]
  struct _RM_ACTIVITY_HOST **v16; // [rsp+B0h] [rbp+37h]
  __int64 v17; // [rsp+B8h] [rbp+3Fh]

  result = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, void **))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                           + 120LL))(
             (char *)a1 + 552,
             *((unsigned int *)a1 + 155),
             (char *)a1 + 88,
             *((unsigned int *)a1 + 156),
             *((_QWORD *)a1 + 4),
             *((_DWORD *)a1 + 209) & 1,
             a2);
  v4[0] = result;
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    v13 = 4LL;
    v12 = v4;
    v5 = *((_QWORD *)a1 + 4);
    v14 = &v5;
    v16 = &v6;
    v15 = 8LL;
    v6 = a1;
    v17 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v9 = &unk_180096960;
    UserData.Reserved = 2;
    v10 = 46;
    v11 = 1;
    v4[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    return v4[0];
  }
  return result;
}
