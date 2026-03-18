/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0047250
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00474A0 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v5; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v7; // eax
  int v8; // esi
  signed int v10; // [rsp+30h] [rbp-68h]
  int v11; // [rsp+34h] [rbp-64h]
  int v12; // [rsp+38h] [rbp-60h]
  char *v13; // [rsp+40h] [rbp-58h]
  unsigned __int64 v14; // [rsp+48h] [rbp-50h]
  void *Src; // [rsp+68h] [rbp-30h]
  unsigned int Size; // [rsp+A0h] [rbp+8h]
  int v17; // [rsp+B8h] [rbp+20h]

  v17 = 0;
  v11 = 0;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    v10 = *a1 == 0LL ? 0xC000000D : 0;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
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
        v10 = v7;
        if ( v7 >= 0 )
        {
          v10 = _guard_dispatch_icall_fptr();
          if ( v10 >= 0 )
          {
            do
            {
              v8 = (unsigned __int8)_guard_dispatch_icall_fptr();
              v11 = v8;
              if ( Size )
              {
                memmove(v13, Src, Size);
                v13 += Size;
                v14 -= Size;
                v17 += v12;
              }
            }
            while ( v8 && v14 >= 0x800 );
          }
          _guard_dispatch_icall_fptr();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v5);
      }
      else
      {
        v10 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v10 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v17;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v11;
  return (unsigned int)v10;
}
