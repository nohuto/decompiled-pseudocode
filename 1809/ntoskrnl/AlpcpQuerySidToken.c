/*
 * XREFs of AlpcpQuerySidToken @ 0x1406B6A1C
 * Callers:
 *     AlpcpQuerySidMessage @ 0x1406B69A8 (AlpcpQuerySidMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 */

__int64 __fastcall AlpcpQuerySidToken(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // edi
  size_t v8; // rax
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  SeQueryUserSidToken(a1, Src, 0x44u, (ULONG *)Size);
  v7 = 0;
  v8 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) > a3 )
    v7 = -1073741789;
  if ( a4 )
    *a4 = Size[0];
  if ( v7 >= 0 )
    memmove(a2, Src, v8);
  return (unsigned int)v7;
}
