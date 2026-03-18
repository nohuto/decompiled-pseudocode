/*
 * XREFs of WheapCreateLiveTriageDump @ 0x1408DC59C
 * Callers:
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14057F05C (WheapCreateTriageDumpFromPreviousSession.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1401C54D0 (RtlCaptureContext.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1402825A0 (KeCapturePersistentThreadState.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WheapInsertTriageDataBlock @ 0x1408DC6A4 (WheapInsertTriageDataBlock.c)
 */

__int64 __fastcall WheapCreateLiveTriageDump(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  PVOID PoolWithTag; // rbx
  int inserted; // edi
  ULONG v6; // esi
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v2 = a1 + 40;
  v3 = *(int *)(*(_QWORD *)(a1 + 32) + 40LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x61656857u);
  if ( PoolWithTag )
  {
    ContextRecord.ContextFlags = 1048587;
    RtlCaptureContext(&ContextRecord);
    v6 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, v3, v2, 0LL, 0LL, (size_t)PoolWithTag);
    inserted = WheapInsertTriageDataBlock(PoolWithTag, v2, *(unsigned int *)(v2 + 20));
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
    else
    {
      WheapTriageDump = PoolWithTag;
      WheapTriageDumpLength = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)inserted;
}
