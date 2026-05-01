/*
 * XREFs of ?HampHostHasExternalResourceAccess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180003704
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180001EA0 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800035EC (-ResolveUnknownExternalResourcePriotiesFromResourceSets@ExternalResourceSet@ExecutionModel@@SAXP.c)
 *     ?HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800080DC (-HampAppGetInterruptiveUIState@@YAKPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800694A8 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069510 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017F34 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18002AFB4 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002BBCC (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 */

__int64 __fastcall HampHostHasExternalResourceAccess(__int64 a1, unsigned int a2)
{
  struct _HAM_ACTIVITY *FirstActivity; // rax
  unsigned int v5; // ebx
  struct _HAM_ACTIVITY *v6; // rdi

  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  v5 = 0;
  while ( 1 )
  {
    v6 = FirstActivity;
    if ( !FirstActivity )
      break;
    if ( *((_BYTE *)FirstActivity + 548) == 3
      && (*((_BYTE *)FirstActivity + 544) & 0x28) == 0
      && (unsigned int)HampUtilHasExternalResourceAccess((char *)FirstActivity + 496, a2) )
    {
      return 1;
    }
    FirstActivity = HampHostGetNextActivity(v6);
  }
  if ( (*(_QWORD *)(a1 + 632) & 0x800000000000000LL) != 0
    && (unsigned int)HampUtilHasExternalResourceAccess(
                       (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              + 120)
                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                     + 600,
                       a2) )
  {
    return 1;
  }
  return v5;
}
