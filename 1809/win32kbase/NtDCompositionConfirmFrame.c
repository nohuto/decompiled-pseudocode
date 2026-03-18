/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C005A170
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C005A310 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v7; // rbx
  volatile signed __int32 *v8; // rax
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  signed int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v15; // [rsp+70h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v14 = *a2;
    v13 = *a2 == 0 ? 0xC000000D : 0;
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
      v7 = *(struct _ERESOURCE **)(v4 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v7, 1u);
      v8 = *(volatile signed __int32 **)(v4 + 24);
      if ( v8 && a1 == *(_QWORD *)(v4 + 16) )
      {
        _InterlockedIncrement(v8);
        v3 = *(DirectComposition::CConnection **)(v4 + 24);
        v15 = v3;
        v9 = 0;
      }
      else
      {
        v9 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v9 = -1073741823;
    }
    v13 = v9;
    if ( v9 >= 0 )
    {
      v10 = -1073741275;
      v11 = *((_QWORD *)v3 + 23);
      if ( v11 )
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, v14, &v16);
      v13 = v10;
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        DirectComposition::CConnection::ConfirmFrame(v3);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v15);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
