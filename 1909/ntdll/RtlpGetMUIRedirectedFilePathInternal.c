/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x18005A44C
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x18005A338 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x18005A68C (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        __int16 *a1,
        _WORD *a2,
        _WORD *a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  void *Heap; // r12
  unsigned __int64 v11; // rax
  int appended; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r14
  unsigned int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  void *Src; // [rsp+30h] [rbp-38h]

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
    v16 = appended;
    goto LABEL_29;
  }
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 520LL);
  if ( !Heap )
  {
    appended = -1073741801;
    goto LABEL_35;
  }
  v17 = 34078720LL;
  Src = Heap;
  appended = RtlAppendUnicodeToString((unsigned __int16 *)&v17, a2);
  v16 = appended;
  if ( appended >= 0 )
  {
    appended = RtlAppendUnicodeToString((unsigned __int16 *)&v17, L"\\");
    v16 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v17, a1);
      v16 = appended;
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeToString((unsigned __int16 *)&v17, L"\\");
        v16 = appended;
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v17, a3);
          v16 = appended;
          if ( appended >= 0 )
          {
            if ( !a5
              || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v17, L".mui"), v16 = appended, appended >= 0) )
            {
              LOBYTE(v13) = 1;
              if ( !(unsigned __int8)RtlDoesFileExists_UEx(Src, v13) )
              {
                appended = -1073741809;
LABEL_19:
                v16 = appended;
                goto LABEL_29;
              }
              if ( a6 )
              {
                v14 = (unsigned __int64)(unsigned __int16)v17 >> 1;
                if ( (unsigned int)*a4 >= v14 + 1 )
                {
                  memmove(a6, Src, (unsigned __int16)v17);
                  *((_WORD *)a6 + v14) = 0;
                  goto LABEL_29;
                }
                *a4 = v14 + 1;
                appended = -1073741789;
                goto LABEL_19;
              }
              if ( a4 )
                *a4 = ((unsigned __int16)v17 >> 1) + 1;
            }
          }
        }
      }
    }
  }
LABEL_29:
  if ( Heap )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
    return v16;
  }
  return (unsigned int)appended;
}
