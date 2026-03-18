/*
 * XREFs of OpRegion @ 0x1C0029440
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     MapUnmapPhysMem @ 0x1C0029590 (MapUnmapPhysMem.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall OpRegion(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int NameSpaceObject; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rbx
  char v11; // al

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      (_QWORD *)(a2 + 64),
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*(_QWORD *)v2 + 66LL) = 10;
    *(_DWORD *)(*(_QWORD *)v2 + 88LL) = 48;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1196576584, *(_DWORD *)(*(_QWORD *)v2 + 88LL));
    *(_QWORD *)(*(_QWORD *)v2 + 96LL) = v6;
    if ( v6 )
    {
      memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
      v10 = *(unsigned int **)(*(_QWORD *)v2 + 96LL);
      *((_BYTE *)v10 + 12) = *(_BYTE *)(*(_QWORD *)(a2 + 80) + 56LL);
      *(_QWORD *)v10 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 96LL);
      v10[2] = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 136LL);
      KeInitializeSpinLock((PKSPIN_LOCK)v10 + 3);
      *((_QWORD *)v10 + 5) = v10 + 8;
      *((_QWORD *)v10 + 4) = v10 + 8;
      v11 = *((_BYTE *)v10 + 12);
      if ( v11 )
      {
        if ( v11 == 1 )
          *(_QWORD *)v10 = *v10;
      }
      else
      {
        NameSpaceObject = MapUnmapPhysMem(a1, *(_QWORD *)v10, v10[2], v10);
        if ( !NameSpaceObject )
          *((_BYTE *)v10 + 13) |= 1u;
      }
      if ( ghCreate )
        ghCreate(10LL, *(_QWORD *)v2 + 120LL);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL, v7, v8, v9);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(116, 0, 0, 0, 0LL);
    }
  }
  return NameSpaceObject;
}
