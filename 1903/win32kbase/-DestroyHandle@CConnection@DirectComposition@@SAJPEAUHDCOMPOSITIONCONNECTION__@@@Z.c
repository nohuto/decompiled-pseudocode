/*
 * XREFs of ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0006C90
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C00067B0 (NtDCompositionCreateConnection.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C0056D8C (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionDestroyConnection @ 0x1C01A2400 (NtDCompositionDestroyConnection.c)
 * Callees:
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C00083B4 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000F54C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000F9D0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::DestroyHandle(struct HDCOMPOSITIONCONNECTION__ *a1)
{
  DirectComposition::CConnection *v2; // rsi
  struct DirectComposition::CProcessData *v3; // rax
  struct DirectComposition::CProcessData *v4; // rdi
  struct _ERESOURCE *v5; // rbx
  DirectComposition::CConnection *v6; // rax
  unsigned int v7; // ebx

  v2 = 0LL;
  v3 = DirectComposition::CProcessData::Current();
  v4 = v3;
  if ( v3 )
  {
    v5 = (struct _ERESOURCE *)*((_QWORD *)v3 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = (DirectComposition::CConnection *)*((_QWORD *)v4 + 3);
    if ( v6 && a1 == *((struct HDCOMPOSITIONCONNECTION__ **)v4 + 2) )
    {
      *((_QWORD *)v4 + 3) = 0LL;
      v2 = v6;
      v7 = 0;
    }
    else
    {
      v7 = -1073741790;
    }
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v2 )
  {
    DirectComposition::CConnection::Disconnect(v2);
    DirectComposition::CConnection::Release(v2);
  }
  return v7;
}
