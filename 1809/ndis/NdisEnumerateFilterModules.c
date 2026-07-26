/*
 * XREFs of NdisEnumerateFilterModules @ 0x1C0059F60
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 */

NDIS_STATUS __stdcall NdisEnumerateFilterModules(
        NDIS_HANDLE NdisHandle,
        PVOID InterfaceBuffer,
        ULONG InterfaceBufferLength,
        PULONG BytesNeeded,
        PULONG BytesWritten)
{
  _QWORD *v5; // r15
  _QWORD *v7; // rdi
  char *v8; // r14
  int v9; // r12d
  ULONG v10; // r13d
  char *v11; // rbx
  __int64 v12; // rcx
  KIRQL v13; // dl
  __int64 v14; // r15
  char *v15; // rbx
  unsigned __int16 v16; // dx
  __int128 *v17; // rax
  __int128 v18; // xmm0
  unsigned int v19; // eax
  unsigned __int16 *v20; // rax
  const void **v21; // rdx
  ULONG v23; // [rsp+28h] [rbp-51h]
  ULONG v24; // [rsp+2Ch] [rbp-4Dh]
  unsigned int v25; // [rsp+30h] [rbp-49h]

  v5 = NdisHandle;
  v23 = InterfaceBufferLength;
  v7 = 0LL;
  v8 = (char *)InterfaceBuffer + InterfaceBufferLength;
  v25 = 0;
  v9 = 0;
  v10 = InterfaceBufferLength;
  v11 = 0LL;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x27u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)NdisHandle);
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
  ndisReferencePackage(&ndisPkgs);
  v24 = 80;
  if ( v7 )
  {
    if ( InterfaceBufferLength >= 0x50 )
    {
      v10 = InterfaceBufferLength - 80;
      *(_QWORD *)InterfaceBuffer = 5243264LL;
      v23 = InterfaceBufferLength - 80;
      v11 = (char *)InterfaceBuffer + 16;
      *((_DWORD *)InterfaceBuffer + 3) = 16;
      *((_DWORD *)InterfaceBuffer + 2) = 0;
    }
    v12 = v7[475];
    if ( v12 )
    {
      ndisReferenceMiniportByName((PCUNICODE_STRING)(v12 + 8));
      v9 = -1073676282;
    }
    else
    {
      Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v7 + 643));
      v13 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
      v14 = v7[258];
      v7[65] = KeGetCurrentThread();
      *((_DWORD *)v7 + 466) = 2098410;
      if ( v14 )
      {
        v15 = v11 + 2;
        do
        {
          v7[65] = 0LL;
          *((_DWORD *)v7 + 466) = 0;
          KeReleaseSpinLock(v7 + 12, v13);
          v16 = 0;
          v17 = *(__int128 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
          if ( v17 )
          {
            v18 = *v17;
            v16 = *v17;
          }
          else
          {
            v18 = 0uLL;
          }
          v19 = **(unsigned __int16 **)(v14 + 40) + v25 + v16 + 80;
          v24 += v19;
          v25 = v19;
          if ( v10 >= v19 )
          {
            *(_DWORD *)(v15 - 2) = 5243264;
            *(_DWORD *)(v15 + 10) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 40LL) & 1) + 1;
            *(_DWORD *)(v15 + 6) = 2 - ((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 40LL) & 2) != 0);
            *(_DWORD *)(v15 + 14) = *(_DWORD *)(v14 + 696);
            *(_QWORD *)(v15 + 22) = *(_QWORD *)(*(_QWORD *)(v14 + 704) + 1312LL);
            *(_DWORD *)(v15 + 2) = 2;
            *(_OWORD *)(v15 + 30) = v18;
            *((_WORD *)v15 + 24) = **(_WORD **)(v14 + 40);
            *((_WORD *)v15 + 23) = **(_WORD **)(v14 + 40);
            v8 -= **(unsigned __int16 **)(v14 + 40);
            *(_QWORD *)(v15 + 54) = v8;
            memmove(v8, *(const void **)(*(_QWORD *)(v14 + 40) + 8LL), **(unsigned __int16 **)(v14 + 40));
            v20 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
            if ( v20 )
            {
              v8 -= *v20;
              *(_QWORD *)(v15 + 38) = v8;
              v21 = *(const void ***)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 344LL) + 48LL);
              memmove(v8, v21[1], *(unsigned __int16 *)v21);
            }
            ++*((_DWORD *)InterfaceBuffer + 2);
            v15 += 64;
            v10 -= v25;
          }
          v13 = KeAcquireSpinLockRaiseToDpc(v7 + 12);
          v7[65] = KeGetCurrentThread();
          *((_DWORD *)v7 + 466) = 2098487;
          v14 = *(_QWORD *)(v14 + 112);
        }
        while ( v14 );
        v23 = v10;
        v9 = 0;
      }
      v7[65] = 0LL;
      *((_DWORD *)v7 + 466) = 0;
      KeReleaseSpinLock(v7 + 12, v13);
      Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v7 + 643));
      Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v7 + 643), RunAsynchronous, 0);
      v5 = NdisHandle;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( !v9 )
  {
    if ( v24 > InterfaceBufferLength )
      v9 = -1073676266;
    *BytesNeeded = v24;
    *BytesWritten = InterfaceBufferLength - v23;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x28u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, (__int64)v5, v9);
  return v9;
}
