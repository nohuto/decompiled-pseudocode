/*
 * XREFs of ??1?$unique_ptr@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@U?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@QEAA@XZ @ 0x180151AE0
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDriverHandleWrapper::HolographicDriverHandleWrapper_::_1_::dtor$4 @ 0x180150DD0 (_Windows--Internal--Holographic--HolographicDriverHandleWrapper--HolographicDriverH_ea_180150DD0.c)
 * Callees:
 *     ??_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z @ 0x180152B58 (--_GCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::~unique_ptr<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext **a1,
        unsigned int a2)
{
  Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::`scalar deleting destructor'(
             v2,
             a2);
  return result;
}
