/*
 * XREFs of ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0013200
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C00130AC (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x1C0013CE8 (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C0132A10 (DxgkGetSharedSyncObjectType.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1C0132F60 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C0133450 (DxgkCreateContextVirtualInternal.c)
 *     DxgkCreateDeviceInternal @ 0x1C0133468 (DxgkCreateDeviceInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1C0133484 (DxgkDestroyDeviceInternal.c)
 *     DxgkDestroyContextInternal @ 0x1C013349C (DxgkDestroyContextInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C01334C0 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 */

__int64 __fastcall CAdapter::UpdateRenderFence(CAdapter *this, void *a2)
{
  int DeviceInternal; // edi
  int v3; // r14d
  PVOID v4; // rsi
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v8; // eax
  int v10; // eax
  void *v11; // rcx
  D3DKMT_HANDLE v12; // eax
  int v13; // eax
  int v14; // eax
  _QWORD v15[16]; // [rsp+30h] [rbp-29h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v16; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF

  DeviceInternal = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !a2 )
    goto LABEL_11;
  if ( !*((_DWORD *)this + 9) )
  {
    memset(v15, 0, 0x40uLL);
    v13 = *((_DWORD *)this + 8);
    LODWORD(v15[1]) |= 4u;
    LODWORD(v15[0]) = v13;
    DeviceInternal = DxgkCreateDeviceInternal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_6;
    *((_DWORD *)this + 9) = HIDWORD(v15[1]);
  }
  if ( *((_DWORD *)this + 16) )
    goto LABEL_4;
  memset(v15, 0, 0x28uLL);
  v14 = *((_DWORD *)this + 9);
  HIDWORD(v15[1]) |= 8u;
  LODWORD(v15[0]) = v14;
  DeviceInternal = DxgkCreateContextVirtualInternal(v15);
  if ( DeviceInternal < 0 )
  {
LABEL_6:
    if ( v4 )
      ObfDereferenceObject(v4);
    return (unsigned int)DeviceInternal;
  }
  *((_DWORD *)this + 16) = v15[4];
LABEL_4:
  SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
  v8 = ObReferenceObjectByHandle(a2, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
  v4 = Object;
  DeviceInternal = v8;
  if ( v8 < 0 )
    goto LABEL_6;
  if ( Object == *((PVOID *)this + 7) )
    goto LABEL_6;
  memset(v15, 0, 0x58uLL);
  v10 = *((_DWORD *)this + 9);
  HIDWORD(v15[1]) |= 0x83u;
  LODWORD(v15[1]) = v10;
  v15[0] = a2;
  DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
  if ( DeviceInternal < 0 )
  {
    HIDWORD(v15[1]) &= ~0x80u;
    DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_6;
  }
  v3 = v15[2];
  if ( !LODWORD(v15[2]) )
    goto LABEL_6;
LABEL_11:
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
    ObfDereferenceObject(v11);
  v12 = *((_DWORD *)this + 12);
  *((_QWORD *)this + 7) = v4;
  v4 = 0LL;
  if ( v12 )
  {
    v16.hSyncObject = v12;
    DxgkCddDestroySynchronizationObject(&v16);
  }
  *((_DWORD *)this + 12) = v3;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 16) )
    {
      v16.hSyncObject = *((_DWORD *)this + 16);
      DxgkDestroyContextInternal(&v16);
      *((_DWORD *)this + 16) = 0;
    }
    if ( *((_DWORD *)this + 9) )
    {
      v16.hSyncObject = *((_DWORD *)this + 9);
      DxgkDestroyDeviceInternal(&v16);
      *((_DWORD *)this + 9) = 0;
      goto LABEL_6;
    }
  }
  return (unsigned int)DeviceInternal;
}
