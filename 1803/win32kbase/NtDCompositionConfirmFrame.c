/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C0045DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0046310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, _QWORD *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v7; // edx
  struct _ERESOURCE *v8; // rbx
  volatile signed __int32 *v9; // rax
  int v10; // ebx
  int v11; // eax
  signed int v13; // [rsp+20h] [rbp-38h]
  DirectComposition::CConnection *v14; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    v13 = *a2 == 0LL ? 0xC000000D : 0;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    KeEnterCriticalRegion();
    v4 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      v4 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v4 )
    {
      v8 = *(struct _ERESOURCE **)(v4 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v8, 1u);
      v9 = *(volatile signed __int32 **)(v4 + 24);
      if ( v9 && a1 == *(_QWORD *)(v4 + 16) )
      {
        _InterlockedIncrement(v9);
        v3 = *(DirectComposition::CConnection **)(v4 + 24);
        v14 = v3;
        v10 = 0;
      }
      else
      {
        v10 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741823;
    }
    v13 = v10;
    if ( v10 >= 0 )
    {
      v11 = -1073741275;
      if ( *((_QWORD *)v3 + 23) )
        v11 = _guard_dispatch_icall_fptr();
      v13 = v11;
      if ( v11 >= 0 )
      {
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        DirectComposition::CConnection::ConfirmFrame(v3);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v14, v7);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
