/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F48
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001699C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B2A8 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

void __fastcall HampHostInitialize(char a1, struct _RM_PSM_HOST_INFO *a2, struct _RM_HAM_ACTIVITY_HOST *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  unsigned __int8 IsPple; // al
  __int64 v10; // rdx
  int v11; // r9d
  ULONGLONG v12; // r9
  char v13; // [rsp+38h] [rbp-59h] BYREF
  _DWORD v14[3]; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+7h]
  int v23; // [rsp+A0h] [rbp+Fh]
  int v24; // [rsp+A4h] [rbp+13h]
  char *v25; // [rsp+A8h] [rbp+17h]
  int v26; // [rsp+B0h] [rbp+1Fh]
  int v27; // [rsp+B4h] [rbp+23h]
  _DWORD *v28; // [rsp+B8h] [rbp+27h]
  int v29; // [rsp+C0h] [rbp+2Fh]
  int v30; // [rsp+C4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C8h] [rbp+37h] BYREF

  memset_0((char *)a3 + 16, 0, 0x408uLL);
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  RtlInitializeSRWLock(a3);
  *((_DWORD *)a3 + 2) = 0;
  *((_QWORD *)a3 + 76) = (char *)a3 + 600;
  *((_QWORD *)a3 + 75) = (char *)a3 + 600;
  RtlInitializeConditionVariable((char *)a3 + 16);
  RtlInitializeConditionVariable((char *)a3 + 680);
  *((_QWORD *)a3 + 88) = 0LL;
  *((_QWORD *)a3 + 89) = 0LL;
  *((_QWORD *)a3 + 90) = -1LL;
  *((_QWORD *)a3 + 93) = 0LL;
  *((_QWORD *)a3 + 94) = 0LL;
  v6 = 4LL;
  *((_QWORD *)a3 + 95) = -1LL;
  *((_QWORD *)a3 + 126) = -1LL;
  *((_QWORD *)a3 + 127) = -1LL;
  *((_QWORD *)a3 + 128) = -1LL;
  *((_QWORD *)a3 + 129) = -1LL;
  v7 = (_OWORD *)((char *)a3 + 24);
  *((_QWORD *)a3 + 81) &= 0xFFFFFFFFF997FFFFuLL;
  *((_QWORD *)a3 + 81) |= 0x19940000uLL;
  *((_DWORD *)a3 + 193) &= ~1u;
  *((_DWORD *)a3 + 193) |= a1 & 1;
  do
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
    v7[3] = *((_OWORD *)a2 + 3);
    v7[4] = *((_OWORD *)a2 + 4);
    v7[5] = *((_OWORD *)a2 + 5);
    v7[6] = *((_OWORD *)a2 + 6);
    v7 += 8;
    v8 = *((_OWORD *)a2 + 7);
    a2 = (struct _RM_PSM_HOST_INFO *)((char *)a2 + 128);
    *(v7 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v7 = *(_OWORD *)a2;
  v7[1] = *((_OWORD *)a2 + 1);
  *((_QWORD *)v7 + 4) = *((_QWORD *)a2 + 4);
  IsPple = RmpActivityHostIsPple((struct _RM_HAM_ACTIVITY_HOST *)((char *)a3 - 64));
  *((_QWORD *)a3 + 100) = 1LL;
  *((_QWORD *)a3 + 81) &= ~0x400000000000000uLL;
  *((_QWORD *)a3 + 81) |= (unsigned __int64)(IsPple & 1) << 58;
  if ( dword_1800AB2C0 > 4u && (byte_1800AB2D0 & 8) != 0 && (qword_1800AB2D8 & 8) == qword_1800AB2D8 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a3 + 12);
    v10 = *((_QWORD *)a3 - 4);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v15;
    v13 = *((_BYTE *)a3 + 560);
    v25 = &v13;
    v14[0] = *((_DWORD *)a3 + 139);
    v15 = v10;
    v28 = v14;
    v23 = v11;
    v26 = 1;
    v29 = 4;
    TlgCreateSid(&v31, (const SID *)((char *)a3 + 488));
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    EventDescriptor.Keyword = v12;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v18 = &unk_18009905E;
    UserData.Reserved = 2;
    v19 = 58;
    v20 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
