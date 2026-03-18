/*
 * XREFs of RtlpHpGetOwnerHeap @ 0x14000E6C0
 * Callers:
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14000DE34 (RtlCSparseBitmapBitmaskRead.c)
 */

unsigned __int64 __fastcall RtlpHpGetOwnerHeap(__int64 a1, __int128 *a2)
{
  int v2; // ebx
  _QWORD *HeapManager; // rax
  __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  if ( !(_WORD)a1 )
  {
    v8 = *a2;
    HeapManager = RtlpHpEnvGetHeapManager(&v8);
    v7 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 1), 2 * ((unsigned __int64)(a1 - HeapManager[9]) >> 20));
    if ( !v7 )
      goto LABEL_6;
    v2 = v7 - 1;
  }
  if ( v2 != 2 )
  {
    v9 = 0x100000;
    v10 = 0x1000000;
    return (a1 & -(__int64)(unsigned int)*(&v9 + v2) ^ RtlpHpHeapGlobals ^ *(_QWORD *)((a1 & -(__int64)(unsigned int)*(&v9 + v2))
                                                                                     + 0x10) ^ 0xA2E64EADA2E64EADuLL)
         - 192LL * v2
         - 256;
  }
LABEL_6:
  v8 = *a2;
  RtlpHpQueryVA(a1, &v8, &v11, &v9);
  return *(_QWORD *)v11;
}
