/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C007A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v8; // edx
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  signed int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v18; // [rsp+70h] [rbp+18h]
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v17 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v17 = *a2;
    v16 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
  {
    KeEnterCriticalRegion();
    v5 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      v5 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v5 )
    {
      v9 = *(struct _ERESOURCE **)(v5 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v9, 1u);
      v10 = *(volatile signed __int32 **)(v5 + 24);
      if ( v10 && a1 == *(_QWORD *)(v5 + 16) )
      {
        _InterlockedIncrement(v10);
        v3 = *(DirectComposition::CConnection **)(v5 + 24);
        v18 = v3;
        v11 = 0;
        v4 = v17;
      }
      else
      {
        v11 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v11 = -1073741823;
    }
    v16 = v11;
    if ( v11 >= 0 )
    {
      v12 = -1073741275;
      v13 = *((_QWORD *)v3 + 23);
      if ( v13 )
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, v4, &v19);
      v16 = v12;
      if ( v12 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL))(v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      }
      v14 = *((_QWORD *)v3 + 23);
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v18, v8);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v16;
}
