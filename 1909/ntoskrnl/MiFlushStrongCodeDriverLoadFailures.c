/*
 * XREFs of MiFlushStrongCodeDriverLoadFailures @ 0x1409F1380
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgCreateSz @ 0x1400D6128 (_TlgCreateSz.c)
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1406A5B10 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A5B70 (MmAcquireLoadLock.c)
 */

_QWORD *MiFlushStrongCodeDriverLoadFailures()
{
  struct _KTHREAD *Lock; // rdi
  unsigned __int16 *v1; // rbx
  __int64 v3; // rax
  const CHAR *v4; // rdx
  __int64 v5; // rax
  ULONG64 v6; // r8
  TraceLoggingHProvider v7; // r9
  const GUID *v8; // [rsp+28h] [rbp-59h]
  const GUID *v9; // [rsp+30h] [rbp-51h]
  int v10; // [rsp+48h] [rbp-39h] BYREF
  int v11; // [rsp+4Ch] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-9h] BYREF
  _DWORD *v14; // [rsp+88h] [rbp+7h]
  int v15; // [rsp+90h] [rbp+Fh]
  int v16; // [rsp+94h] [rbp+13h]
  __int64 v17; // [rsp+98h] [rbp+17h]
  _DWORD v18[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  int *v19; // [rsp+A8h] [rbp+27h]
  int v20; // [rsp+B0h] [rbp+2Fh]
  int v21; // [rsp+B4h] [rbp+33h]
  int *v22; // [rsp+B8h] [rbp+37h]
  int v23; // [rsp+C0h] [rbp+3Fh]
  int v24; // [rsp+C4h] [rbp+43h]

  Lock = MmAcquireLoadLock();
  while ( 1 )
  {
    v1 = (unsigned __int16 *)qword_140464608;
    if ( qword_140464608 == &qword_140464608 )
      break;
    if ( *((PVOID **)qword_140464608 + 1) != &qword_140464608
      || (v3 = *(_QWORD *)qword_140464608, *(PVOID *)(*(_QWORD *)qword_140464608 + 8LL) != qword_140464608) )
    {
      __fastfail(3u);
    }
    qword_140464608 = *(PVOID *)qword_140464608;
    *(_QWORD *)(v3 + 8) = &qword_140464608;
    if ( hProvider->LevelPlus1 > 5 && TlgKeywordOn(hProvider, 0x400000000000uLL) )
    {
      v4 = (const CHAR *)*((_QWORD *)v1 + 2);
      v10 = *((_DWORD *)v1 + 10);
      v11 = *((_DWORD *)v1 + 11);
      TlgCreateSz(&pDesc, v4);
      v5 = *((_QWORD *)v1 + 4);
      v16 = 0;
      v18[1] = 0;
      v21 = 0;
      v24 = 0;
      v17 = v5;
      v18[0] = v1[12];
      v19 = &v10;
      v22 = &v11;
      v14 = v18;
      v15 = 2;
      v20 = 4;
      v23 = 4;
      TlgWriteEx(v7, &unk_14038D9A4, v6, (ULONG)v7, v8, v9, 7u, &pData);
    }
    ExFreePoolWithTag(v1, 0);
  }
  return MmReleaseLoadLock((__int64)Lock);
}
