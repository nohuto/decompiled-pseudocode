/*
 * XREFs of ValidateNewParent @ 0x1C00BFBB4
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsParentBandValid @ 0x1C00BFC54 (IsParentBandValid.c)
 *     ProtectedContentAccessCheck @ 0x1C00BFCD8 (ProtectedContentAccessCheck.c)
 *     ValidateParentDepth @ 0x1C00BFD68 (ValidateParentDepth.c)
 */

__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *i; // rax
  __int64 v9; // rcx

  if ( *(char *)(a1[5] + 19LL) >= 0 && *(char *)(a2[5] + 19LL) >= 0 && (unsigned int)ValidateParentDepth() )
  {
    if ( !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v9 = 5LL;
      goto LABEL_16;
    }
    if ( a2[3] == a1[3] && (unsigned int)IsParentBandValid(a1, a2) )
    {
      v6 = a2;
      while ( a1 != v6 )
      {
        v6 = (_QWORD *)v6[13];
        if ( !v6 )
        {
          for ( i = (_QWORD *)a2[15]; i; i = (_QWORD *)i[15] )
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
  v9 = 87LL;
LABEL_16:
  UserSetLastError(v9, (__int64)a2, a3, a4);
  return 0LL;
}
