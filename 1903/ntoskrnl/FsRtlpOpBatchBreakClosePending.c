/*
 * XREFs of FsRtlpOpBatchBreakClosePending @ 0x14084EDEC
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400888B0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140088A40 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpClearOwner @ 0x1400B73BC (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x1400B7540 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 */

__int64 __fastcall FsRtlpOpBatchBreakClosePending(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned int v11; // eax

  v6 = 0;
  if ( a1 )
  {
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 48) && (v8 = *(_DWORD *)(a1 + 144), (v8 & 0x700) != 0) )
    {
      if ( (v8 & 0x82) != 0 )
      {
        FsRtlpModifyThreadPriorities(a1, 0LL, 0);
        FsRtlpClearOwner(a1, 0LL);
        *(_BYTE *)(a1 + 32) = 0;
        v9 = *(_DWORD *)(a1 + 144);
        if ( (v9 & 2) != 0 )
        {
          ObfDereferenceObject(*(PVOID *)(a1 + 8));
          v9 = *(_DWORD *)(a1 + 144);
        }
        *(_DWORD *)(a1 + 144) = v9 & 0x20 | 1;
        *(_QWORD *)(a1 + 8) = 0LL;
        while ( 1 )
        {
          v10 = *(_QWORD **)(a1 + 88);
          if ( v10 == (_QWORD *)(a1 + 88) )
            break;
          FsRtlpRemoveAndCompleteWaitingIrp(v10);
        }
      }
      else
      {
        v11 = v8 & 0xFE0FF0FF;
        *(_DWORD *)(a1 + 144) = v11;
        *(_DWORD *)(a1 + 144) = v11 | 0x800;
      }
    }
    else
    {
      v6 = -1073741597;
    }
    a3->IoStatus.Status = v6;
    IofCompleteRequest(a3, 1);
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    return v6;
  }
  else
  {
    a3->IoStatus.Status = -1073741597;
    IofCompleteRequest(a3, 1);
    return 3221225699LL;
  }
}
