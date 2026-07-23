/*
 * XREFs of MiPfIssueCoalescedSupport @ 0x1402AF194
 * Callers:
 *     MiPfIssueCoalesceCandidates @ 0x1402AF0BC (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x14002C6B0 (MiInitializeInPageSupport.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiPfIssueCoalescedSupport(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  char *result; // rax
  __int64 v5; // rbx
  char *v6; // rsi
  char *v7; // r13
  int v8; // r12d
  _QWORD *v9; // r14
  __int64 v10; // rax
  PVOID *v11; // rcx
  struct _FILE_OBJECT *v12; // rax
  unsigned int v13; // r8d
  unsigned __int64 v14; // rdx
  size_t v15; // rdi
  __int64 v16; // rax
  NTSTATUS v17; // eax
  struct _FILE_OBJECT *v18; // [rsp+90h] [rbp+18h]
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (a2 >> 12) + 320, 0x7343694Du);
  v5 = 0LL;
  v6 = result;
  if ( result )
  {
    MiInitializeInPageSupport((ULONG_PTR)result, 0);
    *((_DWORD *)v6 + 48) |= 0x800000u;
    *((_QWORD *)v6 + 34) = 0LL;
    v7 = v6 + 320;
    *((_WORD *)v6 + 141) = 0;
    v8 = 0;
    *((_WORD *)v6 + 140) = 8 * (((unsigned __int64)(v2 + 4095) >> 12) + 6);
    *((_QWORD *)v6 + 38) = 0LL;
    *((_DWORD *)v6 + 79) = 0;
    *((_DWORD *)v6 + 78) = v2;
    *((_WORD *)v6 + 141) |= 0x4042u;
    v18 = (struct _FILE_OBJECT *)MmBadPointer;
    while ( 1 )
    {
      v9 = (_QWORD *)*a1;
      if ( (_QWORD *)*a1 == a1 )
        break;
      if ( (_QWORD *)v9[1] != a1
        || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9)
        || (*a1 = v10, *(_QWORD *)(v10 + 8) = a1, v11 = (PVOID *)*((_QWORD *)v6 + 3), *v11 != v6 + 16) )
      {
        __fastfail(3u);
      }
      v9[1] = v11;
      *v9 = v6 + 16;
      *v11 = v9;
      *((_QWORD *)v6 + 3) = v9;
      if ( (*((_WORD *)v9 + 141) & 0x4000) == 0 )
        *((_WORD *)v6 + 141) &= ~0x4000u;
      if ( v8 )
      {
        if ( v5 != v9[12] )
        {
          *((_WORD *)v6 + 141) &= ~0x4000u;
          v13 = *((_DWORD *)v9 + 24) - v5;
          v14 = (unsigned __int64)(8 * (v13 >> 12)) >> 3;
          memset64(v7, qword_14043BE98, v14);
          v7 += 8 * v14;
          v5 += v13;
          v8 += v13;
        }
      }
      else
      {
        v5 = v9[12];
        v12 = (struct _FILE_OBJECT *)v9[25];
        v19 = v5;
        v18 = v12;
      }
      v15 = (unsigned int)(8 * (*((_DWORD *)v9 + 46) >> 12));
      memmove(v7, v9 + 40, v15);
      v16 = *((unsigned int *)v9 + 46);
      v5 += v16;
      v8 += v16;
      v7 += 8 * (v15 >> 3);
    }
    v17 = IoPageReadEx(
            v18,
            (struct _MDL *)(v6 + 272),
            &v19,
            (struct _KEVENT *)(v6 + 32),
            (struct _IO_STATUS_BLOCK *)v6 + 5,
            6,
            0LL);
    if ( v17 < 0 )
    {
      *((_QWORD *)v6 + 11) = 0LL;
      *((_DWORD *)v6 + 20) = v17;
      KeSetEvent((PRKEVENT)(v6 + 32), 0, 0);
    }
    return v6;
  }
  return result;
}
