/*
 * XREFs of ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C0005C04
 * Callers:
 *     ?SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z @ 0x1C0005A5C (-SetCompositionInput@InputTransform@@YAHPEAUtagWND@@PEAX@Z.c)
 *     ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0005ADC (-StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z.c)
 * Callees:
 *     IsWindowDestroyed @ 0x1C0048AD4 (IsWindowDestroyed.c)
 */

struct tagINPUTTRANSFORMLIST *__fastcall InitInputTransformList(struct tagWND *a1)
{
  __int64 v2; // rcx
  struct tagINPUTTRANSFORMLIST *result; // rax

  if ( (unsigned int)IsWindowDestroyed() )
    return 0LL;
  result = *(struct tagINPUTTRANSFORMLIST **)(v2 + 272);
  if ( result )
    return result;
  if ( !gliQpcFreq )
    return 0LL;
  result = (struct tagINPUTTRANSFORMLIST *)Win32AllocPoolZInit(104LL, 2020176725LL);
  *((_QWORD *)a1 + 34) = result;
  if ( !result )
    return 0LL;
  *((_QWORD *)result + 2) = (char *)result + 8;
  *((_QWORD *)result + 1) = (char *)result + 8;
  *(_QWORD *)result = 0LL;
  return result;
}
