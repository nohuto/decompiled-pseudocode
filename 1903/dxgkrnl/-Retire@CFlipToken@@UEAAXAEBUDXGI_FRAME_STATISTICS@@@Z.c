/*
 * XREFs of ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00178A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Retire(CFlipToken *this, const struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v3; // r13
  char v4; // bl
  __int64 v5; // rbp
  unsigned int v6; // r15d
  __int64 v7; // rsi
  struct DXGGLOBAL *Global; // rax
  bool v9; // zf
  int v10; // ebx
  BOOL v11; // edi
  void (__fastcall *v12)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64); // r14
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *i; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+50h] [rbp-58h]
  __int128 v19; // [rsp+60h] [rbp-48h]

  v19 = *(_OWORD *)a2;
  v18 = *((_OWORD *)a2 + 1);
  v3 = *((_QWORD *)this + 4);
  v4 = *((_BYTE *)this + 559);
  v5 = *((_QWORD *)this + 5);
  v6 = *((_DWORD *)this + 26);
  *((_DWORD *)this + 6) = 5;
  v7 = *(_QWORD *)(v3 + 24);
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v9 = v4 == 0;
  v10 = *((unsigned __int8 *)this + 556);
  v11 = v9;
  v12 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64))(*((_QWORD *)Global + 38000)
                                                                                                 + 120LL);
  v13 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v12(v3, v6, v13, *((_QWORD *)this + 12), 5, v10, v11, v7, v5);
  v14 = *((_QWORD *)this + 4);
  v15 = *((_QWORD *)this + 5);
  LODWORD(v19) = *((_DWORD *)this + 27);
  if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 48))(v14 + 48) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v14 + 56, 0LL);
    *(_QWORD *)(v14 + 64) = KeGetCurrentThread();
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(v14 + 48))(v14 + 48) )
    {
      if ( *(_DWORD *)(v14 + 120) )
      {
        for ( i = *(__int64 **)(v14 + 104); i != (__int64 *)(v14 + 104); i = (__int64 *)*i )
        {
          if ( *(i - 1) == v15 )
          {
            *((_DWORD *)i + 39) = 0;
            *((_DWORD *)i + 48) = 0;
            *((_OWORD *)i + 10) = v19;
            *((_BYTE *)i + 17) = 1;
            *((_OWORD *)i + 11) = v18;
            break;
          }
        }
      }
      v17 = v14 + 56;
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v14 + 64) )
      {
        *(_QWORD *)(v14 + 64) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v17, 0LL);
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      CPushLock::ReleaseLock((CPushLock *)(v14 + 48));
    }
  }
}
