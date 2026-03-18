/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C0072320
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B4C20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3)
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
  int v13; // esi
  struct _ERESOURCE *v15; // rsi
  signed int v16; // [rsp+30h] [rbp-68h]
  int v17; // [rsp+34h] [rbp-64h]
  int v18; // [rsp+38h] [rbp-60h] BYREF
  void *v19; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v22; // [rsp+58h] [rbp-40h] BYREF
  void *Src; // [rsp+68h] [rbp-30h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v25; // [rsp+A8h] [rbp+10h]
  _DWORD *v26; // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h]

  v26 = a3;
  v25 = a2;
  v4 = (_DWORD *)a2;
  v27 = 0;
  v17 = 0;
  v21 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v21 = *(_QWORD *)a1;
    a1 = v21 == 0 ? 0xC000000D : 0;
    v16 = v21 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 >= 0 )
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
      v15 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v15, 1u);
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
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, v21, &v22);
        v16 = v11;
        if ( v11 >= 0 )
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)v5 + 31) + 56LL))(
                  *((_QWORD *)v5 + 31),
                  &v19,
                  &v20);
          if ( v16 >= 0 )
          {
            do
            {
              v13 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v22 + 40LL))(
                      v22,
                      &Src,
                      &Size,
                      &v18);
              v17 = v13;
              if ( (_DWORD)Size )
              {
                memmove(v19, Src, (unsigned int)Size);
                v19 = (char *)v19 + (unsigned int)Size;
                v20 -= (unsigned int)Size;
                v27 += v18;
              }
            }
            while ( v13 && v20 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v5, v9);
      }
      else
      {
        v16 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v16 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v27;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v17;
  return (unsigned int)v16;
}
