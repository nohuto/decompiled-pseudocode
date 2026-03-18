/*
 * XREFs of ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C013080C
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD974 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z @ 0x1C000E360 (-_IsUnextend@CDS_JOURNAL@@CA_NAEBU_ENTRY@1@@Z.c)
 *     ?_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z @ 0x1C01301F4 (-_CommitEntry@CDS_JOURNAL@@CAJAEBU_ENTRY@1@PEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C013074C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::CommitTo(CDS_JOURNAL *this, struct CCD_TOPOLOGY *a2, __int64 a3, unsigned __int16 *a4)
{
  const struct CDS_JOURNAL::_ENTRY **v4; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  const struct CDS_JOURNAL::_ENTRY *v13; // rdi
  unsigned __int16 v14; // si
  const struct CDS_JOURNAL::_ENTRY *v15; // rcx
  const struct CDS_JOURNAL::_ENTRY *i; // rdi
  const struct CDS_JOURNAL::_ENTRY *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // rax
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int16 v26; // di
  const struct CDS_JOURNAL::_ENTRY *v27; // r10
  __int16 v28; // r9
  bool IsUnextend; // al
  int v30; // r9d
  const struct CDS_JOURNAL::_ENTRY **v31; // r10
  unsigned __int16 v32; // di
  _QWORD *v33; // rdx
  __int64 v34; // rax
  unsigned __int16 v35; // ax
  __int64 v36; // rax

  v4 = (const struct CDS_JOURNAL::_ENTRY **)((char *)this + 24);
  if ( *v4 == (const struct CDS_JOURNAL::_ENTRY *)v4 )
    return 0LL;
  LODWORD(v9) = -1073741823;
  if ( *(_DWORD *)this == 1 )
  {
    LODWORD(v9) = CCD_TOPOLOGY::VerifyConnectivityHash(a2, this, a3);
    if ( (_DWORD)v9 == -1073741266 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
      v22[3] = this;
      v22[4] = a2;
      v22[5] = *((_QWORD *)a2 + 8);
      WdLogEvent5_WdWarning(v22);
      return 0LL;
    }
  }
  v13 = *v4;
  v14 = 0;
  if ( *v4 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
  {
    do
    {
      if ( CDS_JOURNAL::_IsUnextend(v13) )
      {
        v23 = CDS_JOURNAL::_CommitEntry(v15, a2);
        v9 = v23;
        if ( v23 < 0 )
        {
LABEL_17:
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
          v24[3] = v9;
          v24[4] = v24;
          v24[5] = a2;
          v24[6] = *((_QWORD *)a2 + 8);
          WdLogEvent5_WdError(v24);
          return (unsigned int)v9;
        }
      }
      v13 = *(const struct CDS_JOURNAL::_ENTRY **)v13;
    }
    while ( v13 != (const struct CDS_JOURNAL::_ENTRY *)v4 );
    for ( i = *v4; i != (const struct CDS_JOURNAL::_ENTRY *)v4; i = *(const struct CDS_JOURNAL::_ENTRY **)i )
    {
      if ( !CDS_JOURNAL::_IsUnextend(i) )
      {
        v18 = CDS_JOURNAL::_CommitEntry(v17, a2);
        v9 = v18;
        if ( v18 == -1073741789 )
        {
          v25 = *((_QWORD *)a2 + 8);
          if ( v25 )
            v26 = *(_WORD *)(v25 + 20);
          else
            v26 = 0;
          v27 = *v4;
          v28 = 0;
          while ( v27 != (const struct CDS_JOURNAL::_ENTRY *)v4 )
          {
            IsUnextend = CDS_JOURNAL::_IsUnextend(v27);
            v27 = *v31;
            v20 = (unsigned int)(v30 + 1);
            if ( IsUnextend )
              LOWORD(v20) = v30;
            v28 = v20;
          }
          v32 = v28 + v26;
          if ( a4 )
            *a4 = v32;
          v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
          v33[3] = a2;
          v33[4] = *((_QWORD *)a2 + 8);
          v34 = *((_QWORD *)a2 + 8);
          if ( v34 )
            v35 = *(_WORD *)(v34 + 20);
          else
            v35 = 0;
          v33[5] = v35;
          v36 = *((_QWORD *)a2 + 8);
          if ( v36 )
            v14 = *(_WORD *)(v36 + 22);
          v33[6] = v14;
          v33[7] = v32;
          WdLogEvent5_WdWarning(v33);
          return 3221225507LL;
        }
        if ( v18 < 0 )
          goto LABEL_17;
      }
    }
  }
  return (unsigned int)v9;
}
