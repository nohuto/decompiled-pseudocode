/*
 * XREFs of _SetClipboardData @ 0x1C00B8930
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00B89D0 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     InternalSetClipboardData @ 0x1C00B6968 (InternalSetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00B7CBC (CheckClipboardAccess.c)
 */

__int64 __fastcall SetClipboardData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v5; // ebp
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi

  v4 = a4;
  v5 = a3;
  v7 = a1;
  v9 = CheckClipboardAccess(a1, a2, a3, a4);
  if ( !v9 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL, v8, v10, v11);
    return 0LL;
  }
  v12 = InternalSetClipboardData(v9, v7, a2, v5, v4);
  if ( v12 )
  {
    if ( v7 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( v7 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v12;
}
