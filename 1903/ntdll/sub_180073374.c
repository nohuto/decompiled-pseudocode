/*
 * XREFs of sub_180073374 @ 0x180073374
 * Callers:
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     ZwEnumerateKey @ 0x18009CD20 (ZwEnumerateKey.c)
 */

__int64 __fastcall sub_180073374(_QWORD *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  _QWORD *v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 result; // rax
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  int inited; // edi
  int v12; // r12d
  int v13; // eax
  void *ProcessHeap; // rcx
  int v15; // eax
  __int64 Heap; // rax
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh]
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v21[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-98h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  _QWORD *v26; // [rsp+78h] [rbp-88h]
  unsigned __int16 v27[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  _BYTE v34[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]

  v24 = a2;
  v3 = v34;
  v4 = a1;
  v26 = a1;
  v5 = 0;
  v19 = 0LL;
  v18 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v21, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = ZwQueryValueKey(*v4, v21, 2LL, v34, 544, &v17);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v35 != 4 || v36 != 4 || !v37 )
    return 0LL;
  v23 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v21, (__int64)&qword_180123030);
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v21, (__int64)&v23, 1) )
    {
      LOWORD(v23) = v23 - 8;
      WORD1(v23) -= 8;
      *((_QWORD *)&v23 + 1) += 8LL;
    }
    v9 = v34;
    v20 = 0;
    v25 = v34;
    v10 = 0;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _BYTE *, int, unsigned int *))ZwEnumerateKey)(
                 *v4,
                 v10,
                 0LL,
                 v9,
                 v18,
                 &v17);
      if ( inited < 0 )
        goto LABEL_39;
      v21[0] = *((_WORD *)v25 + 6);
      v21[1] = *((_WORD *)v25 + 6);
      v22 = v25 + 16;
      v30 = *v4;
      v31 = v21;
      v29 = 48;
      v32 = 576;
      v33 = 0LL;
      inited = ZwOpenKey(&v19, v24, &v29);
      if ( inited < 0 )
        goto LABEL_39;
      inited = RtlInitUnicodeStringEx((__int64)v21, (__int64)L"FilterFullPath");
      if ( inited < 0 )
        goto LABEL_38;
      v12 = v18;
      do
      {
        v13 = ZwQueryValueKey(v19, v21, 2LL, v3, v12, &v17);
        inited = v13;
        if ( v13 == -2147483643 || v13 == -1073741789 )
        {
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( ProcessHeap )
          {
            Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1572864, v17);
            v6 = Heap;
            if ( Heap )
            {
              v12 = v17;
              v3 = (_BYTE *)Heap;
              v25 = (_BYTE *)Heap;
              continue;
            }
          }
          else
          {
            v6 = 0LL;
          }
          inited = -1073741801;
        }
      }
      while ( inited == -2147483643 || inited == -1073741789 );
      v18 = v12;
      v4 = v26;
      if ( inited >= 0 )
      {
        if ( *((_DWORD *)v3 + 1) == 1 && *((_DWORD *)v3 + 2) <= 0xFFFEu )
        {
          v27[0] = *((_WORD *)v3 + 4) - 2;
          v27[1] = v27[0];
          v28 = v3 + 12;
          if ( !(unsigned int)RtlCompareUnicodeString((unsigned __int16 *)&v23, v27, 1) )
            goto LABEL_40;
        }
LABEL_38:
        ZwClose(v19);
        goto LABEL_39;
      }
      ZwClose(v19);
      v15 = 0;
      if ( inited != -1073741772 )
        v15 = inited;
      inited = v15;
LABEL_39:
      v9 = v25;
      v10 = ++v20;
      if ( inited < 0 )
      {
LABEL_40:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          ZwClose(*v4);
          *v4 = v19;
        }
        if ( inited != -2147483622 )
          return (unsigned int)inited;
        return v5;
      }
    }
  }
  return result;
}
