/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x180051304
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180051E60 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x1800511F0 (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     TraceLoggingRegister @ 0x1800514C0 (TraceLoggingRegister.c)
 *     McGenEventRegister @ 0x180051700 (McGenEventRegister.c)
 *     PdcCancelWatchdogAroundClientCall @ 0x180051724 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180051748 (PdcReleaseRwLockExclusive2.c)
 *     PdcPortOpen @ 0x1800517C0 (PdcPortOpen.c)
 *     PdcGetModuleName @ 0x180051ACC (PdcGetModuleName.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180051B38 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180051BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     PdcRwLockUninitialize2 @ 0x1801341E0 (PdcRwLockUninitialize2.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(__int64 a1, __int128 *a2, _QWORD *a3)
{
  char v3; // bp
  char *Heap; // rax
  char *v7; // rsi
  int v8; // edi
  HANDLE MutexW; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int ModuleName; // eax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  signed int LastError; // eax
  _BYTE v18[48]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)a2 == 1 && *((_QWORD *)a2 + 1) )
  {
    PdcCreateWatchdogAroundClientCall(v18);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v7 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0xF8uLL);
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      v8 = 0;
      MutexW = CreateMutexW(0LL, 0, 0LL);
      *((_QWORD *)v7 + 1) = MutexW;
      if ( !MutexW )
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0xC0070000;
      }
      if ( v8 >= 0 )
      {
        v3 = 1;
        PdcAcquireRwLockExclusive2(v7 + 8, 0LL);
        *(_DWORD *)v7 = 843138128;
        *((_DWORD *)v7 + 6) = 40;
        v7[64] = 1;
        *((_QWORD *)v7 + 10) = v7 + 72;
        *((_QWORD *)v7 + 9) = v7 + 72;
        v10 = *a2;
        v19 = Pdcv2pActivationClientCallback;
        *(_OWORD *)(v7 + 40) = v10;
        *((_QWORD *)v7 + 7) = *((_QWORD *)a2 + 2);
        ModuleName = PdcGetModuleName(v11, v7 + 92);
        v14 = 0;
        if ( ModuleName >= 0 )
          v14 = (_DWORD)v7 + 92;
        v8 = PdcPortOpen(v14, v13, (_DWORD)v7, (unsigned int)&v19);
        if ( !v8 )
        {
          *a3 = v7;
          if ( _InterlockedIncrement(&g_RegistrationCount) == 1 )
          {
            McGenEventRegister(&PDC_EVENT_PROVIDER, v15, PDC_EVENT_PROVIDER_Context, PDC_EVENT_PROVIDER_Context);
            TraceLoggingRegister((TraceLoggingHProvider)&dword_1801B14F8);
          }
          Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER((__int64)v7, 0);
          PdcReleaseRwLockExclusive2(v7 + 8, 0LL);
          v7 = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v3 )
        {
          PdcReleaseRwLockExclusive2(v7 + 8, 0LL);
          PdcRwLockUninitialize2(v7 + 8);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741584;
  }
  PdcCancelWatchdogAroundClientCall(v18);
  return (unsigned int)v8;
}
