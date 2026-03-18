/*
 * XREFs of Method @ 0x1C00262E0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     AddObjSymbol @ 0x1C0026410 (AddObjSymbol.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi

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
    *(_WORD *)(*(_QWORD *)v2 + 66LL) = 8;
    *(_DWORD *)(*(_QWORD *)v2 + 88LL) = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120) + 194;
    v6 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413827912, *(_DWORD *)(*(_QWORD *)v2 + 88LL));
    *(_QWORD *)(*(_QWORD *)v2 + 96LL) = v6;
    if ( !v6 )
    {
      NameSpaceObject = -1073741670;
      LogError(3221225626LL, v7, v8, v9);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return NameSpaceObject;
    }
    v10 = *(_QWORD *)(*(_QWORD *)v2 + 96LL);
    AddObjSymbol(v10 + 194);
    memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
    *(_BYTE *)(v10 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v10 + 194), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    KeInitializeSpinLock((PKSPIN_LOCK)(v10 + 184));
    *(_QWORD *)(v10 + 24) = v10 + 16;
    *(_QWORD *)(v10 + 16) = v10 + 16;
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
  {
    NameSpaceObject = 0;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  return NameSpaceObject;
}
