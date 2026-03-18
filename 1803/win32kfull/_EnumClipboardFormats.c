/*
 * XREFs of _EnumClipboardFormats @ 0x1C0135410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00B6948 (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int *v6; // rcx
  __int64 ClipFormat; // rax

  v2 = a1;
  v3 = 0;
  v5 = CheckClipboardAccess(a1, a2);
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 48) == gptiCurrent )
    {
      v6 = *(unsigned int **)(v5 + 96);
      if ( v6 )
      {
        if ( !v2 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v5, v2, 1);
        if ( ClipFormat )
        {
          v6 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v6 )
          {
            if ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v5 + 104) )
              return *v6;
          }
        }
      }
      return v3;
    }
    UserSetLastError(1418LL, v4);
  }
  return 0LL;
}
