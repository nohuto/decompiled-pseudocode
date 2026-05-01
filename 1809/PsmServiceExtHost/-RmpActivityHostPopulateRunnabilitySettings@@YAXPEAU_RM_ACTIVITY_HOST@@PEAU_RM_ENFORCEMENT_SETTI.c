/*
 * XREFs of ?RmpActivityHostPopulateRunnabilitySettings@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18000B2A0
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B03C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000B384 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B3F0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002298C (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 */

void __fastcall RmpActivityHostPopulateRunnabilitySettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  char v4; // di
  int v5; // ebx
  struct ExecutionModel::ResourceSet *Next; // rax
  char v7; // r14
  int v8; // eax
  int v9; // ecx
  char v10; // cl
  int v11; // eax
  int v12; // ecx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v13[1] = 2LL;
  v4 = 0;
  v13[0] = RmpActivityHostEnumerateResourceSetGetFirst(a1, 2LL, 0LL);
  v5 = *((_DWORD *)a1 + 156) != 2;
  Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
  v7 = *((_BYTE *)a2 + 28);
  while ( Next )
  {
    v11 = *((_DWORD *)Next + 375);
    v12 = v5;
    v5 = v11 & 3;
    if ( v5 <= v12 )
      v5 = v12;
    v7 |= (v11 & 8) != 0;
    *((_BYTE *)a2 + 28) = v7;
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v13);
  }
  v8 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 352));
  v9 = *((_DWORD *)a1 + 352);
  if ( v5 <= v8 )
    v5 = v8;
  *((_DWORD *)a2 + 6) = v5;
  v10 = v7 ^ (v7 ^ (2 * ((unsigned __int16)v9 >> 7))) & 2;
  *((_BYTE *)a2 + 28) = v10;
  if ( (*((_WORD *)a1 + 704) & 0x400) != 0
    && (*((_BYTE *)a1 + 1184) & 2) == 0
    && *(_BYTE *)(*((_QWORD *)a1 + 6) + 208LL) )
  {
    v4 = 4;
  }
  *((_BYTE *)a2 + 28) = v4 | v10 & 0xFB;
}
