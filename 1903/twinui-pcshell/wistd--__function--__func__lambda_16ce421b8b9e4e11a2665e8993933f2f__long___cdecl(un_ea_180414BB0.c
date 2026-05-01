/*
 * XREFs of wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::_scalar_deleting_destructor_ @ 0x180414BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ @ 0x180083F04 (--1-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::_scalar_deleting_destructor_(
        _QWORD *Block,
        char a2)
{
  wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
