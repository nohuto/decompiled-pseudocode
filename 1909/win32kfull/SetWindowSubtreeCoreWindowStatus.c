/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C0018DDC
 * Callers:
 *     NtUserSetCoreWindow @ 0x1C00167F0 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall SetWindowSubtreeCoreWindowStatus(_QWORD *a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  int v6; // ebp

  result = a2 != 0;
  if ( (*(_DWORD *)(a1[5] + 232LL) & 0x2000000u) >> 25 != (_DWORD)result
    && ((*(_DWORD *)(a1[5] + 232LL) & 0x1000000) == 0 || a2) )
  {
    result = SetOrClrWF(a2, a1, 56066LL, 1LL);
    v5 = (_QWORD *)a1[14];
LABEL_6:
    while ( v5 && v5 != a1 )
    {
      if ( (*(_DWORD *)(v5[5] + 232LL) & 0x1000000) == 0 || a2 )
      {
        v6 = 0;
        SetOrClrWF(a2, v5, 56066LL, 1LL);
      }
      else
      {
        v6 = 1;
      }
      result = v5[14];
      if ( !result || v6 )
      {
        result = v5[11];
        if ( !result )
        {
          while ( 1 )
          {
            v5 = (_QWORD *)v5[13];
            if ( !v5 )
              return result;
            result = v5[11];
            if ( result )
              break;
            if ( v5 == a1 )
              goto LABEL_6;
          }
        }
      }
      v5 = (_QWORD *)result;
    }
  }
  return result;
}
