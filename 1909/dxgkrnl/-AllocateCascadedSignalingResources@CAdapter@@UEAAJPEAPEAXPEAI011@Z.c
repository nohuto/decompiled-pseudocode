/*
 * XREFs of ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C005ACA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x1C005AF28 (-CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C0132A10 (DxgkGetSharedSyncObjectType.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C0133450 (DxgkCreateContextVirtualInternal.c)
 *     DxgkShareObjectsInternal @ 0x1C013D1F0 (DxgkShareObjectsInternal.c)
 */

__int64 __fastcall CAdapter::AllocateCascadedSignalingResources(
        CAdapter *this,
        void **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  PVOID v8; // r12
  PVOID v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r13d
  int ContextVirtualInternal; // edi
  int v14; // eax
  int CurrentProcess; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v17; // eax
  int v18; // eax
  struct _OBJECT_TYPE *v19; // rax
  NTSTATUS v20; // eax
  int v21; // eax
  PVOID Src; // [rsp+58h] [rbp-69h] BYREF
  PVOID Object; // [rsp+60h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-59h] BYREF
  HANDLE v26; // [rsp+70h] [rbp-51h] BYREF
  __int64 v27[4]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v28; // [rsp+98h] [rbp-29h]
  _DWORD v29[24]; // [rsp+A8h] [rbp-19h] BYREF

  v6 = 0;
  LODWORD(Src) = 0;
  v8 = 0LL;
  LODWORD(Object) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = CAdapter::CreateSyncObject(this, 18LL, &Src);
  v12 = (unsigned int)Src;
  ContextVirtualInternal = v11;
  if ( v11 < 0 )
    goto LABEL_14;
  v14 = CAdapter::CreateSyncObject(this, 19LL, &Object);
  v10 = (unsigned int)Object;
  ContextVirtualInternal = v14;
  if ( v14 < 0 )
    goto LABEL_14;
  Src = (PVOID)__PAIR64__((unsigned int)Object, v12);
  Handle = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v27[0] = 48LL;
  v27[3] = 512LL;
  v27[1] = 0LL;
  v27[2] = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ContextVirtualInternal = DxgkShareObjectsInternal(
                             0,
                             0,
                             CurrentProcess,
                             1,
                             &Src,
                             (__int64)v27,
                             0x10000000u,
                             (__int64)&Handle,
                             0LL);
  if ( ContextVirtualInternal >= 0 )
  {
    SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
    v17 = ObReferenceObjectByHandle(Handle, 0x1F0000u, SharedSyncObjectType, 0, &Object, 0LL);
    v8 = Object;
    ContextVirtualInternal = v17;
    if ( v17 >= 0 )
    {
      v18 = PsGetCurrentProcess();
      ContextVirtualInternal = DxgkShareObjectsInternal(
                                 0,
                                 0,
                                 v18,
                                 1,
                                 (char *)&Src + 4,
                                 (__int64)v27,
                                 0x10000000u,
                                 (__int64)&v26,
                                 0LL);
      if ( ContextVirtualInternal >= 0 )
      {
        v19 = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
        v20 = ObReferenceObjectByHandle(v26, 0x1F0000u, v19, 0, &Src, 0LL);
        v9 = Src;
        ContextVirtualInternal = v20;
      }
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( v26 )
    ObCloseHandle(v26, 0);
  if ( ContextVirtualInternal < 0
    || (memset(v29, 0, 0x28uLL),
        v21 = *((_DWORD *)this + 9),
        v29[3] |= 8u,
        v29[0] = v21,
        ContextVirtualInternal = DxgkCreateContextVirtualInternal(v29),
        ContextVirtualInternal < 0) )
  {
LABEL_14:
    (*(void (__fastcall **)(CAdapter *, PVOID, _QWORD, PVOID, unsigned int, _DWORD))(*(_QWORD *)this + 40LL))(
      this,
      v8,
      v12,
      v9,
      v10,
      0);
    *a2 = 0LL;
    *a3 = 0;
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    v6 = v29[8];
    *a2 = v8;
    *a3 = v12;
    *a4 = v9;
    *a5 = v10;
  }
  *a6 = v6;
  return (unsigned int)ContextVirtualInternal;
}
