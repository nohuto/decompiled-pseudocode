/*
 * XREFs of ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800421C4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x180044930 (-MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::ProcessCapture(
        MPCHolographicInputManager *this,
        struct InputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  char v7; // al
  __int64 v8; // r8
  __int64 v9; // r8
  struct IMPCTarget *v10; // rbx
  unsigned int v11; // esi
  unsigned int v12; // edi
  _DWORD *v13; // rcx
  ISMTracing *v14; // rcx
  __int64 v15; // rax
  struct IMPCTarget *v16; // rbx
  unsigned int v17; // esi
  unsigned int v18; // edi
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx

  v7 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 152LL))(a3);
  v8 = *(_QWORD *)a3;
  if ( v7 )
  {
    v15 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v8 + 176))(a3);
    v16 = (struct IMPCTarget *)v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v16 + 8LL))(v16);
    *a4 = v16;
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(*(_QWORD *)a3 + 192LL))(
           a3,
           a2) )
    {
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, _QWORD))(*(_QWORD *)a3 + 168LL))(a3, 0LL, 0LL);
      v17 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v18 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v19 )
      {
        if ( *v19 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_CaptureEvent_(v20, v18, v17, 0, v16);
        }
      }
    }
    if ( v16 )
      (*(void (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *, struct InputInfo *))(v8 + 184))(a3, a2) )
  {
    if ( *a4 )
    {
      LOBYTE(v9) = *((_BYTE *)a2 + 600) != 0;
      (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD, __int64))(*(_QWORD *)a3 + 168LL))(a3, *a4, v9);
      v10 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 176LL))(a3);
      v11 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 112LL))(a3);
      v12 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 88LL))(a3);
      v13 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v13 )
      {
        if ( *v13 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCHolographicInputManager_CaptureEvent_(v14, v12, v11, 1, v10);
        }
      }
    }
  }
}
