/*
 * XREFs of ??_G?$RuntimeClass@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventArgs@234@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18022D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VTreeNodeEventArgsBase@ComposableShell@Internal@Windows@@UINodeChangedEventArgs@567@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18022C4B8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VTreeNodeEventArgsBase@C.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::`scalar deleting destructor'(
        void *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::TreeNodeEventArgsBase,Windows::Internal::ComposableShell::INodeChangedEventArgs>(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
