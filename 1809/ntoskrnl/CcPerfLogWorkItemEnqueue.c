/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x140187C98
 * Callers:
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x1400D6078 (CcPostWorkQueue.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C (CcWaitForCurrentLazyWriterActivityInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // bl
  char v8; // cl
  __int64 v9; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rdx
  ULONG_PTR v14; // rax
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h]
  __int64 *v18; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( a1 == v4 + 224 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 240 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 256 )
  {
    v7 = 3;
  }
  else if ( a1 == v4 + 272 )
  {
    v7 = 4;
  }
  else
  {
    v13 = *(_QWORD *)(v4 + 800);
    if ( a1 == v13 || a1 == v13 + 16 || a1 == v13 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(a2 + 120);
  switch ( v8 )
  {
    case 2:
      v11 = *(_QWORD *)(a2 + 16);
      BYTE1(v17) = 2;
      if ( a4 )
      {
        v16 = *(_QWORD *)((*(_QWORD *)(v11 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v14 = CcReferenceSharedCacheMapFileObject(v11);
        v16 = *(_QWORD *)(v14 + 24);
        CcDereferenceSharedCacheMapFileObject(v11, v14);
      }
      break;
    case 1:
      v9 = *(_QWORD *)(a2 + 16);
      BYTE1(v17) = 1;
      v16 = *(_QWORD *)(v9 + 24);
      break;
    case 3:
      BYTE1(v17) = 3;
      break;
    default:
      v12 = BYTE1(v17);
      if ( v8 == 4 )
        v12 = 4;
      BYTE1(v17) = v12;
      break;
  }
  LOBYTE(v17) = v7;
  v15 = a2;
  BYTE2(v17) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v20 = 0;
  v19 = 24;
  v18 = &v15;
  if ( CurrentIrql >= 2u )
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80020000, 0x1600u, 0x400102u);
  else
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80020000, 0x1600u, 0x401902u);
}
