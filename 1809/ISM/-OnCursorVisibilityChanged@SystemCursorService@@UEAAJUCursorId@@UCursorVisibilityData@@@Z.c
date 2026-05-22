/*
 * XREFs of ?OnCursorVisibilityChanged@SystemCursorService@@UEAAJUCursorId@@UCursorVisibilityData@@@Z @ 0x1800965F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursor@@@1@AEB_K@Z @ 0x18009437C (--A-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$equal_to@_K@2@V-$allocat.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x1800944A0 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180097234 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 *     ??A?$map@_KV?$shared_ptr@VSystemCursorShape@@@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursorShape@@@std@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSystemCursorShape@@@1@AEB_K@Z @ 0x180097C58 (--A-$map@_KV-$shared_ptr@VSystemCursorShape@@@std@@U-$less@_K@2@V-$allocator@U-$pair@$$CB_KV-$sh.c)
 */

__int64 __fastcall SystemCursorService::OnCursorVisibilityChanged(SystemCursorService *a1, unsigned int *a2, char a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rcx
  unsigned __int64 v9; // r8
  __int64 *v10; // rax
  __int64 *v11; // rdx
  SystemCursorShape **v12; // rax
  int v13; // eax
  int v14; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !SystemCursorService::CursorExists(a1, *a2) )
    return 0LL;
  v17 = v5;
  v6 = std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::operator[]((_QWORD *)a1 + 6, &v17);
  v7 = *v6;
  if ( *(_BYTE *)(*v6 + 16LL) != a3 )
  {
    v8 = *(__int64 **)(v7 + 32);
    v9 = *(_QWORD *)(v7 + 48);
    v10 = v8;
    v11 = (__int64 *)v8[1];
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( v11[4] >= v9 )
      {
        v10 = v11;
        v11 = (__int64 *)*v11;
      }
      else
      {
        v11 = (__int64 *)v11[2];
      }
    }
    if ( v10 == v8 || v9 < v10[4] )
      v10 = *(__int64 **)(v7 + 32);
    if ( v10 != v8 )
    {
      v12 = (SystemCursorShape **)std::map<unsigned __int64,std::shared_ptr<SystemCursorShape>>::operator[]((int)v7 + 32);
      v13 = SystemCursorShape::SetVisible(*v12, a3);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_16;
      }
    }
    *(_BYTE *)(v7 + 16) = a3;
  }
  v14 = 0;
LABEL_16:
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  return 0LL;
}
