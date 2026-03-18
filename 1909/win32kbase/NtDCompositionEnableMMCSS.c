/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x1C01A0680
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C000C60C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C000C6F8 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C000CA90 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C01A12C8 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  unsigned int v2; // edi
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v4; // rbp
  struct _ERESOURCE *v5; // rbx
  int v6; // eax
  bool v7; // cl
  int v8; // eax
  unsigned int v9; // edx

  v2 = 0;
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( DefaultConnection )
  {
    v4 = DirectComposition::CProcessData::Current();
    v5 = (struct _ERESOURCE *)*((_QWORD *)v4 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v5, 1u);
    v6 = *((_DWORD *)v4 + 10);
    if ( a1 )
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
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
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
