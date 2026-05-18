/*
 * XREFs of sub_18011BA5C @ 0x18011BA5C
 * Callers:
 *     sub_18011859C @ 0x18011859C (sub_18011859C.c)
 *     sub_180118AF0 @ 0x180118AF0 (sub_180118AF0.c)
 *     sub_180118C70 @ 0x180118C70 (sub_180118C70.c)
 *     sub_180118E00 @ 0x180118E00 (sub_180118E00.c)
 *     sub_180119020 @ 0x180119020 (sub_180119020.c)
 *     sub_180119310 @ 0x180119310 (sub_180119310.c)
 *     sub_180119500 @ 0x180119500 (sub_180119500.c)
 *     sub_1801198C0 @ 0x1801198C0 (sub_1801198C0.c)
 *     sub_180119CB0 @ 0x180119CB0 (sub_180119CB0.c)
 *     sub_180119EA0 @ 0x180119EA0 (sub_180119EA0.c)
 *     sub_18011A250 @ 0x18011A250 (sub_18011A250.c)
 *     sub_18011A580 @ 0x18011A580 (sub_18011A580.c)
 *     sub_18011A730 @ 0x18011A730 (sub_18011A730.c)
 *     sub_18011AA80 @ 0x18011AA80 (sub_18011AA80.c)
 *     sub_18011AC80 @ 0x18011AC80 (sub_18011AC80.c)
 *     sub_18011B180 @ 0x18011B180 (sub_18011B180.c)
 *     sub_18011B330 @ 0x18011B330 (sub_18011B330.c)
 *     sub_18011B5A0 @ 0x18011B5A0 (sub_18011B5A0.c)
 *     sub_18011B980 @ 0x18011B980 (sub_18011B980.c)
 *     sub_18011BB10 @ 0x18011BB10 (sub_18011BB10.c)
 *     sub_18011BCD0 @ 0x18011BCD0 (sub_18011BCD0.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x180125A19 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     sprintf_s @ 0x180126ABC (sprintf_s.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

bool __fastcall sub_18011BA5C(_QWORD *Src, __int64 a2, _BYTE *a3)
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
