/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0007620
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetSessionTokenManager @ 0x1C0008010 (DxgkGetSessionTokenManager.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C00D81F0 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // esi
  int SessionTokenManager; // eax
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_9;
    v14 = 0LL;
    SessionTokenManager = DxgkGetSessionTokenManager(&v14);
    v7 = v14;
    v3 = SessionTokenManager;
    if ( SessionTokenManager >= 0 )
    {
      if ( !*((_BYTE *)this + 576) )
        goto LABEL_5;
      v11 = *((_QWORD *)this + 77);
      v12 = v14;
      *((_BYTE *)this + 624) = 1;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 152LL))(v12);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) != v13 )
        v3 = -1073741823;
      if ( v3 >= 0 )
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 77) + 48LL))(
               *((_QWORD *)this + 77),
               *((unsigned int *)this + 149),
               *((_QWORD *)this + 39),
               a2);
      *((_BYTE *)this + 576) = 0;
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 624) = 0;
      }
      else
      {
LABEL_5:
        v14 = 0LL;
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 144LL))(
               v7,
               *((_QWORD *)this + 41),
               &v14);
        if ( v3 >= 0 )
        {
          LOBYTE(v8) = *((_DWORD *)this + 149) == 0;
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 16LL))(
                 v14,
                 *((_QWORD *)this + 39),
                 a2,
                 v8);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v3 < 0 )
    {
LABEL_9:
      v10 = *((_QWORD *)this + 39);
      v3 = -1073741637;
      if ( v10 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v10, a2);
    }
  }
  return (unsigned int)v3;
}
