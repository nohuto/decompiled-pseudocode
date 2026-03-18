/*
 * XREFs of VidSchQueryProcessVidPnSourceStatistics @ 0x1C00C89B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0018C4C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall VidSchQueryProcessVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  _DWORD *v11; // r8
  int v12; // eax
  int v14; // eax

  v7 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 3221225485LL;
  v8 = a3 + 2656;
  LOBYTE(v9) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
  if ( v9 )
    ExAcquirePushLockSharedEx(v8, 0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v10 || !*(_QWORD *)(v10 + 8 * v7 + 88) )
  {
    LOBYTE(v14) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
    if ( v14 )
      ExReleasePushLockSharedEx(v8, 0LL);
    return 3221225485LL;
  }
  _mm_lfence();
  v11 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4)) + 8 * v7 + 88);
  *a4 = *v11;
  a4[1] = v11[1];
  a4[2] = v11[2];
  LOBYTE(v12) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
  if ( v12 )
    ExReleasePushLockSharedEx(v8, 0LL);
  return 0LL;
}
