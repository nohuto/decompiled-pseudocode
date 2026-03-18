/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C00644E4
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0064384 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     FreeObjData @ 0x1C0013EB0 (FreeObjData.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0064754 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0064848 (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0064ABC (AMLIGetValidNamespaceName.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, char *a3)
{
  PVOID PoolWithTag; // rdi
  int valid; // ebx
  int v7; // eax
  SIZE_T v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v12; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[40]; // [rsp+38h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+38h] BYREF

  PoolWithTag = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v12);
  if ( valid < 0 )
    return (unsigned int)valid;
  LODWORD(NumberOfBytes) = 0;
  valid = OSReadRegValue(a3);
  if ( valid != -2147483643 )
    goto LABEL_5;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x496C6D41u);
  if ( !PoolWithTag )
  {
    valid = -1073741670;
LABEL_5:
    if ( valid < 0 )
      return (unsigned int)valid;
  }
  valid = OSReadRegValue(a3);
  if ( valid >= 0 )
  {
    memset(v13, 0, sizeof(v13));
    v7 = v12 == 1346716767
       ? AMLICreateOverrideObjectDep(PoolWithTag)
       : AMLICreateOverrideObjectDefault(PoolWithTag, (unsigned int)NumberOfBytes);
    valid = v7;
    if ( v7 >= 0 )
    {
      valid = CreateNameSpaceObject(
                (struct _SLIST_ENTRY *)gpheapGlobal,
                (unsigned __int8 *)a3,
                a2,
                *(struct _EX_RUNDOWN_REF **)(a2 + 48),
                (struct _EX_RUNDOWN_REF **)&NumberOfBytes,
                0);
      if ( valid < 0 )
      {
        FreeObjData((__int64)v13);
      }
      else
      {
        v8 = NumberOfBytes;
        v9 = *(_OWORD *)&v13[16];
        *(_OWORD *)(NumberOfBytes + 64) = *(_OWORD *)v13;
        v10 = *(_QWORD *)&v13[32];
        *(_OWORD *)(v8 + 80) = v9;
        *(_QWORD *)(v8 + 96) = v10;
        DereferenceObjectEx(v8);
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)valid;
}
