/*
 * XREFs of KsepCacheDeviceInsertData @ 0x14074D610
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x140154738 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140154760 (KsepPoolAllocatePaged.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     KsepStringFree @ 0x14070F0A4 (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x14073B5A0 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepCacheDeviceInsertData(__int64 a1, _WORD *a2, const void *a3, int a4, unsigned int Size)
{
  PVOID Paged; // rax
  void *v10; // rbx
  int v11; // edi
  PVOID v12; // rax
  _QWORD *v13; // rcx

  Paged = KsepPoolAllocatePaged(0x30uLL);
  v10 = Paged;
  if ( Paged )
  {
    v11 = KsepStringDuplicate((__int64)Paged + 16, a2);
    if ( v11 >= 0 )
    {
      v12 = KsepPoolAllocatePaged(Size);
      *((_QWORD *)v10 + 5) = v12;
      if ( v12 )
      {
        memmove(v12, a3, Size);
        *((_DWORD *)v10 + 9) = a4;
        *((_DWORD *)v10 + 8) = Size;
        v13 = *(_QWORD **)(a1 + 64);
        if ( *v13 != a1 + 56 )
          __fastfail(3u);
        *(_QWORD *)v10 = a1 + 56;
        *((_QWORD *)v10 + 1) = v13;
        *v13 = v10;
        *(_QWORD *)(a1 + 64) = v10;
        v10 = 0LL;
        v11 = 0;
      }
      else
      {
        v11 = -1073741801;
      }
    }
    if ( v10 )
    {
      KsepStringFree((_QWORD *)v10 + 2);
      KsepPoolFreePaged(*((void **)v10 + 5));
      KsepPoolFreePaged(v10);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v11;
}
