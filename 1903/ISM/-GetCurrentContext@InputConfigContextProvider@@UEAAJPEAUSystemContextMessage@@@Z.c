/*
 * XREFs of ?GetCurrentContext@InputConfigContextProvider@@UEAAJPEAUSystemContextMessage@@@Z @ 0x180010F40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall InputConfigContextProvider::GetCurrentContext(
        InputConfigContextProvider *this,
        struct SystemContextMessage *a2)
{
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( *((_QWORD *)this + 31) == *((_QWORD *)this + 32) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
        (const char *)0x80070490LL,
        v3);
      return 2147943568LL;
    }
    else
    {
      *(_DWORD *)a2 = 1;
      *((_DWORD *)a2 + 2) = (*((_QWORD *)this + 32) - *((_QWORD *)this + 31)) / 24LL;
      *((_QWORD *)a2 + 2) = *((_QWORD *)this + 31);
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\systemcontextprovider\\lib\\inputconfigcontextprovider.cpp",
      (const char *)0x80070057LL,
      v3);
    return 2147942487LL;
  }
}
