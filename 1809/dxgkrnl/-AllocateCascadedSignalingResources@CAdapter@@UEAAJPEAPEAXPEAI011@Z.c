/*
 * XREFs of ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C0054090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x1C0054314 (-CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C00D7D30 (DxgkGetSharedSyncObjectType.c)
 *     DxgkShareObjectsInternal @ 0x1C012B970 (DxgkShareObjectsInternal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C013BB9C (DxgkCreateContextVirtualInternal.c)
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
  _DWORD v27[10]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v28[3]; // [rsp+A0h] [rbp-21h] BYREF
  int v29; // [rsp+B8h] [rbp-9h]
  __int128 v30; // [rsp+C0h] [rbp-1h]

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
  v30 = 0LL;
  LODWORD(v28[0]) = 48;
  v28[1] = 0LL;
  v29 = 512;
  v28[2] = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ContextVirtualInternal = DxgkShareObjectsInternal(
                             0,
                             0,
                             CurrentProcess,
                             1,
                             &Src,
                             (__int64)v28,
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
                                 (__int64)v28,
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
    || (memset(v27, 0, sizeof(v27)),
        v21 = *((_DWORD *)this + 9),
        v27[3] |= 8u,
        v27[0] = v21,
        ContextVirtualInternal = DxgkCreateContextVirtualInternal(v27),
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
    v6 = v27[8];
    *a2 = v8;
    *a3 = v12;
    *a4 = v9;
    *a5 = v10;
  }
  *a6 = v6;
  return (unsigned int)ContextVirtualInternal;
}
