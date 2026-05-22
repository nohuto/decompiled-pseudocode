/*
 * XREFs of ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x1800966F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x18009702C (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

__int64 __fastcall SystemCursorService::OnCursorGlyphChanged(
        SystemCursorService *a1,
        unsigned int *a2,
        unsigned __int64 a3)
{
  __int64 v5; // rdx
  SystemCursor **v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  if ( !SystemCursorService::CursorExists(a1, *a2) )
    return 0LL;
  v11 = v5;
  v6 = (SystemCursor **)std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::operator[](
                          (_QWORD *)a1 + 6,
                          &v11);
  v7 = SystemCursor::SetShape(*v6, a3);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x118,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
