/*
 * XREFs of ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CC2C
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000AF78 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000C2B4 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000C328 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18000CD64 (-HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionM.c)
 *     CempLockTrackerMarkReleased @ 0x18001A910 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800301FC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::ResolveUnknownExternalResourcePriotiesFromResourceSets(
        struct ExecutionModel::ResourceManager *a1,
        int a2,
        unsigned int a3,
        struct ExecutionModel::_ResourceInfo *a4,
        struct _RM_ACTIVITY_HOST *a5)
{
  char *v5; // rbx
  __int64 v7; // rsi
  int v8; // edi
  struct ExecutionModel::ResourceSet *Next; // rax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 First; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]

  if ( a3 )
  {
    v5 = (char *)a4 + 16;
    v7 = a3;
    do
    {
      if ( v5[5] )
      {
        v17 = 0;
        v16 = a2;
        First = RmpActivityHostEnumerateResourceSetGetFirst((__int64)a5, a2, 0);
        v8 = 101;
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
        if ( Next )
        {
          v10 = *((int *)v5 - 4);
          do
          {
            v11 = *((_DWORD *)Next + v10 + 372);
            if ( v8 < v11 )
              v11 = v8;
            v8 = v11;
            Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)&First);
          }
          while ( Next );
        }
        if ( v8 >= *(_DWORD *)v5 )
          v8 = *(_DWORD *)v5;
        *(_DWORD *)v5 = v8;
        if ( (*((_BYTE *)a5 + 836) & 1) != 0 )
        {
          HampHostAcquireLockSharedEx((struct _RM_ACTIVITY_HOST *)((char *)a5 + 64), 0);
          if ( (unsigned int)HampHostHasExternalResourceAccess((char *)a5 + 64, *((unsigned int *)v5 - 4)) )
          {
            v14 = *(_DWORD *)v5;
            if ( *(int *)v5 > 2 )
              v14 = 2;
            *(_DWORD *)v5 = v14;
          }
          CempLockTrackerMarkReleased(v13, v12, 1LL);
          RtlReleaseSRWLockShared((char *)a5 + 64);
        }
      }
      v5 += 24;
      --v7;
    }
    while ( v7 );
  }
}
