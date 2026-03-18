/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0045910
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0144F34 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(
        __int64 a1,
        unsigned __int64 *a2,
        struct UCE_RDP_HEADER **a3,
        int *a4)
{
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  volatile signed __int32 *v12; // rax
  DirectComposition::CConnection *v13; // rdi
  int v14; // ebx
  unsigned int v15; // edx
  int Batches; // ebx
  PERESOURCE *v17; // rsi
  struct _ERESOURCE *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD **v21; // rcx
  _QWORD *i; // rdx
  int v24; // [rsp+20h] [rbp-68h]
  DirectComposition::CConnection *v25; // [rsp+28h] [rbp-60h]
  unsigned __int64 v26; // [rsp+30h] [rbp-58h]
  struct UCE_RDP_HEADER *v27; // [rsp+38h] [rbp-50h] BYREF
  int v28; // [rsp+98h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v29; // [rsp+A0h] [rbp+18h]
  int *v30; // [rsp+A8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v26 = *a2;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  if ( v24 >= 0 )
  {
    KeEnterCriticalRegion();
    v8 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
      v8 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v8 )
    {
      v11 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v11, 1u);
      v12 = *(volatile signed __int32 **)(v8 + 24);
      if ( v12 && a1 == *(_QWORD *)(v8 + 16) )
      {
        _InterlockedAdd(v12, 1u);
        v13 = *(DirectComposition::CConnection **)(v8 + 24);
        v25 = v13;
        v14 = 0;
      }
      else
      {
        v14 = -1073741790;
        v13 = v25;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v14 = -1073741823;
      v13 = v25;
    }
    v24 = v14;
    if ( v14 >= 0 )
    {
      v15 = v26;
      if ( v26 )
      {
        Batches = -1073741275;
        if ( *((_QWORD *)v13 + 23) )
          Batches = _guard_dispatch_icall_fptr();
        if ( Batches >= 0 )
        {
          v17 = (PERESOURCE *)((char *)v13 + 8);
          v18 = (struct _ERESOURCE *)*((_QWORD *)v13 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v18, 1u);
          if ( *((_DWORD *)v13 + 37) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v13 + 36, 1, 2) == 2 )
            {
              v19 = _guard_dispatch_icall_fptr();
              if ( v19 )
                v20 = *(_QWORD **)(v19 + 8);
              else
                v20 = 0LL;
              v13 = v25;
              v21 = (_QWORD **)*((_QWORD *)v25 + 14);
              if ( v21 )
              {
                for ( i = *v21; i; i = (_QWORD *)*i )
                  v21 = (_QWORD **)i;
                *v21 = v20;
              }
              else
              {
                *((_QWORD *)v25 + 14) = v20;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v25, v26, &v27, &v28);
            }
            else
            {
              Batches = -1073740024;
              v13 = v25;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*v17);
          KeLeaveCriticalRegion();
          _guard_dispatch_icall_fptr();
        }
        v24 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v13, &v27, &v28);
        v24 = Batches;
      }
      if ( Batches >= 0 )
      {
        *a3 = v27;
        if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a4 = v28;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 && v25 )
        DirectComposition::CConnection::`scalar deleting destructor'(v25, v15);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v24;
}
