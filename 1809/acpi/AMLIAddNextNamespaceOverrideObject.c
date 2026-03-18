/*
 * XREFs of AMLIAddNextNamespaceOverrideObject @ 0x1C0062558
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C00623F8 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C00627C8 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C00628BC (AMLICreateOverrideObjectDep.c)
 *     AMLIGetValidNamespaceName @ 0x1C0062B30 (AMLIGetValidNamespaceName.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverrideObject(__int64 a1, __int64 a2, char *a3)
{
  PVOID PoolWithTag; // rdi
  int valid; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  SIZE_T v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v15; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v16[40]; // [rsp+38h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+38h] BYREF

  PoolWithTag = 0LL;
  valid = AMLIGetValidNamespaceName(a3, &v15);
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
    memset(v16, 0, sizeof(v16));
    v7 = v15 == 1346716767
       ? AMLICreateOverrideObjectDep(PoolWithTag)
       : AMLICreateOverrideObjectDefault(PoolWithTag, (unsigned int)NumberOfBytes);
    valid = v7;
    if ( v7 >= 0 )
    {
      valid = CreateNameSpaceObject(
                gpheapGlobal,
                (unsigned __int8 *)a3,
                a2,
                *(struct _EX_RUNDOWN_REF **)(a2 + 48),
                &NumberOfBytes,
                0);
      if ( valid < 0 )
      {
        FreeObjData((__int64)v16, v8, v9, v10);
      }
      else
      {
        v11 = NumberOfBytes;
        v12 = *(_OWORD *)&v16[16];
        *(_OWORD *)(NumberOfBytes + 64) = *(_OWORD *)v16;
        v13 = *(_QWORD *)&v16[32];
        *(_OWORD *)(v11 + 80) = v12;
        *(_QWORD *)(v11 + 96) = v13;
        DereferenceObjectEx(v11);
      }
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)valid;
}
