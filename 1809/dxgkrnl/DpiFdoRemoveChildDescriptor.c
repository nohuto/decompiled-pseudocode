/*
 * XREFs of DpiFdoRemoveChildDescriptor @ 0x1C0266AA0
 * Callers:
 *     DpiFdoHandleTargetConnectionState @ 0x1C0265BE4 (DpiFdoHandleTargetConnectionState.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C0266AE8 (DpiFdoRemoveChildDescriptors.c)
 * Callees:
 *     DpiFdoReleaseChildDescriptor @ 0x1C0266A30 (DpiFdoReleaseChildDescriptor.c)
 */

void __fastcall DpiFdoRemoveChildDescriptor(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // rcx
  void **v3; // r8

  if ( *(_DWORD *)a2 == 1 )
    --*(_DWORD *)(a1 + 3408);
  v2 = (_QWORD **)a2[4];
  if ( v2[1] != a2 + 4 || (v3 = (void **)a2[5], *v3 != a2 + 4) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  DpiFdoReleaseChildDescriptor(a2);
}
