/*
 * XREFs of ?RefreshShapeVisibilityData@SystemCursor@@QEAAXXZ @ 0x180097184
 * Callers:
 *     ?CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z @ 0x1800956F4 (-CreateCursorForDevice@SystemCursorService@@QEAAJ_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVisible@SystemCursorShape@@QEAAJ_N@Z @ 0x180097234 (-SetVisible@SystemCursorShape@@QEAAJ_N@Z.c)
 */

void __fastcall SystemCursor::RefreshShapeVisibilityData(SystemCursor *this)
{
  __int64 *v1; // rdi
  __int64 *j; // rbx
  int v4; // eax
  __int64 **v5; // rax
  __int64 *v6; // rcx
  __int64 *i; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)*((_QWORD *)this + 4);
  j = (__int64 *)*v1;
  while ( j != v1 )
  {
    v4 = SystemCursorShape::SetVisible((SystemCursorShape *)j[5], j[4] == *((_QWORD *)this + 6));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x203,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)v4);
    if ( !*((_BYTE *)j + 25) )
    {
      v5 = (__int64 **)j[2];
      if ( *((_BYTE *)v5 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v6 = *v5;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
          j = v6;
      }
    }
  }
}
