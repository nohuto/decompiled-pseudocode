/*
 * XREFs of VrpShouldOperateOnCall @ 0x14080943C
 * Callers:
 *     VrpRegistryCallback @ 0x1408091F0 (VrpRegistryCallback.c)
 * Callees:
 *     CmRetrieveExtraParameter @ 0x1407ED768 (CmRetrieveExtraParameter.c)
 *     VrpGetContextsForNotifyInfo @ 0x140808C9C (VrpGetContextsForNotifyInfo.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 */

__int64 __fastcall VrpShouldOperateOnCall(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdx
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-10h] BYREF

  VrpGetContextsForNotifyInfo(a1, a2, &v14, v15);
  v8 = v14;
  if ( !v14 )
  {
    v11 = v15[0];
    if ( v15[0] )
    {
      *a3 = 0LL;
      v9 = *(_QWORD *)(v11 + 8);
      goto LABEL_3;
    }
    if ( v7 == 32 )
    {
      v10 = VRegEnabledInJob(v15);
      if ( v10 )
      {
        v12 = v15[0];
LABEL_9:
        *a3 = 0LL;
        *a4 = v12;
        return v10;
      }
    }
    else if ( ((v7 - 27) & 0xFFFFFFFD) == 0
           && (int)CmRetrieveExtraParameter(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), v6) >= 0 )
    {
      v10 = 1;
      v12 = *(_QWORD *)v15[0];
      goto LABEL_9;
    }
    v10 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
    return v10;
  }
  *a3 = v14;
  v9 = *(_QWORD *)(v8 + 40);
LABEL_3:
  v10 = 1;
  *a4 = v9;
  return v10;
}
