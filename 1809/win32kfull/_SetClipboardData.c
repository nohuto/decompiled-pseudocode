/*
 * XREFs of _SetClipboardData @ 0x1C00DB1B4
 * Callers:
 *     NtUserSetClipboardData @ 0x1C00DB250 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     InternalSetClipboardData @ 0x1C00DAD30 (InternalSetClipboardData.c)
 */

__int64 __fastcall SetClipboardData(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi

  v7 = a1;
  v9 = CheckClipboardAccess(a1, a2);
  if ( !v9 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL, v8, v10, v11);
    return 0LL;
  }
  v12 = InternalSetClipboardData(v9, v7, a2, a3, a4);
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
