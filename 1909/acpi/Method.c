/*
 * XREFs of Method @ 0x1C0014A40
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     AddObjSymbol @ 0x1C0014B70 (AddObjSymbol.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall Method(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned int NameSpaceObject; // esi
  __int64 v6; // rax
  __int64 v7; // rdi

  v2 = a2 + 64;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(_QWORD *)(a1 + 88),
                      a2 + 64,
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
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(104, 0, 0, 0, 0LL);
      return NameSpaceObject;
    }
    v7 = *(_QWORD *)(*(_QWORD *)v2 + 96LL);
    AddObjSymbol(v7 + 194);
    memset(*(void **)(*(_QWORD *)v2 + 96LL), 0, *(unsigned int *)(*(_QWORD *)v2 + 88LL));
    *(_BYTE *)(v7 + 193) = *(_BYTE *)(*(_QWORD *)(a1 + 120) - 1LL);
    memmove((void *)(v7 + 194), *(const void **)(a1 + 120), *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
    KeInitializeSpinLock((PKSPIN_LOCK)(v7 + 184));
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
  }
  if ( NameSpaceObject == -1073741771 && g_SimulatorCallbackObject )
  {
    NameSpaceObject = 0;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
  }
  return NameSpaceObject;
}
