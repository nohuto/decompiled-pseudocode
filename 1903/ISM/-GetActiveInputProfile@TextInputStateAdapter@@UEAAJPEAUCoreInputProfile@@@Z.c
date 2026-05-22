/*
 * XREFs of ?GetActiveInputProfile@TextInputStateAdapter@@UEAAJPEAUCoreInputProfile@@@Z @ 0x180148050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TextInputStateAdapter::GetActiveInputProfile(
        TextInputStateAdapter *this,
        struct CoreInputProfile *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct CoreInputProfile *))(**((_QWORD **)this + 4) + 208LL))(
           *((_QWORD *)this + 4),
           a2);
}
