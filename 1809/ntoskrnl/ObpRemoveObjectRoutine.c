/*
 * XREFs of ObpRemoveObjectRoutine @ 0x140646E80
 * Callers:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     NtSetInformationWorkerFactory @ 0x140106180 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x140692B80 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 */

__int64 __fastcall ObpRemoveObjectRoutine(__int64 a1, char a2)
{
  ULONG_PTR v4; // rdi
  void (__fastcall *v5)(__int64); // rax
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 + 24) ^ (unsigned __int64)BYTE1(a1)];
  if ( (PVOID)v4 == ObpTypeObjectType )
    KeBugCheckEx(0xF4u, v4, a1 + 48, 0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 )
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int64 *, _DWORD, _QWORD, _BYTE))(v4 + 152))(
      a1 + 48,
      2LL,
      0LL,
      0LL,
      0LL,
      &v7,
      0,
      0LL,
      0);
  v5 = *(void (__fastcall **)(__int64))(v4 + 136);
  if ( v5 )
  {
    if ( !a2 )
    {
      *(_BYTE *)(a1 + 27) |= 0x80u;
      v5 = *(void (__fastcall **)(__int64))(v4 + 136);
    }
    v5(a1 + 48);
  }
  return ObpFreeObject(a1);
}
