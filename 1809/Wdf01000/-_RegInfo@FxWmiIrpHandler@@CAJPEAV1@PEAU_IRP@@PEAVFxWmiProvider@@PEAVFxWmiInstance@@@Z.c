/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0042BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxDeviceBase *m_DeviceBase; // r15
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  unsigned __int16 *p_m_ParentObject; // rdi
  unsigned int v9; // edx
  __int64 i; // rax
  unsigned int v11; // ebp
  _UNICODE_STRING *p_m_RegistryPath; // r12
  unsigned int v13; // r13d
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  unsigned __int8 v16; // al
  signed int v17; // ebx
  unsigned int v18; // eax
  _LIST_ENTRY *Flink; // rbx
  unsigned int v20; // r12d
  __int64 v21; // rcx
  int Blink_high; // edx
  unsigned int v23; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rax
  _WORD *v25; // rcx
  unsigned __int16 *v26; // rcx
  PIRP v27; // rax
  char v29; // [rsp+20h] [rbp-58h]
  unsigned int v30; // [rsp+24h] [rbp-54h]
  unsigned int LowPart; // [rsp+28h] [rbp-50h]
  unsigned int v32; // [rsp+30h] [rbp-48h]
  _UNICODE_STRING *v33; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  PIRP v35; // [rsp+88h] [rbp+10h]

  v35 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  m_DeviceBase = This->m_DeviceBase;
  v30 = 0;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  FxNonPagedObject::Lock(This, &irql, (unsigned __int8)Provider);
  p_m_ParentObject = 0LL;
  v9 = 32 * This->m_NumProviders + 24;
  v32 = v9;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (unsigned __int16 *)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    for ( i = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags; i; i = *(_QWORD *)(i + 224) )
    {
      if ( *(_QWORD *)(i + 272) )
      {
        p_m_ParentObject = (unsigned __int16 *)(i + 264);
        break;
      }
    }
    m_DeviceBase = This->m_DeviceBase;
  }
  v11 = 32 * This->m_NumProviders + 26;
  p_m_RegistryPath = &m_DeviceBase->m_Driver->m_RegistryPath;
  v33 = p_m_RegistryPath;
  if ( p_m_ParentObject )
    v11 += *p_m_ParentObject;
  v13 = -1;
  v14 = -1;
  v15 = p_m_RegistryPath->Length + v11;
  v16 = irql;
  if ( v15 >= v11 )
    v14 = p_m_RegistryPath->Length + v11;
  v17 = v15 < v11 ? 0xC0000095 : 0;
  if ( v15 >= v11 )
  {
    v18 = v14 + 2;
    if ( v14 + 2 >= v14 )
      v13 = v14 + 2;
    v17 = v18 < v14 ? 0xC0000095 : 0;
    if ( v18 >= v14 )
    {
      Parameters->NamedPipeType = v13;
      if ( v13 > LowPart )
      {
        v30 = 4;
      }
      else
      {
        Parameters->ReadMode = 0;
        Parameters->MaximumInstances = v9;
        Parameters->CompletionMode = v11;
        Parameters->InboundQuota = This->m_NumProviders;
        Flink = This->m_ProvidersListHead.Flink;
        v30 = v13;
        LOBYTE(v14) = v35->Tail.Overlay.CurrentStackLocation->MinorFunction;
        v29 = v14;
        if ( This->m_NumProviders )
        {
          v20 = 0;
          do
          {
            v21 = 32LL * v20;
            *(_LIST_ENTRY *)((char *)&Parameters->DefaultTimeout.LowPart + v21) = Flink[3];
            *(unsigned int *)((char *)&Parameters[1].ReadMode + v21) = (unsigned int)Flink[2].Flink;
            Blink_high = HIDWORD(Flink[4].Blink);
            if ( (Blink_high & 4) != 0 )
            {
              v23 = 528384;
            }
            else
            {
              v23 = (HIDWORD(Flink[4].Blink) & 2 | 0x40u) >> 1;
              if ( (Blink_high & 1) != 0 )
                v23 |= 0x40u;
            }
            if ( BYTE2(Flink[5].Blink) )
            {
              v23 |= 0x10000u;
              BYTE2(Flink[5].Blink) = 0;
            }
            *(unsigned int *)((char *)&Parameters[1].NamedPipeType + v21) = v23;
            m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
            *(_QWORD *)((char *)&Parameters[1].CompletionMode + v21) = m_DeviceObject;
            if ( (_BYTE)v14 == 11 )
            {
              ObfReferenceObject(m_DeviceObject);
              LOBYTE(v14) = v29;
            }
            Flink = Flink->Flink;
            ++v20;
          }
          while ( v20 < This->m_NumProviders );
          p_m_RegistryPath = v33;
        }
      }
      FxNonPagedObject::Unlock(This, irql, v14);
      if ( v13 <= LowPart )
      {
        v25 = (_WORD *)((char *)Parameters + v32);
        if ( p_m_ParentObject )
        {
          *v25 = *p_m_ParentObject;
          memmove(v25 + 1, *((const void **)p_m_ParentObject + 1), *p_m_ParentObject);
        }
        else
        {
          *v25 = 0;
        }
        v26 = (unsigned __int16 *)((char *)Parameters + v11);
        *v26 = p_m_RegistryPath->Length;
        memmove(v26 + 1, p_m_RegistryPath->Buffer, p_m_RegistryPath->Length);
      }
      v17 = 0;
    }
    v16 = irql;
  }
  if ( v17 < 0 )
    FxNonPagedObject::Unlock(This, v16, v14);
  v27 = v35;
  v35->IoStatus.Information = v30;
  v27->IoStatus.Status = v17;
  IofCompleteRequest(v27, 0);
  return (unsigned int)v17;
}
