/*
 * XREFs of LdrpQueryValueKey @ 0x18004C2EC
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F224 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FF570 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     RtlpHasMachineUILock @ 0x1800FF8CC (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FF964 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FFB2C (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x180102444 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1801026E8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180102A28 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall LdrpQueryValueKey(__int64 a1, __int64 a2, _DWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int *v5; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  _DWORD *Heap; // rsi
  int v13; // eax
  int v14; // edi
  unsigned int v15; // eax
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      v17 = 0;
      v11 = v10 + 12;
      if ( v11 )
        Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
      else
        Heap = 0LL;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v13 = NtQueryValueKey(a1, a2, 2LL, Heap, v11, &v17);
      v14 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
        {
LABEL_15:
          if ( v14 != -2147483643 )
          {
LABEL_20:
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
            return (unsigned int)v14;
          }
LABEL_16:
          if ( v5 )
            *v5 = Heap[2];
          if ( a3 )
            *a3 = Heap[1];
          goto LABEL_20;
        }
        if ( a4 && v5 )
        {
          v15 = Heap[2];
          if ( v15 > *v5 )
          {
            v14 = -2147483643;
            goto LABEL_16;
          }
          if ( v15 <= v11 )
            memmove(a4, Heap + 3, v15);
        }
      }
      if ( v14 >= 0 )
        goto LABEL_16;
      goto LABEL_15;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
