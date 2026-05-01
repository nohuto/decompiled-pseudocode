/*
 * XREFs of ?IsHostProcessOwnerOfComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIIPEAE@Z @ 0x1803A69F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAI@Z @ 0x1803A5AA0 (-GetHostProcessIdForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsHostProcessOwnerOfComponent(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        unsigned __int8 *a4)
{
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0;
  *a4 = 0;
  if ( (int)Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostProcessIdForComponent(
              this,
              a3,
              &v7) >= 0
    && a2 == v7 )
  {
    *a4 = 1;
  }
  return 0LL;
}
