/*
 * XREFs of ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180085A94
 * Callers:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800857D8 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800EC59A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

_QWORD *__fastcall wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        _QWORD *a1,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rbx
  HANDLE ProcessHeap; // rax
  _WORD *v10; // rax
  _WORD *v11; // rdi
  size_t v12; // rbx
  _QWORD *result; // rax

  v3 = a3;
  v6 = a3;
  if ( a2 )
  {
    v7 = a3;
    v8 = a2;
    if ( a3 >= 0x7FFFFFFF )
      v7 = 0x7FFFFFFFLL;
    for ( ; v7; --v7 )
    {
      if ( !*(_WORD *)v8 )
        break;
      v8 += 2;
    }
    v6 = (v8 - a2) >> 1;
  }
  if ( a3 == -1LL )
    v3 = v6;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 8u, 2 * v3 + 2);
  v11 = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      v12 = 2 * v6;
      if ( v12 )
      {
        if ( 2 * v3 + 2 < v12 )
        {
          memset_0(v10, 0, 2 * v3 + 2);
          *(_DWORD *)_o__errno() = 34;
          invalid_parameter_noinfo();
        }
        else
        {
          memcpy_0(v10, a2, v12);
        }
      }
      v11[v12 / 2] = 0;
    }
    else
    {
      *v10 = 0;
    }
    v11[v3] = 0;
  }
  result = a1;
  *a1 = v11;
  return result;
}
