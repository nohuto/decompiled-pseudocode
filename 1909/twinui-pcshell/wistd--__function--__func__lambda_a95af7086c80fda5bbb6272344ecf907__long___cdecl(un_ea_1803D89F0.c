/*
 * XREFs of wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl(unsigned_long)_::_scalar_deleting_destructor_ @ 0x1803D89F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ @ 0x180086D24 (--1-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_a95af7086c80fda5bbb6272344ecf907__long___cdecl_unsigned_long__::_scalar_deleting_destructor_(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  v4 = Block[1];
  if ( v4 )
  {
    Block[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
