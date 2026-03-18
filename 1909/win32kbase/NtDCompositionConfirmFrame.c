/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C006E680
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006E820 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B4C20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
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
  __int64 v12; // rcx
  signed int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v16; // [rsp+70h] [rbp+18h]
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v15 = *a2;
    v14 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
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
        v16 = v3;
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
    v14 = v10;
    if ( v10 >= 0 )
    {
      v11 = -1073741275;
      v12 = *((_QWORD *)v3 + 23);
      if ( v12 )
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, v15, &v17);
      v14 = v11;
      if ( v11 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        DirectComposition::CConnection::ConfirmFrame(v3);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v16, v7);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v14;
}
