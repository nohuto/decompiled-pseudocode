/*
 * XREFs of sub_18005A3AC @ 0x18005A3AC
 * Callers:
 *     sub_18005A298 @ 0x18005A298 (sub_18005A298.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005A5EC @ 0x18005A5EC (sub_18005A5EC.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18005A3AC(PCUNICODE_STRING Source, PCWSTR a2, PCWSTR a3, _DWORD *a4, char a5, void *a6)
{
  WCHAR *Heap; // r12
  unsigned __int64 v11; // rax
  NTSTATUS appended; // ebx
  unsigned __int64 v13; // r14
  unsigned __int32 v15; // [rsp+20h] [rbp-48h]
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-40h] BYREF

  Heap = 0LL;
  if ( !a2 || !a3 )
  {
    appended = -1073741811;
    goto LABEL_35;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( a2[v11] );
  if ( v11 >= 0x104 )
  {
    appended = -1073741306;
LABEL_35:
    v15 = appended;
    goto LABEL_29;
  }
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_35;
  }
  *(_QWORD *)&Destination.Length = 34078720LL;
  Destination.Buffer = Heap;
  appended = RtlAppendUnicodeToString(&Destination, a2);
  v15 = appended;
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString(&Destination, "\\");
    v15 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      v15 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString(&Destination, "\\");
        v15 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, a3);
          v15 = appended;
          if ( appended >= 0 )
          {
            if ( !a5 || (appended = RtlAppendUnicodeToString(&Destination, L".mui"), v15 = appended, appended >= 0) )
            {
              if ( !(unsigned __int8)sub_18005A5EC(Destination.Buffer) )
              {
                appended = -1073741809;
LABEL_19:
                v15 = appended;
                goto LABEL_29;
              }
              if ( a6 )
              {
                v13 = (unsigned __int64)Destination.Length >> 1;
                if ( (unsigned int)*a4 >= v13 + 1 )
                {
                  memmove(a6, Destination.Buffer, Destination.Length);
                  *((_WORD *)a6 + v13) = 0;
                  goto LABEL_29;
                }
                *a4 = v13 + 1;
                appended = -1073741789;
                goto LABEL_19;
              }
              if ( a4 )
                *a4 = (Destination.Length >> 1) + 1;
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( Heap )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return v15;
  }
  return (unsigned int)appended;
}
