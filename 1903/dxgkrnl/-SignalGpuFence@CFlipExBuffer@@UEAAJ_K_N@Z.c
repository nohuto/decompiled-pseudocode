/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0007C50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C012EFA8 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // esi
  __int64 *v6; // r14
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  __int64 v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_14;
    v6 = 0LL;
    v3 = -1073741823;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v14 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v14 + 24) = 2200LL;
      WdLogEvent5_WdAssertion(v14);
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData )
    {
      v8 = (__int64 *)*((_QWORD *)SessionData + 2339);
      if ( v8 )
      {
        (*(void (__fastcall **)(_QWORD))*v8)(*((_QWORD *)SessionData + 2339));
        v3 = 0;
        v6 = v8;
      }
    }
    if ( v3 >= 0 )
    {
      if ( !*((_BYTE *)this + 577) )
        goto LABEL_10;
      v15 = *((_QWORD *)this + 77);
      *((_BYTE *)this + 624) = 1;
      v16 = (*(__int64 (__fastcall **)(__int64 *))(*v6 + 152))(v6);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) != v16 )
        v3 = -1073741823;
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 77) + 48LL))(
               *((_QWORD *)this + 77),
               *((unsigned int *)this + 149),
               *((_QWORD *)this + 39),
               a2);
      *((_BYTE *)this + 577) = 0;
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 624) = 0;
      }
      else
      {
LABEL_10:
        v9 = *v6;
        v10 = *((_QWORD *)this + 41);
        v17 = 0LL;
        v3 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v9 + 144))(v6, v10, &v17);
        if ( v3 >= 0 )
        {
          LOBYTE(v11) = *((_DWORD *)this + 149) == 0;
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v17 + 16LL))(
                 v17,
                 *((_QWORD *)this + 39),
                 a2,
                 v11);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        }
      }
    }
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
    if ( v3 < 0 )
    {
LABEL_14:
      v13 = *((_QWORD *)this + 39);
      v3 = -1073741637;
      if ( v13 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v13, a2);
    }
  }
  return (unsigned int)v3;
}
