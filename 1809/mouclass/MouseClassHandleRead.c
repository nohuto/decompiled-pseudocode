/*
 * XREFs of MouseClassHandleRead @ 0x1C00029A0
 * Callers:
 *     MouseClassRead @ 0x1C0003590 (MouseClassRead.c)
 * Callees:
 *     MouseClassReadCopyData @ 0x1C00036D8 (MouseClassReadCopyData.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0005338 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall MouseClassHandleRead(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v2; // r14
  unsigned int CopyData; // esi
  char v6; // bp
  KIRQL v7; // r15
  __int64 **v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 **v11; // rax

  v2 = (KSPIN_LOCK *)(a1 + 144);
  CopyData = 259;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  if ( *(_DWORD *)(a1 + 84) )
  {
    CopyData = MouseClassReadCopyData(a1, a2);
    *(_DWORD *)(a2 + 48) = CopyData;
    goto LABEL_12;
  }
  v8 = *(__int64 ***)(a1 + 160);
  v9 = (__int64 *)(a2 + 168);
  if ( *v8 != (__int64 *)(a1 + 152) )
LABEL_10:
    __fastfail(3u);
  *v9 = a1 + 152;
  *(_QWORD *)(a2 + 176) = v8;
  *v8 = v9;
  *(_QWORD *)(a1 + 160) = v9;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)MouseClassCancel);
  if ( !*(_BYTE *)(a2 + 68) )
  {
LABEL_9:
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    goto LABEL_13;
  }
  if ( !_InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v9, 3, 45);
    goto LABEL_9;
  }
  v10 = (__int64 *)*v9;
  if ( *(__int64 **)(*v9 + 8) != v9 )
    goto LABEL_10;
  v11 = *(__int64 ***)(a2 + 176);
  if ( *v11 != v9 )
    goto LABEL_10;
  *v11 = v10;
  CopyData = -1073741536;
  v10[1] = (__int64)v11;
  *(_DWORD *)(a2 + 48) = -1073741536;
  LOBYTE(v9) = 3;
  WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v9, 3, 44);
LABEL_12:
  v6 = 1;
LABEL_13:
  KeReleaseSpinLock(v2, v7);
  if ( v6 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), (PVOID)a2, 0x20u);
    IofCompleteRequest((PIRP)a2, 0);
  }
  return CopyData;
}
