/*
 * XREFs of AdtpNormalizeAuditInfoHelper @ 0x14018CD20
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140325BC0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14074E754 (AdtpWriteToEtw.c)
 * Callees:
 *     <none>
 */

void __fastcall AdtpNormalizeAuditInfoHelper(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  _QWORD *v4; // r8
  __int64 i; // rbx
  int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rax
  unsigned int v9; // r10d
  _QWORD *v10; // rcx
  unsigned int v11; // r10d
  _QWORD *v12; // rcx

  if ( a1 )
  {
    if ( a2 || (*(_DWORD *)(a1 + 20) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = (_QWORD *)(a1 + 48);
    a2 = a1;
  }
  else
  {
    if ( !a2 || (*(_DWORD *)(a2 + 24) & 1) == 0 )
      return;
    v3 = *(_DWORD *)(a2 + 12);
    v4 = (_QWORD *)(a2 + 56);
  }
  if ( v3 )
  {
    for ( i = v3; i; --i )
    {
      v6 = *((_DWORD *)v4 - 6);
      if ( v6 > 16 )
      {
        if ( v6 != 17 )
        {
          if ( v6 <= 22 || v6 > 25 && (v6 <= 27 || v6 != 34 && v6 > 32) )
            goto LABEL_21;
LABEL_19:
          v7 = a2 + *v4;
          *v4 = v7;
          if ( ((v6 - 1) & 0xFFFFFFDE) == 0 )
            *(_QWORD *)(v7 + 8) += a2;
          goto LABEL_21;
        }
        *v4 += a1;
        v8 = *v4;
        if ( *(_DWORD *)*v4 )
        {
          *(_QWORD *)(v8 + 8) += a1;
          v11 = 0;
          v12 = (_QWORD *)(*(_QWORD *)(v8 + 8) + 8LL);
          do
          {
            *v12 += a1;
            ++v11;
            v12 += 2;
          }
          while ( v11 < *(_DWORD *)v8 );
          goto LABEL_21;
        }
      }
      else
      {
        if ( v6 != 16 )
        {
          if ( v6 <= 0 || v6 > 2 && v6 != 4 && (v6 <= 7 || v6 > 9 && v6 != 13) )
            goto LABEL_21;
          goto LABEL_19;
        }
        *v4 += a2;
        v8 = *v4;
        if ( *(_DWORD *)*v4 )
        {
          *(_QWORD *)(v8 + 8) += a2;
          v9 = 0;
          v10 = (_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL);
          do
          {
            *v10 += a2;
            ++v9;
            v10 += 3;
          }
          while ( v9 < *(_DWORD *)v8 );
          goto LABEL_21;
        }
      }
      *(_QWORD *)(v8 + 8) = 0LL;
LABEL_21:
      v4 += 4;
    }
  }
}
