/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C00424D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C0036304 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0040228 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C0041E58 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  bool v7; // cf
  unsigned int v8; // esi
  unsigned int v9; // ebp
  signed int _a3; // ebx
  unsigned __int8 v11; // r8
  unsigned int v12; // r11d
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  const void *v16; // rcx
  _NAMED_PIPE_CREATE_PARAMETERS *v17; // rdx
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  const void *_a2; // rdi
  unsigned int LowPart; // eax
  unsigned int *p_OutboundQuota; // rcx
  unsigned int v26; // r10d
  unsigned int m_MinInstanceBufferSize; // r9d
  unsigned __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r15d
  FxWmiInstance *InstanceReferenced; // rax
  __int64 v35; // rdx
  unsigned int v36; // r8d
  const void *v37; // rcx
  unsigned int *v38; // rax
  unsigned int v39; // edx
  unsigned int v40; // ecx
  int v41; // eax
  signed int v42; // edx
  const void *v43; // rcx
  unsigned int v44; // ecx
  unsigned int v45; // edx
  int v46; // eax
  const void *v47; // rcx
  unsigned int *v48; // rax
  const void *v49; // rsi
  const void *v50; // rax
  _FX_DRIVER_GLOBALS *v51; // rcx
  const void *v53; // rax
  char v54; // [rsp+50h] [rbp-78h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-77h] BYREF
  unsigned int tmpSize; // [rsp+54h] [rbp-74h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-70h]
  unsigned int v58; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v59; // [rsp+60h] [rbp-68h]
  char *v60; // [rsp+68h] [rbp-60h]
  unsigned int *v61; // [rsp+70h] [rbp-58h]
  FxWmiInstance *v62; // [rsp+80h] [rbp-48h]
  unsigned int *v63; // [rsp+88h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+90h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v7 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  v8 = 0;
  v58 = 0;
  v9 = 0;
  v54 = 0;
  if ( v7 )
  {
    _a3 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  tmpSize = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v11);
  v12 = tmpSize;
  m_Globals = This->m_Globals;
  if ( !tmpSize )
  {
    _a3 = -1073741162;
    if ( m_Globals->FxVerboseOn )
    {
      m_ObjectSize = Provider->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qL(m_Globals, 5u, tmpSize + 12, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, 0xC0000296);
    }
    v9 = 0;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
  }
  if ( m_Globals->FxVerboseOn )
  {
    v16 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v16, tmpSize);
    v12 = tmpSize;
  }
  v17 = Parameters;
  v18 = -1;
  v19 = 8LL * v12;
  Parameters[1].ReadMode &= ~0x10u;
  v17[1].MaximumInstances = v12;
  if ( v19 <= 0xFFFFFFFF )
    v18 = 8 * v12;
  _a3 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v19 <= 0xFFFFFFFF )
  {
    v20 = v18 + 60;
    v21 = -1;
    if ( v20 >= 0x3C )
      v21 = v20;
    _a3 = v20 < 0x3C ? 0xC0000095 : 0;
    if ( v20 >= 0x3C )
    {
      v8 = (v21 + 15) & 0xFFFFFFF0;
      if ( v8 < v21 )
        _a3 = -1073741675;
    }
  }
  if ( _a3 < 0 )
  {
    v22 = Provider->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22 )
      _a2 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v12, _a2, _a3);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
  }
  v17[1].CompletionMode = v8;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v8 > LowPart )
  {
    v60 = 0LL;
    _a3 = -1073741789;
    v54 = 1;
  }
  else
  {
    v60 = (char *)v17 + v8;
  }
  p_OutboundQuota = &v17[1].OutboundQuota;
  v26 = LowPart - v8;
  if ( v8 > LowPart )
  {
    v26 = 0;
    p_OutboundQuota = 0LL;
  }
  v57 = v26;
  v63 = p_OutboundQuota;
  if ( !v12 || (m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize) == 0 )
  {
LABEL_41:
    v32 = 0;
    v59 = 0;
    if ( v12 )
    {
      v33 = tmpSize;
      v61 = p_OutboundQuota;
      do
      {
        InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v32, Irp);
        v62 = InstanceReferenced;
        if ( !InstanceReferenced )
          break;
        if ( ((unsigned __int8 (__fastcall *)(FxWmiInstance *, __int64, _QWORD))InstanceReferenced->IsQueryInstanceSupported)(
               InstanceReferenced,
               v35,
               0LL) )
        {
          tmpSize = 0;
          _a3 = v62->QueryInstance(v62, v57, v60, &tmpSize);
          if ( (int)(_a3 + 0x80000000) < 0 || _a3 == -1073741789 )
          {
            v36 = (tmpSize + 15) & 0xFFFFFFF0;
            if ( v36 >= tmpSize )
            {
              v58 = v36 - tmpSize;
              if ( _a3 < 0 || v54 )
              {
                v54 = 1;
              }
              else
              {
                v38 = v61;
                v61[1] = tmpSize;
                *v38 = v8;
                v60 += v36;
              }
              v39 = v8;
              if ( v36 > v57 )
              {
                v40 = v57 + v8;
                v57 = 0;
              }
              else
              {
                v40 = v36 + v8;
                v57 -= v36;
              }
              v41 = -1;
              if ( v40 >= v8 )
                v41 = v40;
              v8 = v41;
              v42 = v40 < v39 ? 0xC0000095 : 0;
              if ( v42 >= 0 )
              {
                v44 = v36 + v9;
                v45 = v9;
                v46 = -1;
                if ( v36 + v9 >= v9 )
                  v46 = v36 + v9;
                v9 = v46;
                if ( v44 < v45 )
                {
                  _a3 = v44 < v45 ? 0xC0000095 : 0;
                  v47 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                  if ( !Provider->m_ObjectSize )
                    v47 = 0LL;
                  WPP_IFR_SF_qddd(
                    This->m_Globals,
                    v45,
                    0xCu,
                    0x14u,
                    WPP_FxWmiIrpHandler_cpp_Traceguids,
                    v47,
                    v46,
                    v36,
                    _a3);
                }
              }
              else
              {
                _a3 = v42;
                v43 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
                if ( !Provider->m_ObjectSize )
                  v43 = 0LL;
                WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v43, v42);
              }
            }
            else
            {
              _a3 = -1073741675;
              v37 = (const void *)((unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v62->m_ObjectSize )
                v37 = 0LL;
              WPP_IFR_SF_qdd(
                This->m_Globals,
                2u,
                0xCu,
                0x12u,
                WPP_FxWmiIrpHandler_cpp_Traceguids,
                v37,
                tmpSize,
                0xC0000095);
            }
          }
        }
        else if ( v63 )
        {
          v48 = v61;
          v61[1] = 0;
          *v48 = v8;
        }
        v62->Release(v62, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
        if ( (int)(_a3 + 0x80000000) >= 0 && _a3 != -1073741789 )
          goto LABEL_84;
        v61 += 2;
        v32 = v59 + 1;
        v59 = v32;
      }
      while ( v32 < v33 );
    }
    if ( _a3 != -1073741789 )
    {
LABEL_84:
      if ( _a3 < 0 )
      {
        v49 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        v53 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !Provider->m_ObjectSize )
          v53 = 0LL;
        WPP_IFR_SF_qL(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v53, _a3);
        v9 = 0;
        goto LABEL_79;
      }
      if ( !v54 )
      {
        v9 = v8 - Parameters[1].CompletionMode - v58;
        v49 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
LABEL_79:
        v51 = This->m_Globals;
        if ( v51->FxVerboseOn )
        {
          if ( !Provider->m_ObjectSize )
            v49 = 0LL;
          WPP_IFR_SF_qdd(v51, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v49, _a3, v9);
        }
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
      }
    }
    v9 -= v58;
    _a3 = -1073741789;
    v49 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    v50 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v50 = 0LL;
    WPP_IFR_SF_qdd(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v50, -1073741789, v9);
    goto LABEL_79;
  }
  v28 = (v12 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
  v29 = -1;
  v30 = -1;
  if ( v28 <= 0xFFFFFFFF )
    v30 = (v12 - 1) * ((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
  _a3 = v28 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v28 <= 0xFFFFFFFF )
  {
    v31 = m_MinInstanceBufferSize + v30;
    if ( m_MinInstanceBufferSize + v30 >= v30 )
      v29 = m_MinInstanceBufferSize + v30;
    _a3 = v31 < v30 ? 0xC0000095 : 0;
    if ( v31 >= v30 )
    {
      if ( v26 < v29 )
      {
        v9 = v29;
        _a3 = -1073741789;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
      }
      p_OutboundQuota = v63;
      goto LABEL_41;
    }
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v9);
}
