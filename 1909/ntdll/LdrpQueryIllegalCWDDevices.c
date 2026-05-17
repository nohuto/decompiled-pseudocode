/*
 * XREFs of LdrpQueryIllegalCWDDevices @ 0x1800D4C10
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180074900 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall LdrpQueryIllegalCWDDevices(__int64 a1)
{
  int inited; // ebx
  char *v2; // rdi
  int ValueKey; // eax
  __int64 v4; // rsi
  int v5; // ecx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v8; // eax
  __int64 result; // rax
  unsigned int v10; // [rsp+38h] [rbp-D0h]
  int v11[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int16 v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v13; // [rsp+50h] [rbp-B8h]
  char v14; // [rsp+58h] [rbp-B0h] BYREF

  if ( a1 )
  {
    inited = RtlInitUnicodeStringEx((__int64)v12, (__int64)L"CWDIllegalInDLLSearch");
    if ( inited < 0 )
      goto LABEL_27;
    v2 = &v14;
    ValueKey = NtQueryValueKey();
    inited = ValueKey;
    if ( ValueKey >= 0 )
    {
      v4 = 0LL;
LABEL_5:
      v5 = *((_DWORD *)v2 + 1);
      if ( ((v5 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v5 == 4 )
        {
          if ( *((_DWORD *)v2 + 2) == 4 )
            v11[0] = *((_DWORD *)v2 + 3);
          else
            inited = -1073741820;
          goto LABEL_25;
        }
        if ( v5 != 1 )
        {
LABEL_17:
          inited = -1073741788;
          goto LABEL_25;
        }
        if ( ((unsigned __int8)v11 & 3) != 0 )
        {
          inited = -2147483646;
        }
        else
        {
          v13 = v2 + 12;
          v12[0] = *((_WORD *)v2 + 4);
          v12[1] = *((_WORD *)v2 + 4);
          inited = RtlUnicodeStringToInteger(v12, 0, v11);
        }
      }
      else
      {
        if ( v5 != 4 )
          goto LABEL_17;
        if ( *((_DWORD *)v2 + 2) > 4u )
          inited = -2147483643;
        else
          memmove(v11, v2 + 12, *((unsigned int *)v2 + 2));
      }
LABEL_25:
      if ( v4 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
LABEL_27:
      if ( inited >= 0 )
      {
        result = (unsigned int)(v11[0] + 1);
        if ( (unsigned int)result <= 3 )
          goto LABEL_32;
      }
      goto LABEL_29;
    }
    if ( ValueKey != -2147483643 )
      goto LABEL_27;
    while ( 1 )
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v10);
      v4 = Heap;
      if ( !Heap )
        break;
      v2 = (char *)Heap;
      v8 = NtQueryValueKey();
      inited = v8;
      if ( v8 >= 0 )
        goto LABEL_5;
      if ( v8 != -2147483643 )
        goto LABEL_25;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v2);
    }
  }
LABEL_29:
  result = (MEMORY[0x7FFE02D5] >> 4) & 3;
  if ( (_DWORD)result == 3 )
    result = 0xFFFFFFFFLL;
  v11[0] = result;
LABEL_32:
  if ( v11[0] == -1 )
  {
    LdrpIllegalCWDDevices = -1;
  }
  else if ( v11[0] == 1 )
  {
    LdrpIllegalCWDDevices = 0x2000;
  }
  else
  {
    result = 16LL;
    if ( v11[0] != 2 )
      result = 0LL;
    LdrpIllegalCWDDevices = result;
  }
  return result;
}
