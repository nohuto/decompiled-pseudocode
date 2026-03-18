/*
 * XREFs of ACPIBuildProcessDevicePhaseCls @ 0x1C0015080
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00159F0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCls(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // ebx

  v4 = *(_QWORD *)(a1 + 40);
  v6 = AMLIGetNamedChild(*(_QWORD *)(v4 + 712), 1397506911LL, a3, a4);
  *(_DWORD *)(a1 + 32) = 13;
  if ( !v6 || (*(_BYTE *)(v4 + 952) & 4) != 0 )
  {
    v7 = ACPIGet(
           (__int64 *)v4,
           1096045407,
           -1610348542,
           0LL,
           0,
           (__int64)ACPIBuildCompleteMustSucceed,
           a1,
           a1 + 128,
           0LL);
  }
  else
  {
    AMLIDereferenceHandleEx(v6);
    _InterlockedOr64((volatile signed __int64 *)(v4 + 952), 4uLL);
    v7 = ACPIGet((__int64 *)v4, 1397506911, 537165824, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v4 + 592, 0LL);
    *(_DWORD *)(a1 + 32) = 12;
  }
  v8 = v7;
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v8;
}
