/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0077B30
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0077DC8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C01A382C (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v9; // rbx
  volatile signed __int32 *v10; // rax
  DirectComposition::CConnection *v11; // rdi
  int v12; // ebx
  unsigned int v13; // edx
  int Batches; // ebx
  __int64 v15; // rcx
  PERESOURCE *v16; // rsi
  struct _ERESOURCE *v17; // rbx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  _QWORD **v20; // rcx
  _QWORD *i; // r8
  int v23; // [rsp+20h] [rbp-48h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]
  _QWORD v25[7]; // [rsp+30h] [rbp-38h] BYREF
  struct UCE_RDP_HEADER *v26; // [rsp+78h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v27; // [rsp+80h] [rbp+18h]
  DirectComposition::CConnection *v28; // [rsp+88h] [rbp+20h]

  v27 = a3;
  v24 = 0LL;
  v26 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v24 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v23 = 0;
  }
  else
  {
    v23 = -1073741811;
  }
  if ( v23 >= 0 )
  {
    KeEnterCriticalRegion();
    v6 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      v6 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v6 )
    {
      v9 = *(struct _ERESOURCE **)(v6 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v9, 1u);
      v10 = *(volatile signed __int32 **)(v6 + 24);
      if ( v10 && a1 == *(_QWORD *)(v6 + 16) )
      {
        _InterlockedAdd(v10, 1u);
        v11 = *(DirectComposition::CConnection **)(v6 + 24);
        v28 = v11;
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
        v11 = v28;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v12 = -1073741823;
      v11 = v28;
    }
    v23 = v12;
    if ( v12 >= 0 )
    {
      v13 = v24;
      if ( v24 )
      {
        Batches = -1073741275;
        v15 = *((_QWORD *)v11 + 23);
        if ( v15 )
          Batches = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *))(*(_QWORD *)v15 + 32LL))(
                      v15,
                      v24,
                      v25);
        if ( Batches >= 0 )
        {
          v16 = (PERESOURCE *)((char *)v11 + 8);
          v17 = (struct _ERESOURCE *)*((_QWORD *)v11 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v17, 1u);
          if ( *((_DWORD *)v11 + 37) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v11 + 36, 1, 2) == 2 )
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 64LL))(v25[0]);
              if ( v18 )
                v19 = *(_QWORD **)(v18 + 8);
              else
                v19 = 0LL;
              v11 = v28;
              v20 = (_QWORD **)*((_QWORD *)v28 + 14);
              if ( v20 )
              {
                for ( i = *v20; i; i = (_QWORD *)*i )
                  v20 = (_QWORD **)i;
                *v20 = v19;
              }
              else
              {
                *((_QWORD *)v28 + 14) = v19;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v11, v24, &v26);
            }
            else
            {
              Batches = -1073740024;
              v11 = v28;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*v16);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v25[0] + 8LL))(v25[0]);
        }
        v23 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v11, &v26);
        v23 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v26;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 && v28 )
        DirectComposition::CConnection::`scalar deleting destructor'(v28, v13);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v23;
}
