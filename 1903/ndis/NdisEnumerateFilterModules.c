/*
 * XREFs of NdisEnumerateFilterModules @ 0x1C008CD10
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  _QWORD *v5; // r14
  _DWORD *v6; // rsi
  _QWORD *v7; // rdi
  char *v8; // r15
  NDIS_STATUS v9; // r12d
  ULONG v10; // r13d
  char *v11; // rbx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // r14
  KIRQL v15; // dl
  char *v16; // rbx
  unsigned __int16 v17; // dx
  __int128 *v18; // rax
  __int128 v19; // xmm0
  unsigned int v20; // eax
  unsigned __int16 *v21; // rax
  const void **v22; // rdx
  int v23; // edx
  ULONG v25; // [rsp+48h] [rbp-41h]
  ULONG v26; // [rsp+4Ch] [rbp-3Dh]
  unsigned int v27; // [rsp+50h] [rbp-39h]
  char v28; // [rsp+E8h] [rbp+5Fh]

  v28 = (char)NdisHandle;
  v5 = NdisHandle;
  v25 = InterfaceBufferLength;
  v6 = InterfaceBuffer;
  v7 = 0LL;
  v8 = (char *)InterfaceBuffer + InterfaceBufferLength;
  v27 = 0;
  v9 = 0;
  v10 = InterfaceBufferLength;
  v11 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(InterfaceBuffer) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)InterfaceBuffer,
      13,
      39,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)NdisHandle);
  }
  switch ( *(_BYTE *)v5 )
  {
    case 5:
      v7 = (_QWORD *)v5[4];
      break;
    case 0x11:
      v7 = v5;
      break;
    case 0x12:
      v7 = (_QWORD *)v5[2];
      break;
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  v26 = 80;
  if ( v7 )
  {
    if ( InterfaceBufferLength >= 0x50 )
    {
      v10 = InterfaceBufferLength - 80;
      *(_QWORD *)v6 = 5243264LL;
      v25 = InterfaceBufferLength - 80;
      v11 = (char *)(v6 + 4);
      v6[3] = 16;
      v6[2] = 0;
    }
    v12 = v7[471];
    if ( v12 )
    {
      ndisReferenceMiniportByName(v12 + 8);
      v9 = -1073676282;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v7 + 638));
      v13 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
      v14 = v7[256];
      v15 = v13;
      if ( v14 )
      {
        v16 = v11 + 2;
        do
        {
          v7[65] = 0LL;
          KeReleaseSpinLock(v7 + 12, v15);
          v17 = 0;
          v18 = *(__int128 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
          if ( v18 )
          {
            v19 = *v18;
            v17 = *v18;
          }
          else
          {
            v19 = 0uLL;
          }
          v20 = **(unsigned __int16 **)(v14 + 40) + v27 + v17 + 80;
          v26 += v20;
          v27 = v20;
          if ( v10 >= v20 )
          {
            *(_DWORD *)(v16 - 2) = 5243264;
            *(_DWORD *)(v16 + 10) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 40LL) & 1) + 1;
            *(_DWORD *)(v16 + 6) = 2 - ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 40LL) & 2) != 0);
            *(_DWORD *)(v16 + 14) = *(_DWORD *)(v14 + 688);
            *(_QWORD *)(v16 + 22) = *(_QWORD *)(*(_QWORD *)(v14 + 696) + 1312LL);
            *(_DWORD *)(v16 + 2) = 2;
            *(_OWORD *)(v16 + 30) = v19;
            *((_WORD *)v16 + 24) = **(_WORD **)(v14 + 40);
            *((_WORD *)v16 + 23) = **(_WORD **)(v14 + 40);
            v8 -= **(unsigned __int16 **)(v14 + 40);
            *(_QWORD *)(v16 + 54) = v8;
            memmove(v8, *(const void **)(*(_QWORD *)(v14 + 40) + 8LL), **(unsigned __int16 **)(v14 + 40));
            v21 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
            if ( v21 )
            {
              v8 -= *v21;
              *(_QWORD *)(v16 + 38) = v8;
              v22 = *(const void ***)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
              memmove(v8, v22[1], *(unsigned __int16 *)v22);
            }
            ++v6[2];
            v16 += 64;
            v10 -= v27;
          }
          v15 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
          v7[65] = KeGetCurrentThread();
          v14 = *(_QWORD *)(v14 + 112);
        }
        while ( v14 );
        v25 = v10;
        v9 = 0;
      }
      v7[65] = 0LL;
      KeReleaseSpinLock(v7 + 12, v15);
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v7 + 638));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v7 + 638), RunAsynchronous, 0);
      LOBYTE(v5) = v28;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( !v9 )
  {
    if ( v26 > InterfaceBufferLength )
      v9 = -1073676266;
    v23 = (int)BytesNeeded;
    *BytesNeeded = v26;
    *BytesWritten = InterfaceBufferLength - v25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v23,
      13,
      40,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v5,
      v9);
  }
  return v9;
}
