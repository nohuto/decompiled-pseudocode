/*
 * XREFs of WheapWmiExecutePolicyManagementMethod @ 0x140321A68
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140321940 (WheapWmiExecuteMethod.c)
 * Callees:
 *     WheapCommitPolicy @ 0x1408DD49C (WheapCommitPolicy.c)
 *     WheapGetAllPolicyBufferSize @ 0x1408DD584 (WheapGetAllPolicyBufferSize.c)
 *     WheapGetAllPolicyValues @ 0x1408DD590 (WheapGetAllPolicyValues.c)
 *     WheapGetPolicyValue @ 0x1408DD5D4 (WheapGetPolicyValue.c)
 *     WheapSetPolicyValue @ 0x1408DD65C (WheapSetPolicyValue.c)
 */

__int64 __fastcall WheapWmiExecutePolicyManagementMethod(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        int *a5)
{
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int AllPolicyValues; // ecx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int PolicyValue; // eax
  unsigned int v14; // eax
  unsigned int AllPolicyBufferSize; // eax
  _DWORD *v16; // r8
  int v17; // r10d
  unsigned int v18; // edx
  unsigned int v20[6]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+40h] [rbp+8h] BYREF

  v21 = 0;
  v6 = 0;
  v20[0] = 0;
  v7 = a1 - 1;
  if ( !v7 )
  {
    AllPolicyBufferSize = WheapGetAllPolicyBufferSize();
    v6 = AllPolicyBufferSize + 12;
    if ( v18 < AllPolicyBufferSize + 12 )
      goto LABEL_18;
    *v16 = v17;
    v16[2] = AllPolicyBufferSize;
    AllPolicyValues = WheapGetAllPolicyValues(v20, AllPolicyBufferSize, v16 + 3);
    v14 = v20[0];
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a4 < 4 )
      goto LABEL_13;
    v6 = 8;
    if ( a2 < 8 )
      goto LABEL_18;
    PolicyValue = WheapGetPolicyValue(*a3, &v21);
    *a3 = PolicyValue;
    AllPolicyValues = PolicyValue;
    if ( PolicyValue )
      goto LABEL_21;
    v14 = v21;
LABEL_20:
    a3[1] = v14;
    goto LABEL_21;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a4 >= 8 )
    {
      v6 = 4;
      v12 = *a3;
      v21 = a3[1];
      if ( a2 >= 4 )
      {
        v11 = WheapSetPolicyValue(v12, &v21);
        goto LABEL_11;
      }
LABEL_18:
      AllPolicyValues = -1073741789;
      goto LABEL_21;
    }
LABEL_13:
    AllPolicyValues = -1073741811;
    goto LABEL_21;
  }
  if ( v9 == 1 )
  {
    v6 = 4;
    if ( a2 >= 4 )
    {
      v11 = WheapCommitPolicy();
LABEL_11:
      AllPolicyValues = v11;
      *a3 = v11;
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  AllPolicyValues = -1073741161;
LABEL_21:
  *a5 = v6;
  return AllPolicyValues;
}
