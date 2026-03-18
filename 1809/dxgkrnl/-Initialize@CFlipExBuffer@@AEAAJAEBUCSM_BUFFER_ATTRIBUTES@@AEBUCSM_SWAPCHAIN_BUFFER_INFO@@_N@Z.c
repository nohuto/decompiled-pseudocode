/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C0009004
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@Z @ 0x1C0008EB4 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_NPEAPEAV1@@.c)
 * Callees:
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000928C (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00094C4 (-InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C00D7D30 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        CFlipExBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3,
        bool a4)
{
  NTSTATUS v7; // ebx
  void *v8; // rcx
  void *v9; // r14
  __int64 v10; // r14
  __int64 v11; // xmm1_8
  void (__fastcall ***v12)(PVOID, __int64); // r15
  PVOID v14; // rax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  PVOID v16; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v18[5]; // [rsp+38h] [rbp-28h] BYREF

  v7 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v7 >= 0 )
  {
    v8 = (void *)*((_QWORD *)a3 + 95);
    if ( v8 )
    {
      if ( a4 )
      {
        ObfReferenceObject(v8);
        v14 = (PVOID)*((_QWORD *)a3 + 95);
      }
      else
      {
        v7 = ObReferenceObjectByHandle(v8, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
        v14 = Object;
      }
      *((_QWORD *)this + 37) = v14;
    }
    if ( v7 >= 0 )
    {
      v9 = (void *)*((_QWORD *)a3 + 96);
      if ( v9 )
      {
        if ( a4 )
        {
          ObfReferenceObject(*((PVOID *)a3 + 96));
          v16 = (PVOID)*((_QWORD *)a3 + 96);
        }
        else
        {
          SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
          v7 = ObReferenceObjectByHandle(v9, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
          v16 = Object;
        }
        *((_QWORD *)this + 39) = v16;
      }
      if ( v7 >= 0 )
      {
        memset(v18, 0, 0x20uLL);
        v10 = 0LL;
        LODWORD(v18[0]) = *(_DWORD *)a3;
        do
        {
          if ( (unsigned int)v10 >= *((_DWORD *)a3 + 1) )
            break;
          HIDWORD(v18[0]) = v10;
          v11 = *((_QWORD *)a3 + 3 * v10 + 3);
          *(_OWORD *)&v18[1] = *(_OWORD *)((char *)a3 + 24 * v10 + 8);
          v18[3] = v11;
          v7 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v18,
                 a4,
                 (struct CBufferRealization **)&Object);
          if ( v7 >= 0 )
          {
            v12 = (void (__fastcall ***)(PVOID, __int64))Object;
            v7 = (*(__int64 (__fastcall **)(CFlipExBuffer *, PVOID))(*(_QWORD *)this + 200LL))(this, Object);
            if ( v7 < 0 )
            {
              if ( v12 )
                (**v12)(v12, 1LL);
            }
            else
            {
              (*((void (__fastcall **)(void (__fastcall **)(PVOID, __int64)))*v12[8] + 4))(v12[8]);
            }
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( v7 >= 0 );
        if ( v7 >= 0 )
        {
          *((_QWORD *)this + 36) = *((_QWORD *)a3 + 94);
          *((_BYTE *)this + 568) = *(_DWORD *)a3 == 4;
        }
      }
    }
  }
  return (unsigned int)v7;
}
