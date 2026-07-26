/*
 * XREFs of ndisNDKWmiGetAdapterCapabilities @ 0x1C00F7B20
 * Callers:
 *     ndisQueryGuidData @ 0x1C00B4E54 (ndisQueryGuidData.c)
 *     ndisGetRdmaCapabilities @ 0x1C00F7604 (ndisGetRdmaCapabilities.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009B60 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void *__fastcall ndisNDKWmiGetAdapterCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v5; // edx
  struct _NDIS_NDK_BLOCK *NDKBlock; // rdi
  void *result; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  result = memset(a3, 0, v5);
  if ( NDKBlock && a2 - 136 <= 8 )
  {
    *a3 = *((_DWORD *)NDKBlock + 10);
    a3[1] = *((_DWORD *)NDKBlock + 11);
    a3[2] = *((_DWORD *)NDKBlock + 12);
    a3[3] = *((_DWORD *)NDKBlock + 13);
    a3[4] = *((_DWORD *)NDKBlock + 14);
    a3[5] = *((_DWORD *)NDKBlock + 15);
    a3[6] = *((_DWORD *)NDKBlock + 16);
    a3[7] = *((_DWORD *)NDKBlock + 17);
    *((_QWORD *)a3 + 4) = *((_QWORD *)NDKBlock + 9);
    a3[10] = *((_DWORD *)NDKBlock + 22);
    a3[11] = *((_DWORD *)NDKBlock + 23);
    a3[12] = *((_DWORD *)NDKBlock + 24);
    *((_QWORD *)a3 + 7) = *((_QWORD *)NDKBlock + 13);
    *((_QWORD *)a3 + 8) = *((_QWORD *)NDKBlock + 14);
    a3[18] = *((_DWORD *)NDKBlock + 30);
    a3[19] = *((_DWORD *)NDKBlock + 31);
    a3[20] = *((_DWORD *)NDKBlock + 32);
    a3[21] = *((_DWORD *)NDKBlock + 33);
    a3[22] = *((_DWORD *)NDKBlock + 34);
    a3[23] = *((_DWORD *)NDKBlock + 35);
    a3[24] = *((_DWORD *)NDKBlock + 36);
    a3[25] = *((_DWORD *)NDKBlock + 37);
    a3[26] = *((_DWORD *)NDKBlock + 38);
    a3[27] = *((_DWORD *)NDKBlock + 39);
    a3[28] = *((_DWORD *)NDKBlock + 40);
    a3[29] = *((_DWORD *)NDKBlock + 41);
    a3[30] = *((_DWORD *)NDKBlock + 42);
    a3[31] = *((_DWORD *)NDKBlock + 43);
    a3[32] = *((_DWORD *)NDKBlock + 44);
    result = (void *)*((unsigned int *)NDKBlock + 45);
    a3[33] = (_DWORD)result;
    if ( a2 >= 0x90 )
    {
      result = (void *)*((unsigned int *)NDKBlock + 46);
      a3[34] = (_DWORD)result;
    }
  }
  return result;
}
