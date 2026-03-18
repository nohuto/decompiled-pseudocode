/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C01435F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0014CB8 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C0046680 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C0144B74 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(__int64 a1)
{
  int v1; // r14d
  unsigned int v2; // edi
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v4; // rbp
  struct _ERESOURCE *v5; // rbx
  int v6; // eax
  bool v7; // cl
  int v8; // eax
  unsigned int v9; // edx

  v1 = a1;
  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(a1);
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CProcessData::Current();
    v5 = (struct _ERESOURCE *)*((_QWORD *)v4 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *((_DWORD *)v4 + 10);
    if ( v1 )
    {
      if ( v6 != -1 )
      {
        v7 = v6 == 0;
        v8 = v6 + 1;
        goto LABEL_8;
      }
    }
    else if ( v6 )
    {
      v8 = v6 - 1;
      v7 = v8 == 0;
LABEL_8:
      *((_DWORD *)v4 + 10) = v8;
      if ( v7 )
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, v1);
      goto LABEL_11;
    }
    v2 = -1073741823;
LABEL_11:
    ExReleaseResourceLite(*((PERESOURCE *)v4 + 1));
    KeLeaveCriticalRegion();
    DirectComposition::CConnection::Release(DefaultConnection, v9);
    return v2;
  }
  return (unsigned int)-1073741790;
}
