/*
 * XREFs of PiSwUnassociateDeviceObject @ 0x14078092C
 * Callers:
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1407808F8 (PiSwDestroyDeviceObject.c)
 * Callees:
 *     PiSwDeviceDereference @ 0x1407809EC (PiSwDeviceDereference.c)
 *     PiSwRemovePdoAssociation @ 0x140780B70 (PiSwRemovePdoAssociation.c)
 */

__int64 __fastcall PiSwUnassociateDeviceObject(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    PiSwRemovePdoAssociation(*v1, a1);
    result = PiSwDeviceDereference(v2);
    *v1 = 0LL;
  }
  return result;
}
