/*
 * XREFs of ?CitpStart@@YAJXZ @ 0x1C0080C78
 * Callers:
 *     ?CitpInitialize@@YAJPEBG@Z @ 0x1C0080B08 (-CitpInitialize@@YAJPEBG@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080D28 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080D80 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0080F68 (-CitpContextCleanup@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008111C (-CitpUpdateBootStats@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpIsInteractiveSession@@YAEXZ @ 0x1C0081B18 (-CitpIsInteractiveSession@@YAEXZ.c)
 *     ?CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081B44 (-CitpPostUpdateUseInfoLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0081ED0 (-CitpDPDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C01C73F4 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 CitpStart(void)
{
  struct _CIT_IMPACT_CONTEXT *v0; // rax
  const char *v1; // rdx
  __int64 v2; // rdi
  int v3; // ebx
  __int16 v4; // ax

  if ( byte_1C02157E1 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( CitpIsInteractiveSession() )
  {
    v0 = (struct _CIT_IMPACT_CONTEXT *)Win32AllocPool(856LL, 0x49637355u);
    v2 = (__int64)v0;
    if ( v0 )
    {
      CitpContextInitialize(v0);
      v3 = CitpContextTrackingDataStart((struct _CIT_IMPACT_CONTEXT *)v2);
      if ( v3 >= 0 )
      {
        v4 = MEMORY[0xFFFFF780000002C4];
        if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
          v4 = -1;
        v3 = 0;
        *(_WORD *)(v2 + 116) = v4;
      }
      if ( v3 >= 0 )
      {
        qword_1C0215810 = (struct _CIT_IMPACT_CONTEXT *)v2;
        v2 = 0LL;
        if ( !(unsigned __int8)RtlIsMultiSessionSku() )
        {
          CitpPostUpdateUseInfoLoad(qword_1C0215810);
          CitpDPDataLoad(qword_1C0215810);
          CitpUpdateBootStats(qword_1C0215810);
        }
        v3 = 0;
      }
      if ( v2 )
      {
        CitpContextCleanup((struct _CIT_IMPACT_CONTEXT *)v2);
        Win32FreePool(v2);
      }
    }
    else
    {
      v3 = -1073741670;
      CitpLogFailureWorker(-1073741670, v1, 0xC8u);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
