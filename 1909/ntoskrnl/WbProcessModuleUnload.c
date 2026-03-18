/*
 * XREFs of WbProcessModuleUnload @ 0x1406D5338
 * Callers:
 *     WbDispatchOperation @ 0x1405CADA0 (WbDispatchOperation.c)
 * Callees:
 *     WbAlloc @ 0x1405CAA90 (WbAlloc.c)
 *     sub_1405CAD80 @ 0x1405CAD80 (sub_1405CAD80.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D5414 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5528 (WbHeapExecutionUnloadModule.c)
 */

__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  __int128 *v6; // rax
  __int128 v7; // xmm0
  _DWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10uLL, &v11);
    if ( v5 >= 0 )
    {
      v6 = (__int128 *)a2[1];
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFF0000LL || v6 + 1 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = (__int128 *)a2[1];
      }
      v7 = *v6;
      v8 = v11;
      *(_OWORD *)v11 = v7;
      if ( *v8 )
      {
        v5 = -1073741811;
      }
      else
      {
        v9 = v11;
        WbHeapExecutionUnloadModule(a1, v11[1]);
        WbInPlaceEncryptionUnloadModule(a1, v9[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  sub_1405CAD80(v11);
  return (unsigned int)v5;
}
