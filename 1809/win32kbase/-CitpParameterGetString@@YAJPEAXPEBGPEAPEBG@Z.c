/*
 * XREFs of ?CitpParameterGetString@@YAJPEAXPEBGPEAPEBG@Z @ 0x1C0078BE0
 * Callers:
 *     ?CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z @ 0x1C00789D8 (-CitpPostUpdateUseInfoGetUpdateKey@@YAJPEAI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C0079214 (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z @ 0x1C00792A4 (-CitpRegistryGetValue@@YAJPEAXPEBGPEAPEAU_KEY_VALUE_PARTIAL_INFORMATION@@@Z.c)
 */

__int64 __fastcall CitpParameterGetString(void *a1, const unsigned __int16 *a2, unsigned __int16 **a3)
{
  int Value; // eax
  struct _KEY_VALUE_PARTIAL_INFORMATION *v5; // rdi
  int v6; // ebx
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v9; // [rsp+38h] [rbp+10h] BYREF
  struct _KEY_VALUE_PARTIAL_INFORMATION *v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  Value = CitpRegistryGetValue(a1, a2, &v10);
  v5 = v10;
  v6 = Value;
  if ( Value >= 0 )
  {
    v6 = CitpStringDuplicate(&v9, (const unsigned __int16 *)v10->Data, (unsigned __int64)v10->DataLength >> 1);
    if ( v6 < 0 )
    {
      v7 = v9;
    }
    else
    {
      v7 = 0LL;
      *a3 = v9;
      v6 = 0;
    }
    if ( v7 )
      Win32FreePool((__int64)v7);
  }
  if ( v5 )
    Win32FreePool((__int64)v5);
  return (unsigned int)v6;
}
