/*
 * XREFs of ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0063920
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C0063610 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C00637E0 (NtDCompositionDiscardFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        struct DirectComposition::CConnection **a2)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  struct _ERESOURCE *v7; // rbx
  volatile signed __int32 *v8; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = 0;
  if ( CurrentProcessWin32Process && (v6 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v7 = *(struct _ERESOURCE **)(v6 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v7, 1u);
    v8 = *(volatile signed __int32 **)(v6 + 24);
    if ( v8 && a1 == *(struct HDCOMPOSITIONCONNECTION__ **)(v6 + 16) )
    {
      _InterlockedIncrement(v8);
      *a2 = *(struct DirectComposition::CConnection **)(v6 + 24);
    }
    else
    {
      v5 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
