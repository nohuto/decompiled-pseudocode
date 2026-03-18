/*
 * XREFs of ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02BF7E4
 * Callers:
 *     ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C00FF4C8 (-Free@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01008C4 (-Free@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01F7FE4 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 *     ?Free@?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01F96D0 (-Free@-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::PlatformAbort(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx

  result = 0LL;
  if ( !a1 )
    KeBugCheckEx(0x164u, 9uLL, a2, a3, 0LL);
  v4 = a1 - 1;
  if ( !v4 )
    KeBugCheckEx(0x164u, 0x23uLL, a2, a3, 0LL);
  v5 = v4 - 1;
  if ( !v5 )
    KeBugCheckEx(0x164u, 0x22uLL, a2, a3, 0LL);
  if ( v5 == 1 )
    KeBugCheckEx(0x164u, 0x21uLL, a2, a3, 0LL);
  return result;
}
