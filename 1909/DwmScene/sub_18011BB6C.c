/*
 * XREFs of sub_18011BB6C @ 0x18011BB6C
 * Callers:
 *     sub_1801186AC @ 0x1801186AC (sub_1801186AC.c)
 *     sub_180118C00 @ 0x180118C00 (sub_180118C00.c)
 *     sub_180118D80 @ 0x180118D80 (sub_180118D80.c)
 *     sub_180118F10 @ 0x180118F10 (sub_180118F10.c)
 *     sub_180119130 @ 0x180119130 (sub_180119130.c)
 *     sub_180119420 @ 0x180119420 (sub_180119420.c)
 *     sub_180119610 @ 0x180119610 (sub_180119610.c)
 *     sub_1801199D0 @ 0x1801199D0 (sub_1801199D0.c)
 *     sub_180119DC0 @ 0x180119DC0 (sub_180119DC0.c)
 *     sub_180119FB0 @ 0x180119FB0 (sub_180119FB0.c)
 *     sub_18011A360 @ 0x18011A360 (sub_18011A360.c)
 *     sub_18011A690 @ 0x18011A690 (sub_18011A690.c)
 *     sub_18011A840 @ 0x18011A840 (sub_18011A840.c)
 *     sub_18011AB90 @ 0x18011AB90 (sub_18011AB90.c)
 *     sub_18011AD90 @ 0x18011AD90 (sub_18011AD90.c)
 *     sub_18011B290 @ 0x18011B290 (sub_18011B290.c)
 *     sub_18011B440 @ 0x18011B440 (sub_18011B440.c)
 *     sub_18011B6B0 @ 0x18011B6B0 (sub_18011B6B0.c)
 *     sub_18011BA90 @ 0x18011BA90 (sub_18011BA90.c)
 *     sub_18011BC20 @ 0x18011BC20 (sub_18011BC20.c)
 *     sub_18011BDE0 @ 0x18011BDE0 (sub_18011BDE0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x180125B29 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     sprintf_s @ 0x180126BCC (sprintf_s.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

bool __fastcall sub_18011BB6C(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  int v4; // esi
  size_t v6; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  v4 = a2;
  if ( !a3 )
    return 0;
  *a3 = 0;
  v6 = Src[19];
  if ( WORD2(a2) )
  {
    if ( v6 < WORD2(a2) )
    {
      memset(a3, 0, v6);
      *(_DWORD *)o__errno(v9, v8, v10) = 34;
      o__invalid_parameter_noinfo(v12, v11, v13);
      return 0;
    }
    memcpy(a3, Src, WORD2(a2));
    v6 = Src[19];
  }
  return sprintf_s(&a3[Src[17]], v6 - Src[17], "%u", v4) != -1;
}
