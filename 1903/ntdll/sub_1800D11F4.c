/*
 * XREFs of sub_1800D11F4 @ 0x1800D11F4
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 */

__int64 __fastcall sub_1800D11F4(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 *v9; // rbx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // ecx
  __int64 i; // rax
  __int64 result; // rax
  int v15; // ecx
  int *v16; // rbx
  int v17; // r13d
  int inited; // edi
  char *v19; // r14
  int ValueKey; // eax
  __int64 v21; // r15
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v27[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v28; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v29; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  char v32; // [rsp+70h] [rbp-90h] BYREF

  v9 = a1;
  if ( MEMORY[0x7FFE02EC] )
  {
    *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
    return 0LL;
  }
  if ( a3 )
  {
    v10 = *a1;
    v11 = *a1;
    v12 = v10;
    for ( i = *((_QWORD *)v9 + 1) + v11; v12; v12 -= 2 )
    {
      if ( *(_WORD *)(i - 2) == 92 )
        break;
      i -= 2LL;
    }
    v30 = i;
    v29 = v10 - v12;
    RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
    if ( !(unsigned int)RtlCompareUnicodeString(&v29, &DestinationString.Length, 1) )
    {
      *(_DWORD *)(a2 + 188) &= 0xFDFFFEFF;
      return 0LL;
    }
  }
  byte_1801665B8 = (*(_DWORD *)(a2 + 188) & 0x2000100) != 0;
  LOBYTE(a1) = a3;
  result = sub_1800D8B78((_DWORD)a1, (_DWORD)v9, a4, 0, a5, a6);
  v15 = *(_DWORD *)(a2 + 188);
  if ( (int)result < 0 )
  {
    dword_18015F9B8 = 0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFDFFFEFF;
    *(_DWORD *)off_18015F9B0 = 0;
    return result;
  }
  if ( (v15 & 0x2000000) != 0 )
  {
    v16 = (int *)off_18015F9B0;
    *(_DWORD *)(a2 + 188) = v15 & 0xFFFF670F;
    byte_1801665B8 = 1;
    v17 = *v16;
    *v16 = -1;
    if ( !a4 )
      goto LABEL_44;
    inited = RtlInitUnicodeStringEx((__int64)v27, (__int64)L"PageHeapFlags");
    if ( inited < 0 )
    {
LABEL_42:
      if ( inited < 0 )
LABEL_43:
        *v16 = -1;
LABEL_44:
      if ( *v16 == -1 )
        *v16 = v17;
      if ( (((*v16 & 0x400) != 0) & _bittest(&dword_180164EE8, 0xFu)) != 0 )
      {
        if ( (dword_18015FAB0 & 5) != 0 )
        {
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrinit.c",
            6899,
            (unsigned int)"LdrpInitializeApplicationVerifierPackage",
            2,
            "Per-DLL page heap is disabled since fast fill heap is enabled\n");
          v16 = (int *)off_18015F9B0;
        }
        *v16 &= ~0x400u;
      }
      dword_18015F9B8 = 1;
      return 0LL;
    }
    v19 = &v32;
    ValueKey = ZwQueryValueKey();
    inited = ValueKey;
    if ( ValueKey < 0 )
    {
      if ( ValueKey == -2147483643 )
      {
        while ( 1 )
        {
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( !ProcessHeap )
            break;
          Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1572864, v26);
          v21 = Heap;
          if ( !Heap )
            break;
          v19 = (char *)Heap;
          v24 = ZwQueryValueKey();
          inited = v24;
          if ( v24 >= 0 )
            goto LABEL_22;
          if ( v24 != -2147483643 )
            goto LABEL_39;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v19);
        }
        v16 = (int *)off_18015F9B0;
        goto LABEL_43;
      }
      goto LABEL_41;
    }
    v21 = 0LL;
LABEL_22:
    v25 = *((_DWORD *)v19 + 1);
    if ( ((v25 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v25 == 4 )
      {
        if ( *((_DWORD *)v19 + 2) != 4 )
        {
          inited = -1073741820;
          goto LABEL_39;
        }
        if ( v16 )
        {
          *v16 = *((_DWORD *)v19 + 3);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
      if ( v25 == 1 )
      {
        if ( ((unsigned __int8)v16 & 3) != 0 )
        {
          inited = -2147483646;
          goto LABEL_39;
        }
        if ( v16 )
        {
          v28 = v19 + 12;
          v27[0] = *((_WORD *)v19 + 4);
          v27[1] = *((_WORD *)v19 + 4);
          inited = RtlUnicodeStringToInteger(v27, 0, v16);
          goto LABEL_39;
        }
        goto LABEL_38;
      }
    }
    else if ( v25 == 4 )
    {
      if ( v16 && *((_DWORD *)v19 + 2) <= 4u )
      {
        memmove(v16, v19 + 12, *((unsigned int *)v19 + 2));
        goto LABEL_39;
      }
LABEL_38:
      inited = -2147483643;
LABEL_39:
      if ( v21 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
LABEL_41:
      v16 = (int *)off_18015F9B0;
      goto LABEL_42;
    }
    inited = -1073741788;
    goto LABEL_39;
  }
  return 0LL;
}
