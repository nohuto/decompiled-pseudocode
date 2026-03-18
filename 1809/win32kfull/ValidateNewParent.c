/*
 * XREFs of ValidateNewParent @ 0x1C00410B4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     IsParentBandValid @ 0x1C0041150 (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C00411D0 (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C0041260 (ValidateParentDepth.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *i; // rax
  __int64 v7; // rcx

  if ( *(char *)(a1[5] + 19LL) >= 0 && *(char *)(a2[5] + 19LL) >= 0 && (unsigned int)ValidateParentDepth(a1, a2) )
  {
    if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v7 = 5LL;
      goto LABEL_17;
    }
    if ( a2[3] == a1[3] && (unsigned int)IsParentBandValid(a1, a2) )
    {
      v4 = a2;
      while ( a1 != v4 )
      {
        v4 = (_QWORD *)v4[10];
        if ( !v4 )
        {
          for ( i = (_QWORD *)a2[12]; i; i = (_QWORD *)i[12] )
          {
            if ( a1 == i )
              goto LABEL_15;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_15:
  v7 = 87LL;
LABEL_17:
  UserSetLastError(v7);
  return 0LL;
}
