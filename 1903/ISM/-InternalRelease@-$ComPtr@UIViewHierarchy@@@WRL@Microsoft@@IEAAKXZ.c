/*
 * XREFs of ?InternalRelease@?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A9C4
 * Callers:
 *     _dynamic_atexit_destructor_for__ISMStatics::s_animationDataProvider__ @ 0x18003E0C0 (_dynamic_atexit_destructor_for__ISMStatics--s_animationDataProvider__.c)
 *     _dynamic_atexit_destructor_for__ISMStatics::s_viewHierarchy__ @ 0x18003E0E0 (_dynamic_atexit_destructor_for__ISMStatics--s_viewHierarchy__.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IViewHierarchy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
