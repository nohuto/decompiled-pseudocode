/*
 * XREFs of WbProcessModuleUnload @ 0x1406B1C64
 * Callers:
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B1D48 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B1E5C (WbHeapExecutionUnloadModule.c)
 */

__int64 __fastcall WbProcessModuleUnload(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // edi
  _OWORD *v6; // rax
  _DWORD *v7; // rcx
  _QWORD *v8; // rbx
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  if ( a3 >= 0x10 && *a2 == 9LL )
  {
    v5 = WbAlloc(0x10uLL, &P);
    if ( v5 >= 0 )
    {
      v6 = (_OWORD *)a2[1];
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFF0000LL || v6 + 1 < v6 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v6 = (_OWORD *)a2[1];
      }
      v7 = P;
      *(_OWORD *)P = *v6;
      if ( *v7 )
      {
        v5 = -1073741811;
      }
      else
      {
        v8 = P;
        WbHeapExecutionUnloadModule(a1, *((_QWORD *)P + 1));
        WbInPlaceEncryptionUnloadModule(a1, v8[1]);
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x42524157u);
  return (unsigned int)v5;
}
