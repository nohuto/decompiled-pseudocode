/*
 * XREFs of AlpcpPortQueryServerSessionInfo @ 0x140583088
 * Callers:
 *     NtAlpcQueryInformation @ 0x14068FA30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     AlpcpReferenceConnectedPort @ 0x14068FEF4 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  signed __int64 *v9; // rdi
  _DWORD *v10; // rbx
  int v11; // edi
  int SessionId; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort();
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  ExAcquirePushLockSharedEx(v7 + 352, 0LL);
  v10 = 0LL;
  if ( (v8[3] & 1) == 0 )
    v10 = (_DWORD *)v8[3];
  if ( v10 )
    ObfReferenceObjectWithTag(v10, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v10 )
    return 3221225485LL;
  v11 = v10[184];
  SessionId = MmGetSessionIdEx((__int64)v10);
  ObfDereferenceObjectWithTag(v10, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = SessionId;
    a2[1] = v11;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}
