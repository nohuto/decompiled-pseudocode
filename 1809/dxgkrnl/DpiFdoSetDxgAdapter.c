/*
 * XREFs of DpiFdoSetDxgAdapter @ 0x1C014CC7C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DpiFdoSetDxgAdapter(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  struct _DEVICE_OBJECT *v3; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax

  v2 = *(_QWORD **)(a1 + 64);
  v3 = (struct _DEVICE_OBJECT *)v2[19];
  v2[474] = a2;
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v3);
  v2[477] = DeviceAttachmentBaseRef;
  return ObfDereferenceObject(DeviceAttachmentBaseRef);
}
