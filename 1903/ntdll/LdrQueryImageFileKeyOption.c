/*
 * XREFs of LdrQueryImageFileKeyOption @ 0x180079A80
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_1800798FC @ 0x1800798FC (sub_1800798FC.c)
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 *     sub_1800D4A28 @ 0x1800D4A28 (sub_1800D4A28.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall LdrQueryImageFileKeyOption(__int64 a1, __int64 a2, int a3, int *a4, unsigned int a5, int *a6)
{
  __int64 result; // rax
  unsigned int v10; // esi
  _DWORD *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r12
  unsigned int v14; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  size_t v20; // r8
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v22[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v23; // [rsp+40h] [rbp-C0h]
  int *v24; // [rsp+48h] [rbp-B8h]
  _BYTE v25[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v24 = a6;
  result = RtlInitUnicodeStringEx((__int64)v22, a2);
  if ( (int)result < 0 )
    return result;
  v10 = a5;
  if ( a5 >= 0x3F4 )
  {
    v14 = a5 + 12;
    goto LABEL_9;
  }
  v11 = v25;
  result = ZwQueryValueKey(a1, v22, 2LL, v25, 1024, &v21);
  v12 = result;
  if ( (int)result >= 0 )
  {
    v13 = 0LL;
LABEL_14:
    if ( !a3 )
    {
      if ( v11[2] > a5 )
      {
        v21 = v11[2];
        goto LABEL_17;
      }
      a3 = v11[1];
      v10 = v11[2];
    }
    v18 = v11[1];
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v18 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( v10 == 4 && v11[2] == 4 )
          {
            v21 = 4;
            if ( a4 )
            {
              *a4 = v11[3];
              goto LABEL_18;
            }
LABEL_17:
            v12 = -2147483643;
LABEL_18:
            if ( v24 && ((int)(v12 + 0x80000000) < 0 || v12 == -2147483643) )
              *v24 = v21;
            goto LABEL_22;
          }
          goto LABEL_33;
        }
LABEL_55:
        v12 = -1073741788;
        goto LABEL_22;
      }
      if ( v18 == 11 )
      {
        if ( a3 != 11 )
          goto LABEL_55;
        if ( v10 == 8 && v11[2] == 8 )
        {
          v21 = 8;
          if ( a4 )
          {
            *(_QWORD *)a4 = *(_QWORD *)(v11 + 3);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
LABEL_33:
        v12 = -1073741820;
        goto LABEL_22;
      }
      if ( v18 != 1 )
      {
        v12 = -1073741788;
        goto LABEL_18;
      }
      if ( a3 == 4 )
      {
        if ( v10 == 4 )
        {
          if ( ((unsigned __int8)a4 & 3) == 0 )
          {
            v21 = 4;
            if ( a4 )
            {
              v23 = v11 + 3;
              v22[0] = *((_WORD *)v11 + 4);
              v22[1] = *((_WORD *)v11 + 4);
              v12 = RtlUnicodeStringToInteger(v22, 0, a4);
              goto LABEL_18;
            }
            goto LABEL_17;
          }
          v12 = -2147483646;
LABEL_22:
          if ( v13 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
          return v12;
        }
        goto LABEL_33;
      }
      v19 = v11[2];
      v21 = v19;
      if ( v19 > v10 )
        goto LABEL_17;
      v20 = v19;
    }
    else
    {
      if ( a3 != v18 )
        goto LABEL_55;
      v21 = v11[2];
      if ( !a4 || v11[2] > v10 )
        goto LABEL_17;
      v20 = (unsigned int)v11[2];
    }
    memmove(a4, v11 + 3, v20);
    goto LABEL_18;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v14 = v21;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1572864, v14);
      v13 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v11 = (_DWORD *)Heap;
      v17 = ZwQueryValueKey(a1, v22, 2LL, Heap, v14, &v21);
      v12 = v17;
      if ( v17 >= 0 )
        goto LABEL_14;
      if ( v17 != -2147483643 )
        goto LABEL_22;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11);
    }
  }
  return result;
}
