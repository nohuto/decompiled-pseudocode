/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C0012A40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v8; // eax
  __int64 v9; // rcx
  signed int v11; // [rsp+30h] [rbp-58h]
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+50h] [rbp-38h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF
  _DWORD *v16; // [rsp+98h] [rbp+10h]
  _DWORD *v17; // [rsp+A0h] [rbp+18h]
  int v18; // [rsp+A8h] [rbp+20h]

  v17 = a3;
  v16 = a2;
  v15 = 0;
  v18 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v5 = *a1;
    v11 = *a1 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess() == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v8 = -1073741275;
        v9 = *((_QWORD *)DefaultConnection + 23);
        if ( v9 )
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v5, &v12);
        v11 = v8;
        if ( v8 >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                                + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  v14,
                  &v13);
          if ( v11 >= 0 )
            v18 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v12 + 48LL))(
                    v12,
                    v14[0],
                    v13 / 0xC8,
                    &v15);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v6);
      }
      else
      {
        v11 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v15;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v18;
  return (unsigned int)v11;
}
