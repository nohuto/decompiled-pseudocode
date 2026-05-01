/*
 * XREFs of wistd::__function::__func__lambda_3803b137a98e853d51e138d29b83a3a8__long___cdecl(unsigned_long)_::_scalar_deleting_destructor_ @ 0x1803C78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ @ 0x180086D24 (--1-$__base@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall wistd::__function::__func__lambda_3803b137a98e853d51e138d29b83a3a8__long___cdecl_unsigned_long__::_scalar_deleting_destructor_(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(Block + 1);
  wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::~__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
