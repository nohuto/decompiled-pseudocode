/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C0047040
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v7; // eax
  signed int v9; // [rsp+30h] [rbp-58h]
  int v10; // [rsp+A8h] [rbp+20h]

  v10 = 0;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    v9 = *a1 == 0LL ? 0xC000000D : 0;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v7 = -1073741275;
        if ( *((_QWORD *)DefaultConnection + 23) )
          v7 = _guard_dispatch_icall_fptr();
        v9 = v7;
        if ( v7 >= 0 )
        {
          v9 = _guard_dispatch_icall_fptr();
          if ( v9 >= 0 )
            v10 = (unsigned __int8)_guard_dispatch_icall_fptr();
          _guard_dispatch_icall_fptr();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v5);
      }
      else
      {
        v9 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v9 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = 0;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v10;
  return (unsigned int)v9;
}
