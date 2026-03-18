/*
 * XREFs of _SetClipboardData @ 0x1C0059E20
 * Callers:
 *     NtUserSetClipboardData @ 0x1C0059EC0 (NtUserSetClipboardData.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     InternalSetClipboardData @ 0x1C0057E58 (InternalSetClipboardData.c)
 *     CheckClipboardAccess @ 0x1C00591AC (CheckClipboardAccess.c)
 */

__int64 __fastcall SetClipboardData(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi

  v9 = CheckClipboardAccess();
  if ( !v9 )
    return 0LL;
  if ( (unsigned __int64)(a2 - 1) <= 3 )
  {
    UserSetLastError(87LL, v8, v10, v11);
    return 0LL;
  }
  v12 = InternalSetClipboardData(v9, a1, a2, a3, a4);
  if ( v12 )
  {
    if ( a1 == 2 )
    {
      GreSetBitmapOwner(a2, 0LL);
    }
    else if ( a1 == 9 )
    {
      GreSetPaletteOwner(a2, 0LL);
    }
  }
  return v12;
}
