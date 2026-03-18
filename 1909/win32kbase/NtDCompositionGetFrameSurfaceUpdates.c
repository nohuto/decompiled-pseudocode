/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C00725C0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B4C20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  DirectComposition::CConnection *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v9; // edx
  struct _ERESOURCE *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  struct _ERESOURCE *v14; // rsi
  signed int v15; // [rsp+30h] [rbp-58h]
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+50h] [rbp-38h] BYREF
  int v20; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v21; // [rsp+98h] [rbp+10h]
  _DWORD *v22; // [rsp+A0h] [rbp+18h]
  int v23; // [rsp+A8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v4 = (_DWORD *)a2;
  v20 = 0;
  v23 = 0;
  v16 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v16 = *(_QWORD *)a1;
    a1 = *(_QWORD *)a1 == 0LL ? 0xC000000D : 0;
    v15 = v16 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( v15 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      v5 = 0LL;
      v6 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
      if ( CurrentProcessWin32Process )
        v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v6 )
      {
        v10 = *(struct _ERESOURCE **)(v6 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v10, 1u);
        v5 = *(DirectComposition::CConnection **)(v6 + 24);
        if ( v5 )
          _InterlockedIncrement((volatile signed __int32 *)v5);
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v5 )
        goto LABEL_15;
      v14 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v14, 1u);
        v5 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v5 )
      {
LABEL_15:
        v11 = -1073741275;
        v12 = *((_QWORD *)v5 + 23);
        if ( v12 )
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, v16, &v17);
        v15 = v11;
        if ( v11 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)v5 + 31) + 56LL))(
                  *((_QWORD *)v5 + 31),
                  v19,
                  &v18);
          if ( v15 >= 0 )
            v23 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v17 + 48LL))(
                    v17,
                    v19[0],
                    v18 / 0xC8,
                    &v20);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v5, v9);
      }
      else
      {
        v15 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v15 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v20;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v23;
  return (unsigned int)v15;
}
