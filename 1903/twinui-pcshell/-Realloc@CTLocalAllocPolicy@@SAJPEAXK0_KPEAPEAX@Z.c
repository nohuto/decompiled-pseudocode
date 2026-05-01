/*
 * XREFs of ?Realloc@CTLocalAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180069F08
 * Callers:
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180069E30 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@V?$CTPolicyLocalMem@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardCompareHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@V?$CSimpleArrayStandardMergeHelper@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@@@@@QEAAJ_K0@Z @ 0x1801279DC (-_EnsureCapacity@-$CTSimpleArray@PEAUDesktopVisibilityChangeListener@CImmersiveMode@@$0PPPPPPPO@.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTLocalAllocPolicy::Realloc(
        void *a1,
        unsigned int a2,
        void *a3,
        unsigned __int64 a4,
        void **a5)
{
  HLOCAL v6; // rax

  if ( !a3 )
    return CTLocalAllocPolicy::Alloc(a1, a2, a4, a5);
  v6 = LocalReAlloc(a3, a4, 0x42u);
  *a5 = v6;
  return v6 == 0LL ? 0x8007000E : 0;
}
