/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C00C88A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0018C4C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     CopyNodeStatistics @ 0x1C00C7AB4 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r8d
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 *v14; // rdx
  int v15; // eax
  int v17; // eax

  v7 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 68) )
    return 3221225485LL;
  v8 = a3 + 2656;
  LOBYTE(v9) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
  if ( v9 )
    ExAcquirePushLockSharedEx(v8, 0LL);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v10 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v10 + 80);
  v12 = *(_QWORD **)(v10 + 8);
  v13 = &v12[v7];
  if ( (unsigned int)v7 >= v11 )
    v13 = v12;
  if ( !*v13 )
  {
LABEL_13:
    LOBYTE(v17) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
    if ( v17 )
      ExReleasePushLockSharedEx(v8, 0LL);
    return 3221225485LL;
  }
  v14 = &v12[v7];
  if ( (unsigned int)v7 >= v11 )
    v14 = v12;
  CopyNodeStatistics(a4, *v14);
  LOBYTE(v15) = EvaluateCurrentState((int **)&g_Feature_Servicing_VidSchStatLock_44974415_FeatureDescriptorDetails);
  if ( v15 )
    ExReleasePushLockSharedEx(v8, 0LL);
  return 0LL;
}
