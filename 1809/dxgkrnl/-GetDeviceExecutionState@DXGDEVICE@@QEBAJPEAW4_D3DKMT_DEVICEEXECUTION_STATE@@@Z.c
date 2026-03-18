/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C00CF054
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C00CF024 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F8010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00FA060 (-DxgkCddSubmitPresentHistory@@YAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011D60C (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 9528LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    if ( *((_DWORD *)this + 116) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    }
    if ( *((_DWORD *)this + 116) == 3 )
      goto LABEL_25;
    if ( *((_DWORD *)this + 116) != 4 )
    {
      v11 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 116) - 3));
      *(_QWORD *)(v11 + 24) = 9623LL;
      WdLogEvent5_WdAssertion(v11);
      v2 = -1073741823;
    }
    goto LABEL_16;
  }
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    v6 = *(unsigned int *)(*((_QWORD *)this + 43) + 8LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 520LL) + 8LL)
                                                           + 192LL))(
           *((_QWORD *)this + 82),
           &v13);
    v6 = v13;
    v2 = v5;
  }
  v7 = v6;
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v8 = v7 & 0x80000000;
  v13 = v6;
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( (unsigned int)v6 <= 0xD )
    {
      if ( (unsigned int)v6 >= 0xB )
        goto LABEL_24;
      switch ( (_DWORD)v6 )
      {
        case 0:
          *a2 = (v8 != 0) + 1;
          return v2;
        case 2:
LABEL_24:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          return v2;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v2;
      }
      if ( (_DWORD)v6 != 7 )
      {
        if ( (unsigned int)v6 <= 8 )
        {
LABEL_23:
          v12 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v12 + 24) = 9610LL;
          WdLogEvent5_WdAssertion(v12);
          v2 = -1073741823;
          goto LABEL_24;
        }
LABEL_31:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
        return v2;
      }
LABEL_25:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v2;
    }
    if ( (_DWORD)v6 != 14 )
    {
      if ( (unsigned int)v6 <= 0x13 )
        goto LABEL_31;
      if ( (_DWORD)v6 != 22 )
      {
        if ( (_DWORD)v6 != 24 )
          goto LABEL_23;
        goto LABEL_31;
      }
    }
LABEL_16:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v2;
}
