/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0058BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C0058ED8 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C016778C (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
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
  __int64 v17; // rcx
  PERESOURCE *v18; // rsi
  struct _ERESOURCE *v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  _QWORD **v22; // rcx
  _QWORD *i; // r8
  int v25; // [rsp+20h] [rbp-68h]
  DirectComposition::CConnection *v26; // [rsp+28h] [rbp-60h]
  unsigned __int64 v27; // [rsp+30h] [rbp-58h]
  struct UCE_RDP_HEADER *v28; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v29[9]; // [rsp+40h] [rbp-48h] BYREF
  int v30; // [rsp+98h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v31; // [rsp+A0h] [rbp+18h]
  int *v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v27 = *a2;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v25 = 0;
  }
  else
  {
    v25 = -1073741811;
  }
  if ( v25 >= 0 )
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
        v26 = v13;
        v14 = 0;
      }
      else
      {
        v14 = -1073741790;
        v13 = v26;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v14 = -1073741823;
      v13 = v26;
    }
    v25 = v14;
    if ( v14 >= 0 )
    {
      v15 = v27;
      if ( v27 )
      {
        Batches = -1073741275;
        v17 = *((_QWORD *)v13 + 23);
        if ( v17 )
          Batches = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *))(*(_QWORD *)v17 + 32LL))(
                      v17,
                      v27,
                      v29);
        if ( Batches >= 0 )
        {
          v18 = (PERESOURCE *)((char *)v13 + 8);
          v19 = (struct _ERESOURCE *)*((_QWORD *)v13 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v19, 1u);
          if ( *((_DWORD *)v13 + 37) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v13 + 36, 1, 2) == 2 )
            {
              v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 64LL))(v29[0]);
              if ( v20 )
                v21 = *(_QWORD **)(v20 + 8);
              else
                v21 = 0LL;
              v13 = v26;
              v22 = (_QWORD **)*((_QWORD *)v26 + 14);
              if ( v22 )
              {
                for ( i = *v22; i; i = (_QWORD *)*i )
                  v22 = (_QWORD **)i;
                *v22 = v21;
              }
              else
              {
                *((_QWORD *)v26 + 14) = v21;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches(v26, v27, &v28, &v30);
            }
            else
            {
              Batches = -1073740024;
              v13 = v26;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*v18);
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 8LL))(v29[0]);
        }
        v25 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches(v13, &v28, &v30);
        v25 = Batches;
      }
      if ( Batches >= 0 )
      {
        *a3 = v28;
        if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a4 = v30;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 && v26 )
        DirectComposition::CConnection::`scalar deleting destructor'(v26, v15);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v25;
}
