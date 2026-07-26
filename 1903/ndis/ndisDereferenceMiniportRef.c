/*
 * XREFs of ndisDereferenceMiniportRef @ 0x1C0094CC4
 * Callers:
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0083210 (NdisCmCloseAddressFamilyComplete.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C00994C0 (ndisIMDeleteIfStackEntry.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

bool __fastcall ndisDereferenceMiniportRef(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  KIRQL v5; // al
  ULONG_PTR v6; // rcx
  KIRQL v7; // bp
  bool v8; // zf
  bool v9; // si
  int v10; // edx

  v2 = a1 + 4432;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4432));
  v6 = *(_QWORD *)(a1 + 4888);
  v7 = v5;
  if ( v6 )
    NdisDereferenceWithTag(v6, a2);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  v9 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = *(_DWORD *)(a1 + 4440);
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      20,
      14,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      a1,
      *(_DWORD *)(a1 + 4440));
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
  return v9;
}
