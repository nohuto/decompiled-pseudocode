/*
 * XREFs of _EnumClipboardFormats @ 0x1C01562B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00D9E78 (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rcx
  __int64 ClipFormat; // rax

  v2 = a1;
  v3 = 0;
  v5 = CheckClipboardAccess(a1, a2);
  if ( v5 )
  {
    if ( *(_QWORD *)(v5 + 48) == gptiCurrent )
    {
      v8 = *(unsigned int **)(v5 + 96);
      if ( v8 )
      {
        if ( !v2 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v5, v2, 1);
        if ( ClipFormat )
        {
          v8 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v8 )
          {
            if ( (unsigned __int64)v8 < *(_QWORD *)(v5 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v5 + 104) )
              return *v8;
          }
        }
      }
      return v3;
    }
    UserSetLastError(1418LL, v4, v6, v7);
  }
  return 0LL;
}
