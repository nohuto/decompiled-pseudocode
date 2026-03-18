/*
 * XREFs of ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C00634F8
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0060940 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C0061B64 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C0061E60 (--2-$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C006335C (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C012F190 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        __int64 a1,
        void *a2,
        const struct _LUID *a3,
        struct CFlipPropertySet *a4,
        struct CPoolBufferResourceState **a5)
{
  CFlipResource *v5; // rdi
  PVOID v9; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v11; // eax
  PVOID v12; // r15
  struct CPoolBufferResourceState *v13; // rbx
  NTSTATUS v14; // esi
  NTSTATUS v15; // eax
  CFlipResource *PoolWithQuotaTag; // rax
  struct CPoolBufferResourceState *v17; // rax
  int v18; // eax
  void *EventHandle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v22; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v5 = 0LL;
  EventHandle = 0LL;
  v9 = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  v11 = ObReferenceObjectByHandle(a2, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v12 = Object;
  v13 = 0LL;
  v14 = v11;
  if ( v11 < 0 )
    goto LABEL_16;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
  if ( v14 < 0 )
    goto LABEL_16;
  v15 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v22, 0LL);
  v9 = v22;
  v14 = v15;
  if ( v15 < 0 )
    goto LABEL_16;
  PoolWithQuotaTag = (CFlipResource *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x50uLL, 0x72624346u);
  v5 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    CFlipResource::CFlipResource(PoolWithQuotaTag, a1, a4);
    *((_QWORD *)v5 + 6) = v12;
    *(_QWORD *)v5 = &CPoolBufferResource::`vftable';
    *((_QWORD *)v5 + 7) = v9;
    *((struct _LUID *)v5 + 8) = *a3;
    *((_DWORD *)v5 + 18) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v14 = -1073741801;
LABEL_16:
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( v9 )
    {
      ObfDereferenceObject(v9);
      v13 = 0LL;
    }
    goto LABEL_20;
  }
  v12 = 0LL;
  v9 = 0LL;
  v17 = (struct CPoolBufferResourceState *)DXGQUOTAALLOCATOR<1,1935819590>::operator new();
  v13 = v17;
  if ( v17 )
  {
    *((_QWORD *)v17 + 3) = v5;
    *(_QWORD *)v17 = &CFlipResourceState::`vftable';
    *((_BYTE *)v17 + 32) = *((_BYTE *)v17 + 32) & 0xF0 | 1;
    *((_QWORD *)v17 + 2) = (char *)v17 + 8;
    *((_QWORD *)v17 + 1) = (char *)v17 + 8;
    ++*(_DWORD *)(*((_QWORD *)v17 + 3) + 24LL);
    *(_QWORD *)v17 = &CPoolBufferResourceState::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  v18 = v14;
  if ( !v13 )
    v18 = -1073741801;
  v14 = v18;
  if ( v18 >= 0 )
  {
    *a5 = v13;
    v13 = 0LL;
    goto LABEL_16;
  }
LABEL_20:
  if ( EventHandle )
    ObCloseHandle(EventHandle, 0);
  if ( v5 )
    CFlipResource::Release(v5);
  if ( v13 )
    (*(void (__fastcall **)(struct CPoolBufferResourceState *, __int64))(*(_QWORD *)v13 + 32LL))(v13, 1LL);
  return (unsigned int)v14;
}
