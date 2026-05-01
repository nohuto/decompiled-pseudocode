/*
 * XREFs of ?close_reset@?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAUHSTRING__@@@Z @ 0x18019CEB8
 * Callers:
 *     _lambda_e292dbe355bbba6f2cf9952d0b17febd_::operator() @ 0x1803B2BCC (_lambda_e292dbe355bbba6f2cf9952d0b17febd_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,0,std::nullptr_t>::close_reset(
        HSTRING string)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  WindowsDeleteString(string);
  SetLastError(LastError);
}
