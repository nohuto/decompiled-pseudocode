/*
 * XREFs of ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1C01F7FE4
 * Callers:
 *     Win32UAFMFreePagedLookasideListImpl @ 0x1C01F8950 (Win32UAFMFreePagedLookasideListImpl.c)
 *     Win32UAFMFreePoolImpl @ 0x1C01F89A0 (Win32UAFMFreePoolImpl.c)
 *     Win32UAFMFreeToPagedLookasideListImpl @ 0x1C01F89D0 (Win32UAFMFreeToPagedLookasideListImpl.c)
 * Callees:
 *     ?PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z @ 0x1C02BF7E4 (-PlatformAbort@NSInstrumentation@@YAXW4PLATFORMABORTREASON@1@PEAX11@Z.c)
 */

__int64 __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a1 - 4) - 1);
  if ( a2 != (_DWORD)result )
    return NSInstrumentation::PlatformAbort(0LL, a1);
  return result;
}
