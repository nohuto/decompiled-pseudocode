/*
 * XREFs of sub_1800090D4 @ 0x1800090D4
 * Callers:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FCD80 (RtlpGetUserOrMachineUILanguage4NLS.c)
 *     sub_1800FD0D0 @ 0x1800FD0D0 (sub_1800FD0D0.c)
 *     sub_1800FD168 @ 0x1800FD168 (sub_1800FD168.c)
 *     sub_1800FD330 @ 0x1800FD330 (sub_1800FD330.c)
 *     sub_1800FFB04 @ 0x1800FFB04 (sub_1800FFB04.c)
 *     sub_1800FFEAC @ 0x1800FFEAC (sub_1800FFEAC.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800090D4(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rbx
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *Heap; // rsi
  NTSTATUS v13; // eax
  int v14; // edi
  ULONG v15; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      ResultLength = 0;
      Length = v10 + 12;
      if ( Length )
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
      else
        Heap = 0LL;
      if ( !Heap )
        return (unsigned int)-1073741670;
      v13 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v14 = v13;
      if ( v13 != -1073741772 )
      {
        if ( v13 < 0 )
        {
LABEL_15:
          if ( v14 != -2147483643 )
          {
LABEL_20:
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
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
          if ( v15 <= Length )
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
