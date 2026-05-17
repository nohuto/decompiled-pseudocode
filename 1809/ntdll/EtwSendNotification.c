/*
 * XREFs of EtwSendNotification @ 0x18004EC20
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtTraceControl @ 0x1800A3A50 (NtTraceControl.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, unsigned int a2, char *a3, unsigned int *a4, _DWORD *a5)
{
  char v5; // bp
  unsigned int v8; // esi
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // r9d
  void *v14; // rbp
  unsigned int v15; // r10d
  char *v16; // rax
  _BYTE v18[8]; // [rsp+50h] [rbp-D8h] BYREF
  char v19; // [rsp+58h] [rbp-D0h] BYREF

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v5 == 1 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    if ( !v8 )
      v8 = 60000;
  }
  v11 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, v18);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( v5 && !v12 )
  {
    v13 = *(_DWORD *)(a1 + 20);
    v14 = *(void **)(a1 + 24);
    if ( v13 )
    {
      v15 = 120;
      v16 = &v19;
      if ( *(_DWORD *)a1 != 3 )
      {
        v15 = a2;
        v16 = a3;
      }
      v12 = EtwpReceiveReplyDataBlock((int)v14, v8, *(_DWORD *)a1 == 3, v13, (__int64)v16, v15, a4, a5, *(_DWORD *)a1);
    }
    if ( v14 )
      NtClose(v14);
  }
  return v12;
}
