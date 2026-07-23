/*
 * XREFs of CmObReferenceObjectByName @ 0x140582128
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1405CF180 (NtNotifyChangeMultipleKeys.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmKeyBodyRemapToVirtual @ 0x1407F2BFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 */

__int64 __fastcall CmObReferenceObjectByName(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  int v7; // eax
  void *v8; // rcx
  unsigned int v9; // ebx
  char v11; // [rsp+20h] [rbp-28h]
  _DWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = a5;
  v7 = ObReferenceObjectByNameEx(a1, a2, a3, CmKeyObjectType, v11, a6, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    if ( *v12 == 1803104306 )
    {
      *a7 = v12;
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -1073741816;
    }
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v9;
}
