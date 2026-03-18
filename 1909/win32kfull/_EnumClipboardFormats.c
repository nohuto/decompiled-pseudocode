/*
 * XREFs of _EnumClipboardFormats @ 0x1C015DF00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(unsigned int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int *v7; // rcx
  __int64 ClipFormat; // rax

  v2 = 0;
  v4 = CheckClipboardAccess();
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 48) == gptiCurrent )
    {
      v7 = *(unsigned int **)(v4 + 96);
      if ( v7 )
      {
        if ( !a1 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v4, a1, 1);
        if ( ClipFormat )
        {
          v7 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v7 )
          {
            if ( (unsigned __int64)v7 < *(_QWORD *)(v4 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v4 + 104) )
              return *v7;
          }
        }
      }
      return v2;
    }
    UserSetLastError(1418LL, v3, v5, v6);
  }
  return 0LL;
}
