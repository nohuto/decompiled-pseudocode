/*
 * XREFs of sub_180037608 @ 0x180037608
 * Callers:
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     TpSimpleTryPost @ 0x180037260 (TpSimpleTryPost.c)
 *     TpAllocWork @ 0x180062C70 (TpAllocWork.c)
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 */

__int64 __fastcall sub_180037608(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  __int64 v8; // rcx

  v7 = sub_180037DCC(a1, a2, a3, a4, a5);
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 144);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 200) = a6;
      *(_DWORD *)(a1 + 208) = 0;
      sub_180031620(v8, (_DWORD *)(a1 + 208), (BYTE *)(a1 + 212));
      *(_DWORD *)(a1 + 232) = 1;
      v7 = 0;
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 < 0 )
      sub_18003741C((_QWORD *)a1);
  }
  return (unsigned int)v7;
}
