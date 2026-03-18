/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C005ADD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C005AFE0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     McTemplateK0xq @ 0x1C00EA0B8 (McTemplateK0xq.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0166090 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(__int64 a1, __int128 *a2, unsigned __int64 *a3)
{
  DirectComposition::CConnection *v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  struct _ERESOURCE *v13; // rbx
  volatile signed __int32 *v14; // rax
  int v15; // ebx
  int v17; // [rsp+30h] [rbp-78h]
  unsigned __int64 v18; // [rsp+38h] [rbp-70h] BYREF
  DirectComposition::CConnection *v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  unsigned __int64 *v21; // [rsp+50h] [rbp-58h]
  __int128 v22; // [rsp+58h] [rbp-50h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h]
  __int128 v24; // [rsp+78h] [rbp-30h]

  v20 = a1;
  v21 = a3;
  v5 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v6 = a2[1];
    v7 = a2[2];
    v22 = *a2;
    v23 = v6;
    v24 = v7;
    v17 = 0;
  }
  else
  {
    v17 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v17 >= 0 )
  {
    v9 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
      v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v9 )
    {
      v13 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      v14 = *(volatile signed __int32 **)(v9 + 24);
      if ( v14 && a1 == *(_QWORD *)(v9 + 16) )
      {
        _InterlockedIncrement(v14);
        v5 = *(DirectComposition::CConnection **)(v9 + 24);
        v19 = v5;
        v15 = 0;
      }
      else
      {
        v15 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v15 = -1073741823;
    }
    v17 = v15;
    if ( v15 >= 0 )
    {
      if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0xq(v11, &DCompBeginFrameEvent, v12, a1, v23);
      v17 = DirectComposition::CConnection::BeginFrame(v5, (const struct COMPOSITION_FRAME_INFO *)&v22, &v18);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v18;
  }
  else
  {
    v17 = -1073741811;
  }
  if ( v17 < 0 && v18 )
    DirectComposition::CConnection::RemoveCompositionFrame(v5, v18);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
    DirectComposition::CConnection::`scalar deleting destructor'(v19);
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
