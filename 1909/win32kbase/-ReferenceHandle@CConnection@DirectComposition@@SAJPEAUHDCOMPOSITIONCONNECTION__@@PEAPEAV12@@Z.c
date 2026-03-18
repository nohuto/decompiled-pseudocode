/*
 * XREFs of ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C000C9DC
 * Callers:
 *     NtDCompositionRetireFrame @ 0x1C000C7E0 (NtDCompositionRetireFrame.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000CA90 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::ReferenceHandle(
        struct HDCOMPOSITIONCONNECTION__ *a1,
        struct DirectComposition::CConnection **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  unsigned int v5; // edi
  struct DirectComposition::CProcessData *v6; // rsi
  struct _ERESOURCE *v7; // rbx
  volatile signed __int32 *v8; // rax

  v4 = DirectComposition::CProcessData::Current();
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    v7 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v7, 1u);
    v8 = (volatile signed __int32 *)*((_QWORD *)v6 + 3);
    if ( v8 && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v6 + 2) )
    {
      _InterlockedIncrement(v8);
      *a2 = (struct DirectComposition::CConnection *)*((_QWORD *)v6 + 3);
    }
    else
    {
      v5 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
