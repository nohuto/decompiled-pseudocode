/*
 * XREFs of ACPIBuildProcessDevicePhaseHrv @ 0x1C0015230
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00159F0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHrv(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rbp

  v4 = *(_QWORD *)(a1 + 40);
  v6 = AMLIGetNamedChild(*(_QWORD *)(v4 + 712), 1448233055LL, a3, a4);
  v7 = 0;
  *(_DWORD *)(a1 + 32) = 12;
  v8 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( (*(_BYTE *)(v4 + 952) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 8uLL);
    v7 = ACPIGet((__int64 *)v4, 1448233055, 537149442, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v4 + 584, 0LL);
    *(_DWORD *)(a1 + 32) = 11;
  }
  AMLIDereferenceHandleEx(v8);
  if ( v7 == 259 )
    return 0;
  else
LABEL_2:
    ACPIBuildCompleteMustSucceed(0LL);
  return v7;
}
