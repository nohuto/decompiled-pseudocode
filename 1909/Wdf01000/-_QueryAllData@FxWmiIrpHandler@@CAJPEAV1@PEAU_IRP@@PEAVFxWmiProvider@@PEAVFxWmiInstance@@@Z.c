/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0041720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C0030A24 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C00356E4 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003DAD8 (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C003F488 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C00410A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int _a3; // esi
  bool v8; // cf
  signed int v9; // ebx
  unsigned __int8 v10; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int v12; // r8d
  unsigned __int8 FxVerboseOn; // al
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbp
  const void *v16; // rdi
  const void *v17; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *v18; // r9
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  unsigned int LowPart; // r10d
  unsigned int v23; // r10d
  unsigned int *p_OutboundQuota; // r11
  unsigned int m_MinInstanceBufferSize; // r9d
  unsigned __int64 v26; // rdx
  unsigned int v27; // eax
  unsigned int v28; // r13d
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v30; // r8d
  const void *v31; // rcx
  unsigned int *v32; // rax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  int v35; // eax
  signed int _a2; // edx
  const void *v37; // rcx
  const void *v38; // rcx
  unsigned int *v39; // rax
  const void *v40; // rax
  _FX_DRIVER_GLOBALS *v41; // rcx
  const void *v42; // rax
  char v44; // [rsp+50h] [rbp-68h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-67h] BYREF
  unsigned int tmpSize; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-60h]
  unsigned int v48; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v49; // [rsp+60h] [rbp-58h]
  char *v50; // [rsp+68h] [rbp-50h]
  unsigned int *v51; // [rsp+70h] [rbp-48h]
  FxWmiInstance *v52; // [rsp+78h] [rbp-40h]
  unsigned int *v53; // [rsp+80h] [rbp-38h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+88h] [rbp-30h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v48 = 0;
  v44 = 0;
  _a3 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v9 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  tmpSize = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v10);
  m_Globals = This->m_Globals;
  v12 = tmpSize;
  FxVerboseOn = m_Globals->FxVerboseOn;
  if ( !tmpSize )
  {
    v9 = -1073741162;
    if ( FxVerboseOn )
    {
      m_ObjectSize = Provider->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, 0xC0000296);
    }
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v16 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( FxVerboseOn )
  {
    v17 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v17 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v17, tmpSize);
    v12 = tmpSize;
  }
  v18 = Parameters;
  v19 = 8LL * v12;
  Parameters[1].ReadMode &= ~0x10u;
  v18[1].MaximumInstances = v12;
  if ( v19 > 0xFFFFFFFF || (v20 = v19 + 60, (unsigned int)v19 >= 0xFFFFFFC4) )
  {
    v9 = -1073741675;
  }
  else
  {
    v21 = (v19 + 75) & 0xFFFFFFF0;
    v9 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 >= v20 )
    {
      v18[1].CompletionMode = v21;
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( v21 > LowPart )
      {
        v44 = 1;
        p_OutboundQuota = 0LL;
        v53 = 0LL;
        v50 = 0LL;
        v23 = 0;
        v47 = 0;
        v9 = -1073741789;
      }
      else
      {
        v23 = LowPart - v21;
        v47 = v23;
        p_OutboundQuota = &v18[1].OutboundQuota;
        v50 = (char *)v18 + v21;
        v53 = &v18[1].OutboundQuota;
      }
      if ( v12 )
      {
        m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
        if ( m_MinInstanceBufferSize )
        {
          v26 = (v12 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
          if ( v26 > 0xFFFFFFFF || m_MinInstanceBufferSize + (unsigned int)v26 < (unsigned int)v26 )
          {
            v9 = -1073741675;
            return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
          }
          v9 = 0;
          if ( v23 < m_MinInstanceBufferSize + (unsigned int)v26 )
          {
            _a3 = m_MinInstanceBufferSize + v26;
            v9 = -1073741789;
            return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
          }
        }
      }
      v27 = 0;
      v49 = 0;
      if ( v12 )
      {
        v28 = tmpSize;
        v51 = p_OutboundQuota;
        do
        {
          InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v27, Irp);
          v52 = InstanceReferenced;
          if ( !InstanceReferenced )
            break;
          if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
          {
            tmpSize = 0;
            v9 = v52->QueryInstance(v52, v47, v50, &tmpSize);
            if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
            {
              v30 = (tmpSize + 15) & 0xFFFFFFF0;
              if ( v30 >= tmpSize )
              {
                v48 = v30 - tmpSize;
                if ( v9 < 0 || v44 )
                {
                  v44 = 1;
                }
                else
                {
                  v32 = v51;
                  v51[1] = tmpSize;
                  *v32 = v21;
                  v50 += v30;
                }
                v33 = v21;
                if ( v30 > v47 )
                {
                  v34 = v47 + v21;
                  v47 = 0;
                }
                else
                {
                  v34 = v30 + v21;
                  v47 -= v30;
                }
                v35 = -1;
                if ( v34 >= v21 )
                  v35 = v34;
                v21 = v35;
                _a2 = v34 < v33 ? 0xC0000095 : 0;
                if ( _a2 >= 0 )
                {
                  if ( v30 + _a3 < _a3 )
                  {
                    _a3 = -1;
                    v9 = -1073741675;
                    v38 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !Provider->m_ObjectSize )
                      v38 = 0LL;
                    WPP_IFR_SF_qddd(
                      This->m_Globals,
                      _a2,
                      0xCu,
                      0x14u,
                      WPP_FxWmiIrpHandler_cpp_Traceguids,
                      v38,
                      -1,
                      v30,
                      -1073741675);
                  }
                  else
                  {
                    _a3 += v30;
                  }
                }
                else
                {
                  v9 = _a2;
                  v37 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !Provider->m_ObjectSize )
                    v37 = 0LL;
                  WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v37, _a2);
                }
              }
              else
              {
                v9 = -1073741675;
                v31 = (const void *)((unsigned __int64)v52 ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !v52->m_ObjectSize )
                  v31 = 0LL;
                WPP_IFR_SF_qdd(
                  This->m_Globals,
                  2u,
                  0xCu,
                  0x12u,
                  WPP_FxWmiIrpHandler_cpp_Traceguids,
                  v31,
                  tmpSize,
                  0xC0000095);
              }
            }
          }
          else if ( v53 )
          {
            v39 = v51;
            v51[1] = 0;
            *v39 = v21;
          }
          v52->Release(v52, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
          if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
            goto LABEL_66;
          v51 += 2;
          v27 = v49 + 1;
          v49 = v27;
        }
        while ( v27 < v28 );
      }
      if ( v9 != -1073741789 )
      {
LABEL_66:
        if ( v9 < 0 )
        {
          v42 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !Provider->m_ObjectSize )
            v42 = 0LL;
          WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v42, v9);
          _a3 = 0;
          goto LABEL_62;
        }
        if ( !v44 )
        {
          _a3 = v21 - Parameters[1].CompletionMode - v48;
LABEL_62:
          v41 = This->m_Globals;
          if ( v41->FxVerboseOn )
          {
            if ( !Provider->m_ObjectSize )
              v16 = 0LL;
            WPP_IFR_SF_qdd(v41, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v16, v9, _a3);
          }
          return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
        }
      }
      _a3 -= v48;
      v9 = -1073741789;
      v40 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Provider->m_ObjectSize )
        v40 = 0LL;
      WPP_IFR_SF_qdd(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v40, -1073741789, _a3);
      goto LABEL_62;
    }
  }
  if ( !Provider->m_ObjectSize )
    v16 = 0LL;
  WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v12, v16, v9);
  _a3 = 0;
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
}
