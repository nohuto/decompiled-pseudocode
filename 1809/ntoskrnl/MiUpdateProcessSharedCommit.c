/*
 * XREFs of MiUpdateProcessSharedCommit @ 0x14061EF18
 * Callers:
 *     MiChargeSegmentCommit @ 0x14061F0D0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140076770 (MiIncludeSharedCommit.c)
 */

_QWORD *__fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  _QWORD *result; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  _QWORD **v6; // rcx
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rcx
  _QWORD *v9; // rcx

  result = (_QWORD *)MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD **)v3;
    v4 = 0LL;
    for ( i = *(_QWORD **)(*(_QWORD *)v3 + 72LL); i; i = (_QWORD *)*i )
      v4 = i;
    while ( v4 )
    {
      v7 = v4[3];
      if ( (v7 & 1) != 0 )
        v8 = (volatile signed __int64 *)((v7 & 0xFFFFFFFFFFFFFFFEuLL) + 1320);
      else
        v8 = (volatile signed __int64 *)(v7 + 1912);
      _InterlockedExchangeAdd64(v8, v2);
      result = (_QWORD *)v4[1];
      v9 = v4;
      if ( result )
      {
        v6 = (_QWORD **)*result;
        v4 = (_QWORD *)v4[1];
        if ( *result )
        {
          do
          {
            result = *v6;
            v4 = v6;
            v6 = (_QWORD **)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v9 )
            break;
          v9 = v4;
        }
      }
    }
  }
  return result;
}
