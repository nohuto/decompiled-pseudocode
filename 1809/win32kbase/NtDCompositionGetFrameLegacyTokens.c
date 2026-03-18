/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0012C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0012E8C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(__int64 *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rsi
  unsigned int v6; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // esi
  signed int v12; // [rsp+30h] [rbp-68h]
  int v13; // [rsp+34h] [rbp-64h]
  int v14; // [rsp+38h] [rbp-60h] BYREF
  void *v15; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-50h] BYREF
  __int64 v17; // [rsp+50h] [rbp-48h]
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  void *Src; // [rsp+68h] [rbp-30h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  _DWORD *v21; // [rsp+A8h] [rbp+10h]
  _DWORD *v22; // [rsp+B0h] [rbp+18h]
  int v23; // [rsp+B8h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v23 = 0;
  v13 = 0;
  v5 = 0LL;
  v17 = 0LL;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (__int64 *)MmUserProbeAddress;
    v5 = *a1;
    v17 = v5;
    v12 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 )
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
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v5, &v18);
        v12 = v8;
        if ( v8 >= 0 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                               + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  &v15,
                  &v16);
          if ( v12 >= 0 )
          {
            do
            {
              v10 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v18 + 40LL))(
                      v18,
                      &Src,
                      &Size,
                      &v14);
              v13 = v10;
              if ( (_DWORD)Size )
              {
                memmove(v15, Src, (unsigned int)Size);
                v15 = (char *)v15 + (unsigned int)Size;
                v16 -= (unsigned int)Size;
                v23 += v14;
              }
            }
            while ( v10 && v16 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v6);
      }
      else
      {
        v12 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741790;
    }
  }
  if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a2 = v23;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v13;
  return (unsigned int)v12;
}
