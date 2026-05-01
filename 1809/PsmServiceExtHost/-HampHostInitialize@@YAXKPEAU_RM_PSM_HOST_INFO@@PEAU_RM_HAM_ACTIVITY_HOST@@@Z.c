/*
 * XREFs of ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017BD8
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180016BA8 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800186A0 (-RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall HampHostInitialize(char a1, struct _RM_PSM_HOST_INFO *a2, struct _RM_HAM_ACTIVITY_HOST *a3)
{
  __int64 v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  unsigned __int8 IsPple; // al
  __int64 v10; // r9
  int v11; // r10d
  ULONGLONG v12; // r10
  char v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  void *v18; // [rsp+68h] [rbp-19h]
  int v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  __int64 *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  char *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  int *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+B8h] [rbp+37h] BYREF

  memset_0(a3, 0, 0x3E0uLL);
  RtlInitializeSRWLock(a3);
  *((_DWORD *)a3 + 2) = 0;
  *((_QWORD *)a3 + 74) = (char *)a3 + 584;
  *((_QWORD *)a3 + 73) = (char *)a3 + 584;
  RtlInitializeConditionVariable((char *)a3 + 16);
  RtlInitializeConditionVariable((char *)a3 + 656);
  *((_QWORD *)a3 + 85) = 0LL;
  *((_QWORD *)a3 + 86) = 0LL;
  *((_QWORD *)a3 + 87) = -1LL;
  *((_QWORD *)a3 + 90) = 0LL;
  *((_QWORD *)a3 + 91) = 0LL;
  v6 = 4LL;
  *((_QWORD *)a3 + 92) = -1LL;
  v7 = (_OWORD *)((char *)a3 + 24);
  *((_QWORD *)a3 + 79) &= 0xFFFFFFFFF597FFFFuLL;
  *((_QWORD *)a3 + 79) |= 0x15940000uLL;
  *((_DWORD *)a3 + 187) &= ~1u;
  *((_DWORD *)a3 + 187) |= a1 & 1;
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
  *((_QWORD *)a3 + 97) = 1LL;
  *((_QWORD *)a3 + 79) &= ~0x400000000000000uLL;
  *((_QWORD *)a3 + 79) |= (unsigned __int64)(IsPple & 1) << 58;
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a3 + 12);
    v10 = *((_QWORD *)a3 - 4);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v15;
    v13 = *((_DWORD *)a3 + 140);
    v25 = &v13;
    v14 = *((_DWORD *)a3 + 139);
    v28 = &v14;
    v15 = v10;
    v23 = v11;
    v26 = 1;
    v29 = 4;
    TlgCreateSid(&v31, (const SID *)((char *)a3 + 488));
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18009B0F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008B4B9 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v12;
    UserData.Size = *(unsigned __int16 *)off_18009B0F8;
    v18 = &unk_18008B4C4;
    UserData.Reserved = 2;
    v19 = 58;
    v20 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
}
