/*
 * XREFs of SetWindowSubtreeCoreWindowStatus @ 0x1C008F7AC
 * Callers:
 *     NtUserSetCoreWindow @ 0x1C0042650 (NtUserSetCoreWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 */

char __fastcall SetWindowSubtreeCoreWindowStatus(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // ebp

  LODWORD(v4) = a2 != 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x2000000u) >> 25 != (_DWORD)v4
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x1000000) == 0 || a2) )
  {
    LOBYTE(v4) = SetOrClrWF(a2, a1, 0xDB02u, 1);
    v5 = *(_QWORD **)(a1 + 112);
LABEL_6:
    while ( v5 && v5 != (_QWORD *)a1 )
    {
      if ( (*(_DWORD *)(v5[5] + 232LL) & 0x1000000) == 0 || a2 )
      {
        v6 = 0;
        SetOrClrWF(a2, (__int64)v5, 0xDB02u, 1);
      }
      else
      {
        v6 = 1;
      }
      v4 = (_QWORD *)v5[14];
      if ( !v4 || v6 )
      {
        v4 = (_QWORD *)v5[11];
        if ( !v4 )
        {
          while ( 1 )
          {
            v5 = (_QWORD *)v5[13];
            if ( !v5 )
              return (char)v4;
            v4 = (_QWORD *)v5[11];
            if ( v4 )
              break;
            if ( v5 == (_QWORD *)a1 )
              goto LABEL_6;
          }
        }
      }
      v5 = v4;
    }
  }
  return (char)v4;
}
